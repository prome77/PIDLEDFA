//////////////////////////////////////////////////////////////////////
////                                                              ////
//// registerInterface.v                                          ////
////                                                              ////
//// This file is part of the i2cSlave opencores effort.
//// <http://www.opencores.org/cores//>                           ////
////                                                              ////
//// Module Description:                                          ////
//// You will need to modify this file to implement your 
//// interface.
//// Add your control and status bytes/bits to module inputs and outputs,
//// and also to the I2C read and write process blocks  
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

`include "i2cSlave_define.v"

//`define LED_1960_1280
`define LED_1280_1024

module registerInterface (
		clk,
		addr,
		dataIn,
		writeEn,
		dataOut
		);

	input clk;
	input [7:0] addr;
	input [7:0] dataIn;
	input writeEn;
	output [7:0] dataOut;

	reg [7:0] dataOut;

	reg [7:0] myReg0;
	reg [7:0] myReg1;
	reg [7:0] myReg2;
	reg [7:0] myReg3;

	// --- I2C Read
	always @(posedge clk) begin
		case (addr)
  	
`ifdef LED_1960_1280  	
			8'h00: dataOut <= 8'h00; 
			8'h01: dataOut <= 8'hFF; 
			8'h02: dataOut <= 8'hFF; 
			8'h03: dataOut <= 8'hFF; 
			8'h04: dataOut <= 8'hFF; 
			8'h05: dataOut <= 8'hFF; 
			8'h06: dataOut <= 8'hFF; 
			8'h07: dataOut <= 8'h00; 
			8'h08: dataOut <= 8'h4C; 
			8'h09: dataOut <= 8'h2E; 
			8'h0A: dataOut <= 8'h01; 
			8'h0B: dataOut <= 8'h00; 
			8'h0C: dataOut <= 8'h0C; 
			8'h0D: dataOut <= 8'h8B; 
			8'h0E: dataOut <= 8'h0B; 
			8'h0F: dataOut <= 8'h78; 
			8'h10: dataOut <= 8'h09; 
			8'h11: dataOut <= 8'h18; 
			8'h12: dataOut <= 8'h01; 
			8'h13: dataOut <= 8'h03; 
			8'h14: dataOut <= 8'h80; 
			8'h15: dataOut <= 8'h33; 
			8'h16: dataOut <= 8'h1D; 
			8'h17: dataOut <= 8'h78; 
			8'h18: dataOut <= 8'h2A; 
			8'h19: dataOut <= 8'hEE; 
			8'h1A: dataOut <= 8'h91; 
			8'h1B: dataOut <= 8'hA3; 
			8'h1C: dataOut <= 8'h54; 
			8'h1D: dataOut <= 8'h4C; 
			8'h1E: dataOut <= 8'h99; 
			8'h1F: dataOut <= 8'h26; 
			8'h20: dataOut <= 8'h0F; 
			8'h21: dataOut <= 8'h50; 
			8'h22: dataOut <= 8'h54; 
			8'h23: dataOut <= 8'h23; 
			8'h24: dataOut <= 8'h08; 
			8'h25: dataOut <= 8'h00; 
			8'h26: dataOut <= 8'h81; 
			8'h27: dataOut <= 8'h00; 
			8'h28: dataOut <= 8'h81; 
			8'h29: dataOut <= 8'h40; 
			8'h2A: dataOut <= 8'h81; 
			8'h2B: dataOut <= 8'h80; 
			8'h2C: dataOut <= 8'h95; 
			8'h2D: dataOut <= 8'h00; 
			8'h2E: dataOut <= 8'hB3; 
			8'h2F: dataOut <= 8'h00; 
			8'h30: dataOut <= 8'hA9; 
			8'h31: dataOut <= 8'h40; 
			8'h32: dataOut <= 8'h01; 
			8'h33: dataOut <= 8'h01; 
			8'h34: dataOut <= 8'h01; 
			8'h35: dataOut <= 8'h01; 
			8'h36: dataOut <= 8'h02; 
			8'h37: dataOut <= 8'h3A; 
			8'h38: dataOut <= 8'h80; 
			8'h39: dataOut <= 8'h18; 
			8'h3A: dataOut <= 8'h71; 
			8'h3B: dataOut <= 8'h38; 
			8'h3C: dataOut <= 8'h2D; 
			8'h3D: dataOut <= 8'h40; 
			8'h3E: dataOut <= 8'h58; 
			8'h3F: dataOut <= 8'h2C; 
			8'h40: dataOut <= 8'h45; 
			8'h41: dataOut <= 8'h00; 
			8'h42: dataOut <= 8'hFE; 
			8'h43: dataOut <= 8'h22; 
			8'h44: dataOut <= 8'h11; 
			8'h45: dataOut <= 8'h00; 
			8'h46: dataOut <= 8'h00; 
			8'h47: dataOut <= 8'h1E; 
			8'h48: dataOut <= 8'h00; 
			8'h49: dataOut <= 8'h00; 
			8'h4A: dataOut <= 8'h00; 
			8'h4B: dataOut <= 8'hFD; 
			8'h4C: dataOut <= 8'h00; 
			8'h4D: dataOut <= 8'h38; 
			8'h4E: dataOut <= 8'h3D; 
			8'h4F: dataOut <= 8'h1E; 
			8'h50: dataOut <= 8'h4B; 
			8'h51: dataOut <= 8'h11; 
			8'h52: dataOut <= 8'h00; 
			8'h53: dataOut <= 8'h0A; 
			8'h54: dataOut <= 8'h20; 
			8'h55: dataOut <= 8'h20; 
			8'h56: dataOut <= 8'h20; 
			8'h57: dataOut <= 8'h20; 
			8'h58: dataOut <= 8'h20; 
			8'h59: dataOut <= 8'h20; 
			8'h5A: dataOut <= 8'h00; 
			8'h5B: dataOut <= 8'h00; 
			8'h5C: dataOut <= 8'h00; 
			8'h5D: dataOut <= 8'hFC; 
			8'h5E: dataOut <= 8'h00; 
			8'h5F: dataOut <= 8'h4C; 
			8'h60: dataOut <= 8'h45; 
			8'h61: dataOut <= 8'h44; 
			8'h62: dataOut <= 8'h20; 
			8'h63: dataOut <= 8'h44; 
			8'h64: dataOut <= 8'h56; 
			8'h65: dataOut <= 8'h49; 
			8'h66: dataOut <= 8'h0A; 
			8'h67: dataOut <= 8'h0A; 
			8'h68: dataOut <= 8'h0A; 
			8'h69: dataOut <= 8'h0A; 
			8'h6A: dataOut <= 8'h0A; 
			8'h6B: dataOut <= 8'h0A; 
			8'h6C: dataOut <= 8'h00; 
			8'h6D: dataOut <= 8'h00; 
			8'h6E: dataOut <= 8'h00; 
			8'h6F: dataOut <= 8'hFF; 
			8'h70: dataOut <= 8'h00; 
			8'h71: dataOut <= 8'h4C; 
			8'h72: dataOut <= 8'h45; 
			8'h73: dataOut <= 8'h44; 
			8'h74: dataOut <= 8'h20; 
			8'h75: dataOut <= 8'h58; 
			8'h76: dataOut <= 8'h43; 
			8'h77: dataOut <= 8'h36; 
			8'h78: dataOut <= 8'h0A; 
			8'h79: dataOut <= 8'h0A; 
			8'h7A: dataOut <= 8'h0A; 
			8'h7B: dataOut <= 8'h0A; 
			8'h7C: dataOut <= 8'h0A; 
			8'h7D: dataOut <= 8'h0A; 
			8'h7E: dataOut <= 8'h01; 
			8'h7F: dataOut <= 8'h39;
`elsif LED_1280_1024  	
			8'h00: dataOut <= 8'h00; 
			8'h01: dataOut <= 8'hFF; 
			8'h02: dataOut <= 8'hFF; 
			8'h03: dataOut <= 8'hFF; 
			8'h04: dataOut <= 8'hFF; 
			8'h05: dataOut <= 8'hFF; 
			8'h06: dataOut <= 8'hFF; 
			8'h07: dataOut <= 8'h00; 
			8'h08: dataOut <= 8'h4C; 
			8'h09: dataOut <= 8'h2E; 
			8'h0A: dataOut <= 8'h02; 
			8'h0B: dataOut <= 8'h00; 
			8'h0C: dataOut <= 8'h01; 
			8'h0D: dataOut <= 8'h00; 
			8'h0E: dataOut <= 8'h00; 
			8'h0F: dataOut <= 8'h00; 
			8'h10: dataOut <= 8'h04; 
			8'h11: dataOut <= 8'h18; 
			8'h12: dataOut <= 8'h01; 
			8'h13: dataOut <= 8'h03; 
			8'h14: dataOut <= 8'h80; 
			8'h15: dataOut <= 8'h26; 
			8'h16: dataOut <= 8'h1E; 
			8'h17: dataOut <= 8'h78; 
			8'h18: dataOut <= 8'hEA; 
			8'h19: dataOut <= 8'h2E; 
			8'h1A: dataOut <= 8'hE5; 
			8'h1B: dataOut <= 8'hA4; 
			8'h1C: dataOut <= 8'h57; 
			8'h1D: dataOut <= 8'h4A; 
			8'h1E: dataOut <= 8'h9C; 
			8'h1F: dataOut <= 8'h25; 
			8'h20: dataOut <= 8'h11; 
			8'h21: dataOut <= 8'h50; 
			8'h22: dataOut <= 8'h54; 
			8'h23: dataOut <= 8'hA5; 
			8'h24: dataOut <= 8'h6B; 
			8'h25: dataOut <= 8'h80; 
			8'h26: dataOut <= 8'h31; 
			8'h27: dataOut <= 8'h4F; 
			8'h28: dataOut <= 8'h45; 
			8'h29: dataOut <= 8'h4F; 
			8'h2A: dataOut <= 8'h61; 
			8'h2B: dataOut <= 8'h4F; 
			8'h2C: dataOut <= 8'h81; 
			8'h2D: dataOut <= 8'h80; 
			8'h2E: dataOut <= 8'h01; 
			8'h2F: dataOut <= 8'h01; 
			8'h30: dataOut <= 8'h01; 
			8'h31: dataOut <= 8'h01; 
			8'h32: dataOut <= 8'h01; 
			8'h33: dataOut <= 8'h01; 
			8'h34: dataOut <= 8'h01; 
			8'h35: dataOut <= 8'h01; 
			8'h36: dataOut <= 8'h30; 
			8'h37: dataOut <= 8'h2A; 
			8'h38: dataOut <= 8'h00; 
			8'h39: dataOut <= 8'h98; 
			8'h3A: dataOut <= 8'h51; 
			8'h3B: dataOut <= 8'h00; 
			8'h3C: dataOut <= 8'h2A; 
			8'h3D: dataOut <= 8'h40; 
			8'h3E: dataOut <= 8'h30; 
			8'h3F: dataOut <= 8'h70; 
			8'h40: dataOut <= 8'h13; 
			8'h41: dataOut <= 8'h00; 
			8'h42: dataOut <= 8'h78; 
			8'h43: dataOut <= 8'h2D; 
			8'h44: dataOut <= 8'h11; 
			8'h45: dataOut <= 8'h00; 
			8'h46: dataOut <= 8'h00; 
			8'h47: dataOut <= 8'h1E; 
			8'h48: dataOut <= 8'h00; 
			8'h49: dataOut <= 8'h00; 
			8'h4A: dataOut <= 8'h00; 
			8'h4B: dataOut <= 8'hFD; 
			8'h4C: dataOut <= 8'h00; 
			8'h4D: dataOut <= 8'h38; 
			8'h4E: dataOut <= 8'h4B; 
			8'h4F: dataOut <= 8'h1E; 
			8'h50: dataOut <= 8'h53; 
			8'h51: dataOut <= 8'h0E; 
			8'h52: dataOut <= 8'h00; 
			8'h53: dataOut <= 8'h0A; 
			8'h54: dataOut <= 8'h20; 
			8'h55: dataOut <= 8'h20; 
			8'h56: dataOut <= 8'h20; 
			8'h57: dataOut <= 8'h20; 
			8'h58: dataOut <= 8'h20; 
			8'h59: dataOut <= 8'h20; 
			8'h5A: dataOut <= 8'h00; 
			8'h5B: dataOut <= 8'h00; 
			8'h5C: dataOut <= 8'h00; 
			8'h5D: dataOut <= 8'hFC; 
			8'h5E: dataOut <= 8'h00; 
			8'h5F: dataOut <= 8'h4C; 
			8'h60: dataOut <= 8'h45; 
			8'h61: dataOut <= 8'h44; 
			8'h62: dataOut <= 8'h31; 
			8'h63: dataOut <= 8'h32; 
			8'h64: dataOut <= 8'h38; 
			8'h65: dataOut <= 8'h30; 
			8'h66: dataOut <= 8'h5F; 
			8'h67: dataOut <= 8'h31; 
			8'h68: dataOut <= 8'h30; 
			8'h69: dataOut <= 8'h32; 
			8'h6A: dataOut <= 8'h34; 
			8'h6B: dataOut <= 8'h0A; 
			8'h6C: dataOut <= 8'h00; 
			8'h6D: dataOut <= 8'h00; 
			8'h6E: dataOut <= 8'h00; 
			8'h6F: dataOut <= 8'hFC; 
			8'h70: dataOut <= 8'h00; 
			8'h71: dataOut <= 8'h0A; 
			8'h72: dataOut <= 8'h20; 
			8'h73: dataOut <= 8'h20; 
			8'h74: dataOut <= 8'h20; 
			8'h75: dataOut <= 8'h20; 
			8'h76: dataOut <= 8'h20; 
			8'h77: dataOut <= 8'h20; 
			8'h78: dataOut <= 8'h20; 
			8'h79: dataOut <= 8'h20; 
			8'h7A: dataOut <= 8'h20; 
			8'h7B: dataOut <= 8'h20; 
			8'h7C: dataOut <= 8'h20; 
			8'h7D: dataOut <= 8'h20; 
			8'h7E: dataOut <= 8'h00; 
			8'h7F: dataOut <= 8'hC9;
`else
			8'h00: dataOut <= 8'h00;
			8'h01: dataOut <= 8'hFF; 
			8'h02: dataOut <= 8'hFF; 
			8'h03: dataOut <= 8'hFF; 
			8'h04: dataOut <= 8'hFF; 
			8'h05: dataOut <= 8'hFF; 
			8'h06: dataOut <= 8'hFF; 
			8'h07: dataOut <= 8'h00; 
			8'h08: dataOut <= 8'h04; 
			8'h09: dataOut <= 8'h21; 
			8'h0A: dataOut <= 8'h00; 
			8'h0B: dataOut <= 8'h00; 
			8'h0C: dataOut <= 8'h39; 
			8'h0D: dataOut <= 8'h30; 
			8'h0E: dataOut <= 8'h00; 
			8'h0F: dataOut <= 8'h00;
			8'h10: dataOut <= 8'h10; 
			8'h11: dataOut <= 8'h17; 
			8'h12: dataOut <= 8'h01; 
			8'h13: dataOut <= 8'h03; 
			8'h14: dataOut <= 8'h80; 
			8'h15: dataOut <= 8'h00; 
			8'h16: dataOut <= 8'h00; 
			8'h17: dataOut <= 8'h00; 
			8'h18: dataOut <= 8'h00; 
			8'h19: dataOut <= 8'h00; 
			8'h1A: dataOut <= 8'h00; 
			8'h1B: dataOut <= 8'h00; 
			8'h1C: dataOut <= 8'h00; 
			8'h1D: dataOut <= 8'h00; 
			8'h1E: dataOut <= 8'h00; 
			8'h1F: dataOut <= 8'h00;
			8'h20: dataOut <= 8'h00; 
			8'h21: dataOut <= 8'h00; 
			8'h22: dataOut <= 8'h00; 
			8'h23: dataOut <= 8'h00; 
			8'h24: dataOut <= 8'h01; 
			8'h25: dataOut <= 8'h00; 
			8'h26: dataOut <= 8'h01; 
			8'h27: dataOut <= 8'h01; 
			8'h28: dataOut <= 8'h01; 
			8'h29: dataOut <= 8'h01; 
			8'h2A: dataOut <= 8'h01; 
			8'h2B: dataOut <= 8'h01; 
			8'h2C: dataOut <= 8'h01; 
			8'h2D: dataOut <= 8'h01; 
			8'h2E: dataOut <= 8'h01; 
			8'h2F: dataOut <= 8'h01;
			8'h30: dataOut <= 8'h01; 
			8'h31: dataOut <= 8'h01; 
			8'h32: dataOut <= 8'h01; 
			8'h33: dataOut <= 8'h01; 
			8'h34: dataOut <= 8'h01; 
			8'h35: dataOut <= 8'h01; 
			8'h36: dataOut <= 8'h00; 
			8'h37: dataOut <= 8'h00; 
			8'h38: dataOut <= 8'h00; 
			8'h39: dataOut <= 8'h00; 
			8'h3A: dataOut <= 8'h00; 
			8'h3B: dataOut <= 8'h00; 
			8'h3C: dataOut <= 8'h00; 
			8'h3D: dataOut <= 8'h00; 
			8'h3E: dataOut <= 8'h00; 
			8'h3F: dataOut <= 8'h00;
			8'h40: dataOut <= 8'h00; 
			8'h41: dataOut <= 8'h00; 
			8'h42: dataOut <= 8'h00; 
			8'h43: dataOut <= 8'h00; 
			8'h44: dataOut <= 8'h00; 
			8'h45: dataOut <= 8'h00; 
			8'h46: dataOut <= 8'h00; 
			8'h47: dataOut <= 8'h00; 
			8'h48: dataOut <= 8'h00; 
			8'h49: dataOut <= 8'h00; 
			8'h4A: dataOut <= 8'h00; 
			8'h4B: dataOut <= 8'h00; 
			8'h4C: dataOut <= 8'h00; 
			8'h4D: dataOut <= 8'h00; 
			8'h4E: dataOut <= 8'h00; 
			8'h4F: dataOut <= 8'h00;
			8'h50: dataOut <= 8'h00; 
			8'h51: dataOut <= 8'h00; 
			8'h52: dataOut <= 8'h00; 
			8'h53: dataOut <= 8'h00; 
			8'h54: dataOut <= 8'h00; 
			8'h55: dataOut <= 8'h00; 
			8'h56: dataOut <= 8'h00; 
			8'h57: dataOut <= 8'h00; 
			8'h58: dataOut <= 8'h00; 
			8'h59: dataOut <= 8'h00; 
			8'h5A: dataOut <= 8'h00; 
			8'h5B: dataOut <= 8'h00; 
			8'h5C: dataOut <= 8'h00; 
			8'h5D: dataOut <= 8'h00; 
			8'h5E: dataOut <= 8'h00; 
			8'h5F: dataOut <= 8'h00;
			8'h60: dataOut <= 8'h00; 
			8'h61: dataOut <= 8'h00; 
			8'h62: dataOut <= 8'h00; 
			8'h63: dataOut <= 8'h00; 
			8'h64: dataOut <= 8'h00; 
			8'h65: dataOut <= 8'h00; 
			8'h66: dataOut <= 8'h00; 
			8'h67: dataOut <= 8'h00; 
			8'h68: dataOut <= 8'h00; 
			8'h69: dataOut <= 8'h00; 
			8'h6A: dataOut <= 8'h00; 
			8'h6B: dataOut <= 8'h00; 
			8'h6C: dataOut <= 8'h00; 
			8'h6D: dataOut <= 8'h00; 
			8'h6E: dataOut <= 8'h00; 
			8'h6F: dataOut <= 8'h00;
			8'h70: dataOut <= 8'h00; 
			8'h71: dataOut <= 8'h00; 
			8'h72: dataOut <= 8'h00; 
			8'h73: dataOut <= 8'h00; 
			8'h74: dataOut <= 8'h00; 
			8'h75: dataOut <= 8'h00; 
			8'h76: dataOut <= 8'h00; 
			8'h77: dataOut <= 8'h00; 
			8'h78: dataOut <= 8'h00; 
			8'h79: dataOut <= 8'h00; 
			8'h7A: dataOut <= 8'h00; 
			8'h7B: dataOut <= 8'h00; 
			8'h7C: dataOut <= 8'h00; 
			8'h7D: dataOut <= 8'h00; 
			8'h7E: dataOut <= 8'h00; 
			8'h7F: dataOut <= 8'hBC;	
`endif	
			default: dataOut <= 8'h00;
		endcase
	end

	// --- I2C Write
	always @(posedge clk) begin
		if (writeEn == 1'b1) begin
			case (addr)
				8'hFC: myReg0 <= dataIn;  
				8'hFD: myReg1 <= dataIn;
				8'hFE: myReg2 <= dataIn;
				8'hFF: myReg3 <= dataIn;
			endcase
		end
	end

endmodule