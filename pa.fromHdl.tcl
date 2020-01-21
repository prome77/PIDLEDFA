
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name PID_LED -dir "D:/00-PAPIS/LED_MATRIX_FPGA/PID_LED/PID_LED/planAhead_run_2" -part xc6slx9tqg144-2
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "matrix.ucf" [current_fileset -constrset]
add_files [list {ipcore_dir/dpram8192x12.ngc}]
set hdlfile [add_files [list {ipcore_dir/clkm_gen.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {code/I2C/serialInterface.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {code/I2C/registerInterface.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {ipcore_dir/dpram8192x12.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {code/I2C/i2cSlave.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {code/matrix.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {code/I2C/i2cSlaveTop.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {code/clk_cgen.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {code/pic_led.v}]]
set_property file_type Verilog $hdlfile
set_property library work $hdlfile
set_property top pic_led $srcset
add_files [list {matrix.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc6slx9tqg144-2
