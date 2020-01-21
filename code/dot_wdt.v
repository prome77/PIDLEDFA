//`default_nettype none

`timescale 1ns/1ps

`include "type.h"

module dot_wdt (
  input  rst,
  input  clkwdt,
  input  wdt_clr,
  output wdt_RstOut,

  input  wdt_clr1,
  output wdt_RstOut1,

  input  DviCmd_Temp,
  
  output  DviCmd_R_on,
  output  DviCmd_G_on,
  output  DviCmd_B_on,
  output  DviCmd_Bright,
  output  DviCmd_Code,  
  
  output debug
);

parameter TIMEOUT_WDT  = 12'd2000;

localparam TIMEOUT_WDT1    = 16'd2000 * 10;
localparam TIMEOUT_WDTOUT1 = 16'd2000 * 9;

// -----------------------------------------------------

// wdt clear Flag
reg [1:0]clr_d;
always @(posedge rst or posedge clkwdt)
  if(rst)  clr_d <= 2'd0;
  else     clr_d <= {clr_d[0], wdt_clr};
  
wire r_clr =  clr_d[0] & ~clr_d[1];
wire f_clr = ~clr_d[0] &  clr_d[1];
  
//
reg  [11:0]wdtTick;
always @(posedge rst or posedge clkwdt)
  if (rst)        wdtTick <= 12'd0;
  else if(r_clr)  wdtTick <= 12'd0;
  else if(f_clr)  wdtTick <= 12'd0;
  else if(wdtTick <= TIMEOUT_WDT) wdtTick <= wdtTick + 1'd1;
  
wire wdtFlag;
assign wdtFlag = (wdtTick >= TIMEOUT_WDT)? 1'b1 : 1'b0;

// wdt rst Flag
reg [1:0]wdt_d;
always @(posedge rst or posedge clkwdt)
  if(rst)  wdt_d <= 2'd0;
  else     wdt_d <= {wdt_d[0], wdtFlag};
  
wire r_wdt =  wdt_d[0] & ~wdt_d[1];
wire f_wdt = ~wdt_d[0] &  wdt_d[1];
  
//        
wire rstFlag = ~wdtFlag & wdt_RstOut;
reg [11:0]rstTick;
always @(posedge rst or posedge clkwdt)
  if (rst)         rstTick <= 12'd0;
  else if(wdtFlag) rstTick <= 12'd0;
  else if(rstFlag) rstTick <= rstTick + 1'd1;
  
//
reg wdt_RstOut;
always @(posedge rst or posedge clkwdt)
  if (rst)        wdt_RstOut <= 1'b0;
  else if(r_wdt)  wdt_RstOut <= 1'b1;
  else if(rstTick >= TIMEOUT_WDT) wdt_RstOut <= 1'b0;
  
// -----------------------------------------------------

//
reg [15:0] wdtTick1;
always @(posedge rst or posedge clkwdt)
  if (rst)          wdtTick1 <= 16'd0;
  else if(wdt_clr1) wdtTick1 <= 16'd0;
  else if(wdtTick1 >= TIMEOUT_WDT1) wdtTick1 <= 16'd0;
  else  wdtTick1 <= wdtTick1 + 1'd1;

assign wdt_RstOut1 = (wdtTick1 >= TIMEOUT_WDTOUT1)? 1'b1 : 1'b0;

// -----------------------------------------------------------------------      
localparam TIMEOUT_DVICMD = 16'd2000 * 3;     // about 3 sec

wire [`MAX_DVICMD_BITS-1:0] DviCmd_Temp;
reg  [`MAX_DVICMD_BITS-1:0] DviCmd_reg;

wire  DviCmd_R_on;
wire  DviCmd_G_on;
wire  DviCmd_B_on;
wire [2:0] DviCmd_Bright;
wire [11:0] DviCmd_Code;

//
reg [15:0] DviCmdTick;
always @(posedge rst or posedge clkwdt)
  if (rst) begin
  	DviCmdTick <= 16'd0;
  end
  else begin
  	if(DviCmd_Temp == DviCmd_reg) begin
  		DviCmdTick <= 16'd0;
  	end
  	else begin
  		if(DviCmdTick < TIMEOUT_DVICMD) DviCmdTick <= DviCmdTick + 1'd1;
  	end
  end

always @(posedge rst or posedge clkwdt)
  if (rst) begin
  	DviCmd_reg <= `MAX_DVICMD_BITS'd0;
  end
  else begin
  	if(DviCmdTick >= TIMEOUT_DVICMD) begin
  		DviCmd_reg <= DviCmd_Temp;
  	end
  end
//
assign DviCmd_Code = DviCmd_reg[`BIT_DVICMD_CODE:0];
assign DviCmd_R_on = DviCmd_reg[`BIT_DVICMD_R_ON];
assign DviCmd_G_on = DviCmd_reg[`BIT_DVICMD_G_ON];
assign DviCmd_B_on = DviCmd_reg[`BIT_DVICMD_B_ON];
assign DviCmd_Bright = {DviCmd_reg[`BIT_DVICMD_BRG2], DviCmd_reg[`BIT_DVICMD_BRG1], DviCmd_reg[`BIT_DVICMD_BRG0]};
  
// -----------------------------------------------------------------------      
// debug
assign debug = wdtFlag;  
 
endmodule