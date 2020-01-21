/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    xilinxcorelib_ver_m_00000000001358910285_3399419869_init();
    xilinxcorelib_ver_m_00000000001687936702_2200158657_init();
    xilinxcorelib_ver_m_00000000000277421008_1037519657_init();
    xilinxcorelib_ver_m_00000000001603977570_0329813048_init();
    work_m_00000000003617559063_3571943191_init();
    work_m_00000000003307218861_2678588273_init();
    work_m_00000000000754991062_0999479621_init();
    work_m_00000000000592982722_0772397708_init();
    work_m_00000000000723105693_2922806970_init();
    work_m_00000000002005832291_4143471792_init();
    unisims_ver_m_00000000001946988858_2297623829_init();
    unisims_ver_m_00000000004091665089_4283100370_init();
    unisims_ver_m_00000000003084551676_4089256822_init();
    unisims_ver_m_00000000003266096158_2593380106_init();
    work_m_00000000000185133034_2926626805_init();
    unisims_ver_m_00000000000234138215_2788170701_init();
    work_m_00000000001394110184_3479989002_init();
    work_m_00000000002578277436_1481681593_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002578277436_1481681593");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
