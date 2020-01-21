
`timescale 1ns/1ps

`include "type.h"

module clk_cgen(
  osci,
  RESET,
  clk_set,
            
  clk_48m,
  clk_20m,
  //dcm_lock,

  rstb,
  clkdot,
  mclk,
  key_scan_clk,
  key_set_clk
  );

input osci;
input RESET;
input clk_set; 

output clk_48m;             
output clk_20m;
//output dcm_lock;  

output  rstb;  
output  clkdot;    
output  mclk;
output key_scan_clk;
output key_set_clk;

wire imck1;
wire mclk;

 
//----------------------------------------------------------------------------
// "Output    Output      Phase     Duty      Pk-to-Pk        Phase"
// "Clock    Freq (MHz) (degrees) Cycle (%) Jitter (ps)  Error (ps)"
//----------------------------------------------------------------------------
// CLK_OUT1____48.000______0.000______50.0______449.175____266.022
// CLK_OUT2____20.000______0.000______50.0______558.265____266.022
// CLK_OUT3____10.000______0.000______50.0______650.974____266.022
// CLK_OUT4_____4.000______0.000______50.0______781.637____266.022
// CLK_OUT5____15.000______0.000______50.0______596.099____266.022
// CLK_OUT6_____5.000______0.000______50.0______748.953____266.022


wire dcm_lock;
wire clk_10m;
//wire imck_4m;
wire imc_15m;
wire imc_5m;
wire key_clk;

clkm_gen clkm_gen (
  // Clock in ports
  .CLK_IN1  ( osci          ),
  // Clock out ports
  .CLK_OUT1 ( clk_48m       ),
  .CLK_OUT2 ( clk_10m       ),
  .CLK_OUT3 ( clk_10m      ),
  .CLK_OUT4 ( key_clk		    ),
  .CLK_OUT5 ( imck_15m      ),
  .CLK_OUT6 ( imck_5m       ),
  
  // Status and control signals
  .RESET    ( ~RESET     ),
  .LOCKED   ( dcm_lock )
 );

/*
reg [5:0] ck_gen;
always @(posedge clk_10m or negedge dcm_lock)
	if(!dcm_lock) ck_gen <= 'b0;
	else          ck_gen <= ck_gen + 1'b1;

reg [21:0] key_cnt;  
always @(posedge key_clk or negedge rstb)
  if(!rstb) key_cnt <= 0;
  else 	    key_cnt <= key_cnt + 1;

assign key_scan_clk = key_cnt[10];  // 4M / 2048 = 1.9 kHz
assign key_set_clk  = key_cnt[6];   // 4M / 128 = 31.25 kHz
*/

/*
wire igclk_m1;
BUFG gate_BUF1C(
    .O ( igclk_m1 ), .I ( ck_gen[2] ));

`ifdef CLKDOT_15M
// Synthesis
BUFGMUX #(.CLK_SEL_TYPE( "SYNC" ) )
BUFGMUX (.O  ( clkdot    ), 
         .I0 ( imck_15m  ), //key_clk imck_15m 
         .I1 ( igclk_m1  ), //igclk_m1
         .S  ( clk_set   ) );
`else  // CLKDOT_10M
// Synthesis
BUFGMUX #(.CLK_SEL_TYPE( "SYNC" ) )
BUFGMUX (.O  ( clkdot    ), 
         .I0 ( clk_10m  ),  //key_clk clk_10m 
         .I1 ( igclk_m1  ),  //igclk_m1
         .S  ( clk_set   ) );
 
`endif
*/

// reset generator ----------------------------------------------------------
SRL16 RST_DLY (.D(dcm_lock ), .CLK(mclk ), .Q(rstb ), .A3(1'b1 ), .A2(1'b1 ), .A1(1'b1 ), .A0(1'b1 ) );


endmodule
 
 
 