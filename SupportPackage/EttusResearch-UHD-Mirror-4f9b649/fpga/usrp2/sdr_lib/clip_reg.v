// -*- verilog -*-
//
//  USRP - Universal Software Radio Peripheral
//
//  Copyright (C) 2008 Matt Ettus
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 51 Franklin Street, Boston, MA  02110-1301  USA
//

// Clipping "macro", keeps the bottom bits

module clip_reg
  #(parameter bits_in=0,
    parameter bits_out=0,
    parameter STROBED=1'b0)
    (input clk,
     input [bits_in-1:0] in,
     output reg [bits_out-1:0] out,
     input strobe_in,
     output reg strobe_out);
   
   wire [bits_out-1:0] temp;

   clip #(.bits_in(bits_in),.bits_out(bits_out)) clip (.in(in),.out(temp));

   always @(posedge clk)
     strobe_out <= strobe_in;
   
   always @(posedge clk)
     if(strobe_in | ~STROBED)
       out <= temp;
   
endmodule // clip_reg

