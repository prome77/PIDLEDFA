`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:25:48 10/11/2019 
// Design Name: 
// Module Name:    pic_led 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module pic_led(
    input FPGA_RST,
    input FPGA_CLK0,
	 input FPGA_CLK1,
	 
    input [7:0] RED,
    input [7:0] GREEN,
    input [7:0] BLUE,
    input VSYNC,
    input HSYNC,    
    input PCLK,
    input DE,
	 
    input LED_CLK,
    input LED_LT,
    input LED_OE,
    input [3:0] LED_A,
    input LED_0_R0,
    input LED_0_R1,
    input LED_0_G0,
    input LED_0_G1,
    input LED_0_B0,
    input LED_0_B1,
    input LED_1_R0,
    input LED_1_R1,
    input LED_1_B0,
    input LED_1_B1,
    input LED_1_G0,
    input LED_1_G1,
    input LED_2_R0,
    input LED_2_R1,
    input LED_2_G0,
    input LED_2_G1,
    input LED_2_B0,
    input LED_2_B1,
    input LED_3_R0,
    input LED_3_R1,
    input LED_3_G0,
    input LED_3_G1,
    input LED_3_B0,
    input LED_3_B1
    );


endmodule
