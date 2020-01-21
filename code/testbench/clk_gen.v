/****************************************************************************
   - project : VGA Frame Converter
   - design  : Clock Generator for Testbench
   - author  :
   - file    : clk_gen.v
   - version : 0.1
   - revision history
               200x.xx.xx : first release

   Copyright ¨Ï 2xxx-2009 XXX Inc. All right reserved.
****************************************************************************/

`timescale 1ns/1ps

//`define XGA_MODE    // 1024x768 : 65MHz
//`define SVGA_MODE   // 800x600  : 40MHz
//`define WVGA_MODE   // 800x480  : 40MHz
//`define WQVGA_MODE  // 480x272  : 10MHz

`include "mode.h"

module clk_gen (
                cken,

                pck,
                ck40,
                ck65,
                rstb
               );

//***************************************************************************
//   Input Declaration
//***************************************************************************
input	       cken;

//***************************************************************************
//   Output port declaration
//***************************************************************************
output	 pck;
output	 ck40;
output   ck65;
output   rstb;

//***************************************************************************
//  Main circuit description
//***************************************************************************
reg  pck;
reg  ck40;
reg  ck65;
initial begin
#0
  pck  = 0;
  ck40 = 0;
  ck65 = 0;
end

always begin
`ifdef WQVGA_MODE
   #(100    /2) pck = ~pck;   // 10MHz
`endif
`ifdef WVGA_MODE
   #(25     /2) pck = ~pck;   // 40MHz
`endif
`ifdef SVGA_MODE
   #(25     /2) pck = ~pck;   // 40MHz
`endif
`ifdef XGA_MODE
   #(15.385 /2) pck = ~pck;   // 65MHz
`endif
end

always begin
   #(55.55 /2) ck40 = ~ck40;  // 40MHz
end

always begin
//   #(15.385 /2) ck65 = ~ck65;  // 65MHz
   #25 ck65 = ~ck65;  // 20MHz
end

reg [15:0] rst_dly;
always @(posedge pck)
  if (!cken) rst_dly <= 'b0;
  else       rst_dly <= {rst_dly[14:0], 1'b1};

wire rstb = rst_dly[15];

endmodule
