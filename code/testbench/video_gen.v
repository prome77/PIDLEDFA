/****************************************************************************
   - project : VGA Frame Converter
   - design  : Video Generator
   - author  :
   - file    : video_gen.v
   - version : 0.1
   - revision history
               200x.xx.xx : first release

   Copyright ¨Ï 2xxx-2009 XXX Inc. All right reserved.
****************************************************************************/

`timescale 1ns/1ps

//`define XGA_MODE    // 1024x768 : 65MHz
//`define SVGA_MODE   // 800x600  : 40MHz
//`define WVGA_MODE   // 800x480  : 40MHz
//`define WQVGA_MODE  // 480x272  : 25.2MHz

`include "mode.h"

module video_gen (
                 clk,
                 rstb,

                 vs,
                 hs,
                 den,
                 r,
                 g,
                 b
                );

//***************************************************************************
//   Input Declaration
//***************************************************************************
input         clk;
input         rstb;

//***************************************************************************
//   Output port declaration
//***************************************************************************
output        vs;
output        hs;
output        den;
output [ 7:0] r;
output [ 7:0] g;
output [ 7:0] b;

//***************************************************************************
`ifdef XGA_MODE
// XGA Mode, 1024X768@65MHz, 1344-pixel x 806-line
parameter   HSIZE =  1024;
parameter   VSIZE =  768;
wire [10:0] HSBLK =  11'd135;  //  136; // sync   pixel
wire [10:0] HBBLK =  11'd295;  //  160; // back   pixel
wire [10:0] HACT  =  11'd1319; // 1024; // active pixel
wire [10:0] HFBLK =  11'd1343; //   24; // front  pixel
wire [ 9:0] VSBLK =  10'd5;    //    6; // sync   line
wire [ 9:0] VBBLK =  10'd34;   //   29; // back   line
wire [ 9:0] VACT  =  10'd802;  //  768; // active line
wire [ 9:0] VFBLK =  10'd805;  //    3; // front  line
`endif

`ifdef SVGA_MODE
// SVGA Mode, 800X600@40MHz, 1056-pixel x 628-line
parameter   HSIZE =  800;
parameter   VSIZE =  600;
wire [10:0] HSBLK =  11'd127; // 128; // sync   pixel
wire [10:0] HBBLK =  11'd215; //  88; // back   pixel
wire [10:0] HACT  =  11'd1015;// 800; // active pixel
wire [10:0] HFBLK =  11'd1055;//  40; // front  pixel
wire [ 9:0] VSBLK =  10'd3;   //   4; // sync   line
wire [ 9:0] VBBLK =  10'd26;  //  23; // back   line
wire [ 9:0] VACT  =  10'd626; // 600; // active line
wire [ 9:0] VFBLK =  10'd627; //   1; // front  line
`endif

`ifdef WVGA_MODE
// WVGA Mode, 800X480@40MHz, 1056-pixel x 628-line
parameter   HSIZE =  800;
parameter   VSIZE =  480;
wire [10:0] HSBLK =  11'd127;  // 128; // sync   pixel
wire [10:0] HBBLK =  11'd215;  //  88; // back   pixel
wire [10:0] HACT  =  11'd1015; // 800; // active pixel
wire [10:0] HFBLK =  11'd1055; //  40; // front  pixel
wire [ 9:0] VSBLK =  10'd3;    //   4; // sync   line
wire [ 9:0] VBBLK =  10'd86;   //  23; // back   line
wire [ 9:0] VACT  =  10'd566;  // 600; // active line
wire [ 9:0] VFBLK =  10'd627;  //   1; // front  line
`endif

`ifdef WQVGA_MODE
// WQVGA Mode, 480X272@9MHz, 525-pixel x 286-line
parameter   HSIZE =  480;
parameter   VSIZE =  272;
wire [10:0] HSBLK =  11'd40;  //  41; // sync   pixel
wire [10:0] HBBLK =  11'd42;  //   2; // back   pixel
wire [10:0] HACT  =  11'd522; // 480; // active pixel
wire [10:0] HFBLK =  11'd524; //   2; // front  pixel
wire [ 9:0] VSBLK =  10'd9;   //  10; // sync   line
wire [ 9:0] VBBLK =  10'd11;  //   2; // back   line
wire [ 9:0] VACT  =  10'd283; // 272; // active line
wire [ 9:0] VFBLK =  10'd285; //   2; // front  line
`endif

//***************************************************************************
//  Main circuit description
//***************************************************************************
reg  [10:0] hcnt;
reg  [ 9:0] vcnt;
wire        hck, vck;

always @(posedge clk or negedge rstb)
  if (!rstb)    hcnt <= 'b0;
  else if (hck) hcnt <= 'b0;
  else          hcnt <= hcnt + 1'b1;

assign hck = (hcnt == HFBLK) ? 1'b1 : 1'b0;

always @(posedge clk or negedge rstb)
  if (!rstb)          vcnt <= 'b0;
  else if (vck & hck) vcnt <= 'b0;
  else if (hck)       vcnt <= vcnt + 1'b1;

assign vck = (vcnt == VFBLK) ? 1'b1 : 1'b0;

//***************************************************************************
wire vs_tmp  = (vcnt > VSBLK) ? 1'b1 : 1'b0;
wire hs_tmp  = (hcnt > HSBLK) ? 1'b1 : 1'b0;
wire den_tmp = ( (hcnt > HBBLK) & (hcnt <= HACT) ) & ( (vcnt > VBBLK) & (vcnt <= VACT) );

reg  vs, hs, den;
always @(posedge clk or negedge rstb)
  if (!rstb) begin
    vs  <= 'b0;
    hs  <= 'b0;
    den <= 'b0;
  end
  else begin
    vs  <= vs_tmp;
    hs  <= hs_tmp;
    den <= den_tmp;
  end

// **************************************************************************
reg   [23:0] IMAGE_MEM[0:((HSIZE * VSIZE) -1)];

`ifdef WQVGA_MODE
initial $readmemh("./vector/480x272.txt", IMAGE_MEM);
`endif

`ifdef WVGA_MODE
initial $readmemh("./vector/800x480.txt", IMAGE_MEM);
`endif

`ifdef SVGA_MODE
initial $readmemh("./vector/800x600.txt", IMAGE_MEM);
`endif

`ifdef XGA_MODE
initial $readmemh("./vector/1024x768.txt", IMAGE_MEM);
`endif


//test
reg [7:0] tcnt;
always @(posedge clk or negedge rstb)
  if      (!rstb)    tcnt <= 'b0;
  else if(!den_tmp)  tcnt <= 'b0;
  else               tcnt <= tcnt + 1'b1; 

reg  [19:0] mcnt;
always @(posedge clk or negedge rstb)
  if      (!rstb)    mcnt <= 'b0;
  else if (~vs)      mcnt <= 'b0;
  else if (hs & den) mcnt <= mcnt + 1'b1;

reg  [23:0] img_out;
always @(mcnt) img_out = (hs & den) ? IMAGE_MEM[mcnt] : 'b0;

//wire [ 7:0] r = img_out[23:16];

//wire [ 7:0] r = {tcnt[4:0], 3'b0};
//wire [ 7:0] g = {tcnt[4:0], 2'b0};
//wire [ 7:0] b = {tcnt[4:0], 3'b0};

wire [ 7:0] r = 8'b0000_1000;
wire [ 7:0] g = 8'b0001_0000;
wire [ 7:0] b = 8'b0010_0000;


//wire [ 7:0] r = tcnt; 
//wire [ 7:0] g = img_out[15:8];
//wire [ 7:0] b = img_out[ 7:0];
 
//wire [ 7:0] b = tcnt;   //img_out[ 7:0];

reg [ 9:0] dcnt;
always @(posedge clk or negedge rstb)
  if (!rstb)     dcnt <= 'b0;
  else if (~den) dcnt <= 'b0;
  else           dcnt <= dcnt + 1'b1;



endmodule
