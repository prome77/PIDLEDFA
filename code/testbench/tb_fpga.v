
`timescale 1ns/1ps

//`define MICRON_64M
//`define SAMSUNG_64M
`define SAMSUNG_256M
`define REG_TEST

//`define XGA_MODE    // 1024x768 : 65MHz
//`define SVGA_MODE   // 800x600  : 40MHz
//`define WVGA_MODE   // 800x480  : 40MHz
//`define WQVGA_MODE  // 480x272  : 25.2MHz

`include "./mode.h"

`define FRAME_END 3

`define VIN_VECTOR_RW
`define VOUT_VECTOR_RW
//`define WDMA_VECTOR_RW
//`define RDMA_VECTOR_RW

module tb_fpga();

`ifdef XGA_MODE
parameter MODE  = 3'b011;
parameter HSIZE = 1024;
parameter VSIZE =  768;
`endif

`ifdef SVGA_MODE
parameter MODE  = 3'b010;
parameter HSIZE =  800;
parameter VSIZE =  600;
`endif

`ifdef WVGA_MODE
parameter MODE  = 3'b001;
parameter HSIZE =  800;
parameter VSIZE =  480;
`endif

`ifdef WQVGA_MODE
parameter MODE  = 3'b000;
parameter HSIZE =  480;
parameter VSIZE =  272;
`endif

// **************************************************************************
reg  cken;
initial begin
#0
  cken = 0;

#100;
  cken = 1;
$display ("*****************************************");
`ifdef XGA_MODE
$display ("* X G A (1024x768@65MHz) *");
`endif

`ifdef SVGA_MODE
$display ("* S V G A (800x600@40MHz) *");
`endif

`ifdef WVGA_MODE
$display ("* W V G A (800x480@40MHz) *");
`endif

`ifdef WQVGA_MODE
$display ("* W Q V G A (480x272@10MHz) *");
`endif
$display ("*****************************************");

end

// **************************************************************************
wire CK40;
wire CK65;
wire PCK;
wire rstb;

clk_gen clk_gen (
                 .cken(cken),

                 .pck (PCK ),
                 .ck40(CK40),
                 .ck65(CK65),
                 .rstb(rstb)
                );

//***************************************************************************

wire        vsi;
wire        hsi;
wire        den;
wire [ 7:0] rin;
wire [ 7:0] gin;
wire [ 7:0] bin;

video_gen video_gen (
                   .clk (PCK ),
                   .rstb(rstb),

                   .vs  (vsi ),
                   .hs  (hsi ),
                   .den (den ),
                   .r   (rin ),
                   .g   (gin ),
                   .b   (bin )
                  );
 
// External SPI *************************************************************
parameter SCK_DLY = 10; 
reg         mscs;
reg         msck;
reg         mosi;
wire        miso;

task spi_byte;
  input [ 7:0] data;
  integer i;
begin
  for (i=0;i<8;i=i+1) begin
    repeat(SCK_DLY) @(posedge CK65);
      msck = 1'b0;
      mosi = data[(7-i)];
    repeat(SCK_DLY) @(posedge CK65);
      msck = 1'b1;
    end
  repeat(SCK_DLY*1) @(posedge CK65);
end
endtask

task spi_transmit;
  input [ 7:0] number;
  input [ 7:0] cmd;
  input [15:0] addr;
  input [ 7:0] data;
  integer i;
begin
  repeat(SCK_DLY) @(posedge CK65);
    mscs = 1'b1;
    msck = 1'b1;
    mosi = 1'b1;
  repeat(SCK_DLY) @(posedge CK65);
    mscs = 1'b0;
    msck = 1'b1;
    mosi = 1'b1;
  repeat(SCK_DLY) @(posedge CK65);
    spi_byte(number);
    spi_byte(cmd);
    spi_byte(addr[15:8]);
    spi_byte(addr[7:0]);
  for (i=0;i<(number-4);i=i+1) begin
    if ((data == 'b0) | (cmd == 8'hAA) | (cmd == 8'hAC) | (cmd == 8'hAF))
       spi_byte(8'd0);
    else
       spi_byte(i+data);
  end
  repeat(SCK_DLY) @(posedge CK65);
    mscs = 1'b0;
    msck = 1'b1;
    mosi = 1'b1;
  repeat(SCK_DLY) @(posedge CK65);
    mscs = 1'b1;
    msck = 1'b1;
    mosi = 1'b1;
end
endtask

// SSPI Test Main Routine ***************************************************
initial begin
#0
  mscs = 1'b1;
  msck = 1'b1;
  mosi = 1'b1;
end

integer r;
reg [ 7:0] DATA_NUM;
initial begin
#0
  DATA_NUM = 'b0;
  
  r=0;
  
  wait (rstb) @(posedge CK65);
  $display("Start ---------------------------");
  repeat(200) @(posedge CK65);
  
#100000 
`ifdef REG_TEST
// Register Write
 // spi_transmit(8'h05, 8'h55, 16'h1023, 8'h18);
  
  $display("Register Write Finish");
  repeat(400) @(posedge CK65);
  
// Register Read
  spi_transmit(8'h05, 8'haa, 16'h1023, 8'h00);
  
  $display("Register Read Finish");
  repeat(400) @(posedge CK65);

// Finish
// $display("Finish ---------------------------");
// $stop;
`endif
  
end 
 
wire DVI_HPD; 
wire LED_LDM; 
wire LED_STAT;

wire LDM_CLK;
wire LDM_LT;
wire LDMnOE;
wire LDM_A0;
wire LDM_A1;
wire LDM_A2;
wire LDM_A3;
                   
wire LDM0_R0;
wire LDM0_R1;
wire LDM0_G0;
wire LDM0_G1;
wire LDM0_B0;
wire LDM0_B1;
                    
wire LDM1_R0;
wire LDM1_R1;
wire LDM1_G0;
wire LDM1_G1;
wire LDM1_B0;
wire LDM1_B1;
                   
wire LDM2_R0;
wire LDM2_R1;
wire LDM2_G0;
wire LDM2_G1;
wire LDM2_B0;
wire LDM2_B1;
                   
wire LDM3_R0;
wire LDM3_R1;
wire LDM3_G0;
wire LDM3_G1;
wire LDM3_B0;
wire LDM3_B1;

wire F_SW1 = 1'b0;

wire [7:0] DIP_SW_INPUT = 8'b1011_1010;
wire [3:0] DIP_SW_ROW;

wire scl_ddc = 1'b0;
tri  sda_ddc;

//dot_fpga dot_fpga (
pic_led dot_fpga (
  .FPGA_CLK0 ( CK40    ),
  .FPGA_CLK1 ( CK65    ),
  .FPGA_RST  ( rstb   ), 

  .PCLK     ( PCK     ),   
  .VSYNC    ( vsi     ),  
  .HSYNC    ( hsi     ), 
  .DE       ( den     ),  

  .BLUE     ( rin  ),
  .GREEN    ( gin  ) ,
  .RED      ( bin  ),
  
  .I2C_SCL_EDID ( scl_ddc   ),
  .I2C_SDA_EDID ( sda_ddc   ),
  .DVI_HPD ( DVI_HPD  ),
  

  // .DIP_SW_INPUT( DIP_SW_INPUT ),
  // .DIP_SW_ROW (DIP_SW_ROW),
  
  .LED_CLK( LDM_CLK ),
  .LED_LT ( LDM_LT  ),
  .LED_OE ( LDM_ROE  ),
  .LED_A  ( {LDM_A3, LDM_A2, LDM_A1, LDM_A0 }  ),
                   
  .LED_0_R0( LDM0_R0 ),  .LED_0_R1( LDM0_R1 ),
  .LED_0_G0( LDM0_G0 ),  .LED_0_G1( LDM0_G1 ),
  .LED_0_B0( LDM0_B0 ),  .LED_0_B1( LDM0_B1 ),
                    
  .LED_1_R0( LDM1_R0 ),  .LED_1_R1( LDM1_R1 ),
  .LED_1_G0( LDM1_G0 ),  .LED_1_G1( LDM1_G1 ),
  .LED_1_B0( LDM1_B0 ),  .LED_1_B1( LDM1_B1 ),
                   
  .LED_2_R0( LDM2_R0 ),  .LED_2_R1( LDM2_R1 ),
  .LED_2_G0( LDM2_G0 ),  .LED_2_G1( LDM2_G1 ),
  .LED_2_B0( LDM2_B0 ),  .LED_2_B1( LDM2_B1 ),
                   
  .LED_3_R0( LDM3_R0 ),  .LED_3_R1( LDM3_R1 ),
  .LED_3_G0( LDM3_G0 ),  .LED_3_G1( LDM3_G1 ),
  .LED_3_B0( LDM3_B0 ),  .LED_3_B1( LDM3_B1 )
  
);


reg vs_start;
always @(posedge vsi or negedge rstb)
  if (!rstb)    vs_start <= 1'b0;
  else if (vsi) vs_start <= 1'b1;

reg [ 9:0] vs_cnt;
always @(posedge vsi or negedge rstb)
  if (!rstb) vs_cnt <= 'b0;
  else if (vs_start) begin
    vs_cnt <= vs_cnt + 1'b1;
    $display ("===== frame count!! %d frame %d ms", (vs_cnt + 1), ($time/1000000));
  end

always @(vs_cnt) begin
  if (vs_cnt == `FRAME_END) begin
    $display ("==============F I N I S H !!============");
    $stop;
  end
end

 
 
`ifdef VIN_VECTOR_RW
// **************************************************************************
integer vin_rgb_pgm;

initial begin
  vin_rgb_pgm = $fopen("./results/vin_rgb.pgm");  // lcd in -> fpga
  $fdisplay(vin_rgb_pgm, "P3");
  $fdisplay(vin_rgb_pgm, "%d%d", HSIZE, ((`FRAME_END-1)*VSIZE));
  $fdisplay(vin_rgb_pgm, "255");
end

always @(posedge PCK) begin
   if (den & (vs_cnt >= 1)) begin
      $fdisplay(vin_rgb_pgm, "%d %d %d", rin, gin, bin);
   end
end
`endif

/*
`ifdef WDMA_VECTOR_RW
//***************************************************************************
wire        wdre = tb_fpga.VFC_FPGA.vfc_core.vin_core.vin_wdma.wdre;
wire [15:0] wdat = tb_fpga.VFC_FPGA.vfc_core.vin_core.vin_wdma.wdat;

reg wdre_d;
always @(posedge sck)
  wdre_d <= wdre;

integer wdma_read_pgm;

initial begin
  wdma_read_pgm = $fopen("./results/wdma_write.pgm");  // dpram -> sdram
  $fdisplay(wdma_read_pgm, "P3");
  $fdisplay(wdma_read_pgm, "%d%d", HSIZE, ((`FRAME_END-1)*VSIZE));
  $fdisplay(wdma_read_pgm, "255");
end

always @(posedge sck) begin
   if (wdre_d & (vs_cnt >= 1)) begin
      $fdisplay(wdma_read_pgm, "%d %d %d", {wdat[15:11], {3{wdat[15]}}}, {wdat[10:5], {2{wdat[10]}}}, {wdat[4:0], {3{wdat[4]}}} );
   end
end
`endif

`ifdef RDMA_VECTOR_RW
//***************************************************************************
wire        rdwr = tb_fpga.VFC_FPGA.vfc_core.vga_core.vga_rdma.rdwr;
wire [15:0] rdat = tb_fpga.VFC_FPGA.vfc_core.vga_core.vga_rdma.rdat;

integer rdma_write_pgm;

initial begin
  rdma_write_pgm = $fopen("./results/rdma_read.pgm");  // sdram -> dpram
  $fdisplay(rdma_write_pgm, "P3");
  $fdisplay(rdma_write_pgm, "%d%d", HSIZE, ((`FRAME_END-1)*VSIZE));
  $fdisplay(rdma_write_pgm, "255");
end

always @(posedge sck) begin
   if (rdwr & (vs_cnt >= 1)) begin
      $fdisplay(rdma_write_pgm, "%d %d %d", {rdat[15:11], {3{rdat[15]}}}, {rdat[10:5], {2{rdat[10]}}}, {rdat[4:0], {3{rdat[4]}}} );
   end
end
`endif

`ifdef VOUT_VECTOR_RW
//***************************************************************************
integer vga_rgb_pgm;

initial begin
  vga_rgb_pgm = $fopen("./results/vga_rgb.pgm");  // fpga -> vga out
  $fdisplay(vga_rgb_pgm, "P3");
`ifdef WQVGA_MODE
  $fdisplay(vga_rgb_pgm, "%d%d", 960, 544);
`else
  $fdisplay(vga_rgb_pgm, "%d%d", HSIZE, ((`FRAME_END-1)*VSIZE));
`endif
  $fdisplay(vga_rgb_pgm, "255");
end

always @(posedge vck) begin
   if (vden & (vs_cnt >= 1)) begin
      $fdisplay(vga_rgb_pgm, "%d %d %d", rout, gout, bout);
   end
end

//***************************************************************************
`endif
*/

endmodule
