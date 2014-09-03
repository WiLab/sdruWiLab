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


module udp_wrapper
  #(parameter BASE=0)
   (input clk, input reset, input clear,
    input set_stb, input [7:0] set_addr, input [31:0] set_data,
    input [18:0] rx_f19_data, input rx_f19_src_rdy_i, output rx_f19_dst_rdy_o,
    output [18:0] tx_f19_data, output tx_f19_src_rdy_o, input tx_f19_dst_rdy_i,
    
    output [35:0] rx_f36_data, output rx_f36_src_rdy_o, input rx_f36_dst_rdy_i,
    input [35:0] tx_f36_data, input tx_f36_src_rdy_i, output tx_f36_dst_rdy_o,
    output [31:0] debug
    );

   wire 	 tx_int1_src_rdy, tx_int1_dst_rdy;
   wire [18:0] 	 tx_int1_data;
   
   wire 	 tx_int2_src_rdy, tx_int2_dst_rdy;
   wire [18:0] 	 tx_int2_data;
   wire [31:0] 	 debug_state;
   
   // TX side
   fifo36_to_fifo19 fifo36_to_fifo19
     (.clk(clk), .reset(reset), .clear(clear),
      .f36_datain(tx_f36_data), .f36_src_rdy_i(tx_f36_src_rdy_i), .f36_dst_rdy_o(tx_f36_dst_rdy_o),
      .f19_dataout(tx_int1_data), .f19_src_rdy_o(tx_int1_src_rdy), .f19_dst_rdy_i(tx_int1_dst_rdy) );

   fifo_short #(.WIDTH(19)) shortfifo19_a
     (.clk(clk), .reset(reset), .clear(clear),
      .datain(tx_int1_data), .src_rdy_i(tx_int1_src_rdy), .dst_rdy_o(tx_int1_dst_rdy),
      .dataout(tx_int2_data), .src_rdy_o(tx_int2_src_rdy), .dst_rdy_i(tx_int2_dst_rdy),
      .space(), .occupied() );
     
   prot_eng_tx #(.BASE(BASE)) prot_eng_tx
     (.clk(clk), .reset(reset), .clear(clear),
      .set_stb(set_stb), .set_addr(set_addr), .set_data(set_data),
      .datain(tx_int2_data), .src_rdy_i(tx_int2_src_rdy), .dst_rdy_o(tx_int2_dst_rdy),
      .dataout(tx_f19_data), .src_rdy_o(tx_f19_src_rdy_o), .dst_rdy_i(tx_f19_dst_rdy_i) );

   // RX side
   wire rx_int1_src_rdy, rx_int1_dst_rdy;
   wire [18:0] rx_int1_data;
      
   wire rx_int2_src_rdy, rx_int2_dst_rdy;
   wire [18:0] rx_int2_data;
      
   //wire        rx_int3_src_rdy, rx_int3_dst_rdy;
   //wire [35:0] rx_int3_data;
   
`ifdef USE_PROT_ENG
   prot_eng_rx #(.BASE(BASE+32)) prot_eng_rx
     (.clk(clk), .reset(reset), .clear(clear),
      .datain(rx_f19_data), .src_rdy_i(rx_f19_src_rdy_i), .dst_rdy_o(rx_f19_dst_rdy_o),
      .dataout(rx_int1_data), .src_rdy_o(rx_int1_src_rdy), .dst_rdy_i(rx_int1_dst_rdy) );
`else
   fifo19_rxrealign fifo19_rxrealign
     (.clk(clk), .reset(reset), .clear(clear),
      .datain(rx_f19_data), .src_rdy_i(rx_f19_src_rdy_i), .dst_rdy_o(rx_f19_dst_rdy_o),
      .dataout(rx_int1_data), .src_rdy_o(rx_int1_src_rdy), .dst_rdy_i(rx_int1_dst_rdy) );
`endif // !`ifdef USE_PROT_ENG
   
   fifo_short #(.WIDTH(19)) shortfifo19_b
     (.clk(clk), .reset(reset), .clear(clear),
      .datain(rx_int1_data), .src_rdy_i(rx_int1_src_rdy), .dst_rdy_o(rx_int1_dst_rdy),
      .dataout(rx_int2_data), .src_rdy_o(rx_int2_src_rdy), .dst_rdy_i(rx_int2_dst_rdy),
      .space(), .occupied() );

   fifo19_to_fifo36 fifo19_to_fifo36
     (.clk(clk), .reset(reset), .clear(clear),
      .f19_datain(rx_int2_data), .f19_src_rdy_i(rx_int2_src_rdy), .f19_dst_rdy_o(rx_int2_dst_rdy),
      .f36_dataout(rx_f36_data), .f36_src_rdy_o(rx_f36_src_rdy_o), .f36_dst_rdy_i(rx_f36_dst_rdy_i),
      .debug(debug_state));

   /*
   fifo_cascade #(.WIDTH(36),.SIZE(RXFIFOSIZE)) eth0_rxfifo
     (.clk(clk), .reset(reset), .clear(clear),
      .datain(rx_int3_data), .src_rdy_i(rx_int3_src_rdy), .dst_rdy_o(rx_int3_dst_rdy),
      .dataout(rx_f36_data), .src_rdy_o(rx_f36_src_rdy_o), .dst_rdy_i(rx_f36_dst_rdy_i),
      .space(), .occupied() );
*/
   /*
   assign debug = { { 1'b0, rx_f19_data[18:16], rx_f19_src_rdy_i, rx_f19_dst_rdy_o, rx_f36_src_rdy_o, rx_f36_dst_rdy_i },
		    { 2'b0, rx_int1_src_rdy, rx_int1_dst_rdy, rx_int2_src_rdy, rx_int2_dst_rdy, rx_int3_src_rdy, rx_int3_dst_rdy},
		    { rx_int3_data[35:32], rx_f36_data[35:32] },
		    { debug_state[1:0], rx_int1_data[18:16], rx_int2_data[18:16] } };
    */

   assign debug = { { 3'd0, tx_int1_src_rdy, tx_int1_dst_rdy, tx_int1_data[18:16] },
		    { 3'd0, tx_int2_src_rdy, tx_int2_dst_rdy, tx_int2_data[18:16] },
		    { tx_int2_data[15:8] },
		    { tx_int2_data[7:0] } };
   
endmodule // udp_wrapper
