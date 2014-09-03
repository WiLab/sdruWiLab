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



//  Adds a junk line at the beginning of every packet, which the
//   following stages should ignore.  This gives us proper alignment due
//   to the 14 byte ethernet header

// Bit 18 -- odd length
// Bit 17 -- eof
// Bit 16 -- sof
// Bit 15:0 -- data

module fifo19_rxrealign
  (input clk, input reset, input clear,
   input [18:0] datain, input src_rdy_i, output dst_rdy_o,
   output [18:0] dataout, output src_rdy_o, input dst_rdy_i);
   
   reg 	rxre_state;
   localparam RXRE_DUMMY  = 0;
   localparam RXRE_PKT 	  = 1;
   
   assign dataout[18] 	  = datain[18];
   assign dataout[17] 	  = datain[17];
   assign dataout[16] 	  = (rxre_state==RXRE_DUMMY) | (datain[17] & datain[16]);  // allows for passing error signal
   assign dataout[15:0] = datain[15:0];
   
   always @(posedge clk)
     if(reset | clear)
       rxre_state <= RXRE_DUMMY;
     else if(src_rdy_i & dst_rdy_i)
       case(rxre_state)
	 RXRE_DUMMY :
	   rxre_state <= RXRE_PKT;
	 RXRE_PKT :
	   if(datain[17])   // if eof or error
	     rxre_state <= RXRE_DUMMY;
       endcase // case (rxre_state)

   assign src_rdy_o 	 = src_rdy_i & dst_rdy_i;   // Send anytime both sides are ready
   assign dst_rdy_o = src_rdy_i & dst_rdy_i & (rxre_state == RXRE_PKT);  // Only consume after the dummy
   
endmodule // fifo19_rxrealign

