//////////////////////////////////////////////////////////////////////
////                                                              ////
//// i2cSlaveTop.v                                                   ////
////                                                              ////
//// This file is part of the i2cSlave opencores effort.
//// <http://www.opencores.org/cores//>                           ////
////                                                              ////
//// Module Description:                                          ////
//// You will need to modify this file to implement your 
//// interface.
////                                                              ////
//// To Do:                                                       ////
//// 
////                                                              ////
//// Author(s):                                                   ////
//// - Steve Fielding, sfielding@base2designs.com                 ////
////                                                              ////
//////////////////////////////////////////////////////////////////////
////                                                              ////
//// Copyright (C) 2008 Steve Fielding and OPENCORES.ORG          ////
////                                                              ////
//// This source file may be used and distributed without         ////
//// restriction provided that this copyright statement is not    ////
//// removed from the file and that any derivative work contains  ////
//// the original copyright notice and the associated disclaimer. ////
////                                                              ////
//// This source file is free software; you can redistribute it   ////
//// and/or modify it under the terms of the GNU Lesser General   ////
//// Public License as published by the Free Software Foundation; ////
//// either version 2.1 of the License, or (at your option) any   ////
//// later version.                                               ////
////                                                              ////
//// This source is distributed in the hope that it will be       ////
//// useful, but WITHOUT ANY WARRANTY; without even the implied   ////
//// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR      ////
//// PURPOSE. See the GNU Lesser General Public License for more  ////
//// details.                                                     ////
////                                                              ////
//// You should have received a copy of the GNU Lesser General    ////
//// Public License along with this source; if not, download it   ////
//// from <http://www.opencores.org/lgpl.shtml>                   ////
////                                                              ////
//////////////////////////////////////////////////////////////////////
//

`timescale 1ns/1ps

 
`include "./i2cSlave_define.v"


module i2cSlaveTop (
  clk,
  rst,
  sda,
  scl,
  dvi_hpd
);
input clk;
input rst;
inout sda;
input scl;
output dvi_hpd;

i2cSlave u_i2cSlave(
  .clk(clk),
  .rst(rst),
  .sda(sda),
  .scl(scl)
);


	reg [23:0] rst_cnt;             // Counter
	reg carry;

	always @(posedge clk)
    begin
		if (rst) begin
			rst_cnt <= 0;
			carry <= 0;			
		end
		else begin
			rst_cnt <= rst_cnt + 1;
			if (carry	== 0) carry <= (rst_cnt==24'b1111_1111_1111_1111_1111_1111);
		end		
	end
	
	assign dvi_hpd = carry;

endmodule


 
