//
// Copyright 2011 Ettus Research LLC
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//



module simple_gemac_wrapper_tb;
`include "eth_tasks_f36.v"
     
   reg reset   = 1;
   initial #1000 reset = 0;
   wire wb_rst 	= reset;

   reg eth_clk     = 0;
   always #50 eth_clk = ~eth_clk;

   reg wb_clk 	= 0;
   always #173 wb_clk = ~wb_clk;

   reg sys_clk 	= 0;
   always #77 sys_clk = ~ sys_clk;
   
   wire GMII_RX_DV, GMII_RX_ER, GMII_TX_EN, GMII_TX_ER, GMII_GTX_CLK;
   wire [7:0] GMII_RXD, GMII_TXD;

   wire rx_valid, rx_error, rx_ack;
   wire tx_ack, tx_valid, tx_error;
   
   wire [7:0] rx_data, tx_data;
   
   wire GMII_RX_CLK   = GMII_GTX_CLK;

   reg [7:0] FORCE_DAT_ERR = 0;
   reg FORCE_ERR = 0;
   
   // Loopback
   assign GMII_RX_DV  = GMII_TX_EN;
   assign GMII_RX_ER  = GMII_TX_ER | FORCE_ERR;
   assign GMII_RXD    = GMII_TXD ^ FORCE_DAT_ERR;


   wire [31:0] wb_dat_o;
   reg [31:0]  wb_dat_i;
   reg [7:0]   wb_adr;
   reg 	       wb_stb=0, wb_cyc=0, wb_we=0;
   wire        wb_ack;

   reg [35:0]  tx_f36_data=0;
   reg 	       tx_f36_src_rdy = 0;
   wire        tx_f36_dst_rdy;
   wire [35:0] rx_f36_data;
   wire        rx_f36_src_rdy;
   wire        rx_f36_dst_rdy = 1;
   
   simple_gemac_wrapper simple_gemac_wrapper
     (.clk125(eth_clk),  .reset(reset),
      .GMII_GTX_CLK(GMII_GTX_CLK), .GMII_TX_EN(GMII_TX_EN),  
      .GMII_TX_ER(GMII_TX_ER), .GMII_TXD(GMII_TXD),
      .GMII_RX_CLK(GMII_RX_CLK), .GMII_RX_DV(GMII_RX_DV),  
      .GMII_RX_ER(GMII_RX_ER), .GMII_RXD(GMII_RXD),

      .sys_clk(sys_clk), .rx_f36_data(rx_f36_data), .rx_f36_src_rdy(rx_f36_src_rdy), .rx_f36_dst_rdy(rx_f36_dst_rdy),
      .tx_f36_data(tx_f36_data), .tx_f36_src_rdy(tx_f36_src_rdy), .tx_f36_dst_rdy(tx_f36_dst_rdy),

      .wb_clk(wb_clk), .wb_rst(wb_rst), .wb_stb(wb_stb), .wb_cyc(wb_cyc), .wb_ack(wb_ack), .wb_we(wb_we),
      .wb_adr(wb_adr), .wb_dat_i(wb_dat_i), .wb_dat_o(wb_dat_o),

      .mdio(), .mdc(),
      .debug() );
   
   initial $dumpfile("simple_gemac_wrapper_tb.vcd");
   initial $dumpvars(0,simple_gemac_wrapper_tb);

   integer i; 
   reg [7:0] pkt_rom[0:65535];
   reg [1023:0] ROMFile;
   
   initial
     for (i=0;i<65536;i=i+1)
       pkt_rom[i] <= 8'h0;

   initial
     begin
	@(negedge reset);
	repeat (10)
	  @(posedge wb_clk);
	WishboneWR(0,6'b111101); 
	WishboneWR(4,16'hA0B0);
	WishboneWR(8,32'hC0D0_A1B1);
	WishboneWR(12,16'h0000);
	WishboneWR(16,32'h0000_0000);
	
	@(posedge eth_clk);
	SendFlowCtrl(16'h0007);  // Send flow control
	@(posedge eth_clk);
	#30000;
	@(posedge eth_clk);
	SendFlowCtrl(16'h0009);  // Increase flow control before it expires
	#10000;
	@(posedge eth_clk);
	SendFlowCtrl(16'h0000);  // Cancel flow control before it expires
	@(posedge eth_clk); 

	repeat (1000)
	  @(posedge sys_clk);
	SendPacket_to_fifo36(32'hA0B0C0D0,10);    // This packet gets dropped by the filters
	repeat (1000)
	  @(posedge sys_clk);

	SendPacket_to_fifo36(32'hAABBCCDD,100);    // This packet gets dropped by the filters
	repeat (10)
	  @(posedge sys_clk);
/*
 	SendPacketFromFile_f36(60,0,0);  // The rest are valid packets
	repeat (10)
	  @(posedge clk);

 	SendPacketFromFile_f36(61,0,0);
	repeat (10)
	  @(posedge clk);
	SendPacketFromFile_f36(62,0,0);
	repeat (10)
	  @(posedge clk);
	SendPacketFromFile_f36(63,0,0);
	repeat (1)
	  @(posedge clk);
	SendPacketFromFile_f36(64,0,0);
	repeat (10)
	  @(posedge clk);
	SendPacketFromFile_f36(59,0,0);
	repeat (1)
	  @(posedge clk);
	SendPacketFromFile_f36(58,0,0);
	repeat (1)
	  @(posedge clk);
	SendPacketFromFile_f36(100,0,0);
	repeat (1)
	  @(posedge clk);
	SendPacketFromFile_f36(200,150,30);  // waiting 14 empties the fifo, 15 underruns
	repeat (1)
	  @(posedge clk);
	SendPacketFromFile_f36(100,0,30);
 */
	#100000 $finish;
     end

   // Force a CRC error
    initial
     begin
	#90000;
	@(posedge eth_clk);
	FORCE_DAT_ERR <= 8'h10;
	@(posedge eth_clk);
	FORCE_DAT_ERR <= 8'h00;
     end

   // Force an RX_ER error (i.e. link loss)
   initial
     begin
	#116000;
	@(posedge eth_clk);
	FORCE_ERR <= 1;
	@(posedge eth_clk);
	FORCE_ERR <= 0;
     end
/*
   // Cause receive fifo to fill, causing an RX overrun
   initial
     begin
	#126000;
	@(posedge clk);
	rx_ll_dst_rdy2 <= 0;
	repeat (30)          // Repeat of 14 fills the shortfifo, but works.  15 overflows
	  @(posedge clk);
	rx_ll_dst_rdy2 <= 1;
     end
  */
   // Tests: Send and recv flow control, send and receive good packets, RX CRC err, RX_ER, RX overrun, TX underrun
   // Still need to test: CRC errors on Pause Frames, MDIO, wishbone

   task WishboneWR;
      input [7:0] adr;
      input [31:0] value;
      begin
	 wb_adr   <= adr;
	 wb_dat_i <= value;
	 wb_stb   <= 1;
	 wb_cyc   <= 1;
	 wb_we 	  <= 1;
	 while (~wb_ack)
	   @(posedge wb_clk);
	 @(posedge wb_clk);
	 wb_stb <= 0;
	 wb_cyc <= 0;
	 wb_we 	<= 0;
      end
   endtask // WishboneWR
   /*
   always @(posedge clk)
     if(rx_ll_src_rdy2 & rx_ll_dst_rdy2)
       begin
	  if(rx_ll_sof2 & ~rx_ll_eof2)
	    $display("RX-PKT-START %d",$time);
	  $display("RX-PKT SOF %d EOF %d ERR%d DAT %x",rx_ll_sof2,rx_ll_eof2,rx_ll_error2,rx_ll_data2);
	  if(rx_ll_eof2 & ~rx_ll_sof2)
	    $display("RX-PKT-END %d",$time);
       end
   */
endmodule // simple_gemac_wrapper_tb
