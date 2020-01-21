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

    input I2C_SCL_EDID,
    inout I2C_SDA_EDID,
    output DVI_HPD ,

    output LED_LDM ,
    output LED_STAT,
    output LED_RGB,
    
    output LED_CLK,
    output LED_LT,
    output LED_OE,
    output [3:0] LED_A,

    output LED_0_R0,
    output LED_0_R1,
    output LED_0_G0,
    output LED_0_G1,
    output LED_0_B0,
    output LED_0_B1,

    output LED_1_R0,
    output LED_1_R1,
    output LED_1_B0,
    output LED_1_B1,
    output LED_1_G0,
    output LED_1_G1,

    output LED_2_R0,
    output LED_2_R1,
    output LED_2_G0,
    output LED_2_G1,
    output LED_2_B0,
    output LED_2_B1,

    output LED_3_R0,
    output LED_3_R1,
    output LED_3_G0,
    output LED_3_G1,
    output LED_3_B0,
    output LED_3_B1


    );
	 
    wire i2c_clk_48m;    
    wire dcm_lock;
    wire sys_rst = ~dcm_lock;
    wire mrst;
	 
    matrix led_matrix (
        .rst_n          ( mrst ),
        .clk            (   ),
        .wr_clk         (   ),
        .wr             (   ),
        .wr_addr        (   ),
        .wr_data        (   ),
        .buffer_select  (   ),
        .buffer_current (   ),
        .level          (   ),
        .r0             (   ),
        .g0             (   ),
        .b0             (   ),
        .r1             (   ),
        .g1             (   ),
        .b1             (   ),
        .a              (   ),
        .blank          (   ),
        .sclk           (   ),
        .latch          (   )
    );

    i2cSlaveTop EDID (
        .clk			(   i2c_clk_48m     ),
        .rst			(   sys_rst	  	    ),
        .sda			(	I2C_SDA_EDID 	),
        .scl			(	I2C_SCL_EDID 	),
        .dvi_hpd	   (	DVI_HPD	  	    )
    );
	 
    clk_cgen clk_gen (
        .osci           (  FPGA_CLK0    ),
        .RESET          (  FPGA_RST     ),
        .clk_set        (   ),
        .clk_48m    (   ),
        .rstb           (  mrst         ),
        .clkdot         (   ),
        .mclk           (   ),
        .key_scan_clk   (   ),
        .key_set_clk    (   )
    );


endmodule
