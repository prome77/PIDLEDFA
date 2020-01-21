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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/00-PAPIS/LED_MATRIX_FPGA/PID_LED/PID_LED/code/testbench/tb_fpga.v";
static int ng1[] = {0, 0};
static int ng2[] = {8, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {7, 0};
static unsigned int ng5[] = {1U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {4, 0};
static unsigned int ng8[] = {170U, 0U};
static unsigned int ng9[] = {172U, 0U};
static unsigned int ng10[] = {175U, 0U};
static const char *ng11 = "*****************************************";
static const char *ng12 = "* X G A (1024x768@65MHz) *";
static const char *ng13 = "Start ---------------------------";
static int ng14[] = {200, 0};
static const char *ng15 = "Register Write Finish";
static int ng16[] = {400, 0};
static unsigned int ng17[] = {5U, 0U};
static unsigned int ng18[] = {4131U, 0U};
static const char *ng19 = "Register Read Finish";
static unsigned int ng20[] = {186U, 0U};
static const char *ng21 = "===== frame count!! %d frame %d ms";
static int ng22[] = {1000000, 0, 0, 0};
static int ng23[] = {3, 0};
static const char *ng24 = "==============F I N I S H !!============";
static const char *ng25 = "./results/vin_rgb.pgm";
static const char *ng26 = "P3";
static const char *ng27 = "%d%d";
static const char *ng28 = "255";
static const char *ng29 = "%d %d %d";



static int sp_spi_byte(char *t1, char *t2)
{
    char t8[8];
    char t26[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 804);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(123, ng0);

LAB5:    xsi_set_current_line(124, ng0);
    xsi_set_current_line(124, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 7180);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB6:    t4 = (t1 + 7180);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    xsi_vlog_signed_less(t8, 32, t6, 32, t7, 32);
    t9 = (t8 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t13 = (t12 & t11);
    t14 = (t13 != 0);
    if (t14 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(131, ng0);
    t4 = (t1 + 504);
    t5 = *((char **)t4);
    t4 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_signed_multiply(t8, 32, t5, 32, t4, 32);
    t6 = (t8 + 4);
    t10 = *((unsigned int *)t6);
    t11 = (~(t10));
    t12 = *((unsigned int *)t8);
    t20 = (t12 & t11);
    t7 = (t1 + 12784);
    *((int *)t7) = t20;

LAB18:    t9 = (t1 + 12784);
    if (*((int *)t9) > 0)
        goto LAB19;

LAB20:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(124, ng0);

LAB9:    xsi_set_current_line(125, ng0);
    t15 = (t1 + 504);
    t16 = *((char **)t15);
    t15 = (t16 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t1 + 12776);
    *((int *)t21) = t20;

LAB10:    t22 = (t1 + 12776);
    if (*((int *)t22) > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(126, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 6444);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(127, ng0);
    t4 = (t1 + 7088);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t1 + 7088);
    t9 = (t7 + 44U);
    t15 = *((char **)t9);
    t16 = ((char*)((ng4)));
    t21 = (t1 + 7180);
    t22 = (t21 + 36U);
    t23 = *((char **)t22);
    memset(t26, 0, 8);
    xsi_vlog_signed_minus(t26, 32, t16, 32, t23, 32);
    xsi_vlog_generic_get_index_select_value(t8, 1, t6, t15, 2, t26, 32, 1);
    t24 = (t1 + 6536);
    xsi_vlogvar_assign_value(t24, t8, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t4 = (t1 + 504);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t10 = *((unsigned int *)t4);
    t11 = (~(t10));
    t12 = *((unsigned int *)t5);
    t20 = (t12 & t11);
    t6 = (t1 + 12780);
    *((int *)t6) = t20;

LAB14:    t7 = (t1 + 12780);
    if (*((int *)t7) > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(129, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6444);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t4 = (t1 + 7180);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng6)));
    memset(t8, 0, 8);
    xsi_vlog_signed_add(t8, 32, t6, 32, t7, 32);
    t9 = (t1 + 7180);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB6;

LAB11:    xsi_set_current_line(125, ng0);
    t23 = (t2 + 48U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    xsi_wp_set_status(t25, 1);
    *((char **)t3) = &&LAB13;
    goto LAB1;

LAB13:    t4 = (t1 + 12776);
    t20 = *((int *)t4);
    *((int *)t4) = (t20 - 1);
    goto LAB10;

LAB15:    xsi_set_current_line(128, ng0);
    t9 = (t2 + 48U);
    t15 = *((char **)t9);
    t16 = (t15 + 8U);
    xsi_wp_set_status(t16, 1);
    *((char **)t3) = &&LAB17;
    goto LAB1;

LAB17:    t4 = (t1 + 12780);
    t20 = *((int *)t4);
    *((int *)t4) = (t20 - 1);
    goto LAB14;

LAB19:    xsi_set_current_line(131, ng0);
    t15 = (t2 + 48U);
    t16 = *((char **)t15);
    t21 = (t16 + 16U);
    xsi_wp_set_status(t21, 1);
    *((char **)t3) = &&LAB21;
    goto LAB1;

LAB21:    t4 = (t1 + 12784);
    t20 = *((int *)t4);
    *((int *)t4) = (t20 - 1);
    goto LAB18;

}

static int sp_spi_transmit(char *t1, char *t2)
{
    char t32[8];
    char t38[8];
    char t39[8];
    char t51[8];
    char t64[8];
    char t94[8];
    char t110[8];
    char t142[8];
    char t158[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t109;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    char *t139;
    char *t140;
    char *t141;
    char *t143;
    char *t144;
    unsigned int t145;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t157;
    unsigned int t159;
    unsigned int t160;
    unsigned int t161;
    char *t162;
    char *t163;
    char *t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    char *t172;
    char *t173;
    unsigned int t174;
    unsigned int t175;
    unsigned int t176;
    int t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    int t181;
    unsigned int t182;
    unsigned int t183;
    unsigned int t184;
    unsigned int t185;
    char *t186;
    unsigned int t187;
    unsigned int t188;
    unsigned int t189;
    unsigned int t190;
    unsigned int t191;
    char *t192;
    char *t193;
    char *t194;
    char *t195;
    char *t196;
    char *t197;
    char *t198;
    char *t199;
    char *t200;
    char *t201;
    char *t202;
    char *t203;
    char *t204;
    char *t205;
    char *t206;
    char *t207;
    char *t208;
    char *t209;
    int t210;
    char *t211;
    char *t212;
    char *t213;
    char *t214;

LAB0:    t0 = 1;
    t3 = (t2 + 28U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1060);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(141, ng0);

LAB5:    xsi_set_current_line(142, ng0);
    t5 = (t1 + 504);
    t6 = *((char **)t5);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t1 + 12788);
    *((int *)t11) = t10;

LAB6:    t12 = (t1 + 12788);
    if (*((int *)t12) > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(143, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6352);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6444);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(145, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6536);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(146, ng0);
    t4 = (t1 + 504);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t6 = (t1 + 12792);
    *((int *)t6) = t10;

LAB10:    t11 = (t1 + 12792);
    if (*((int *)t11) > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(147, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 6352);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6444);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(149, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6536);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(150, ng0);
    t4 = (t1 + 504);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t6 = (t1 + 12796);
    *((int *)t6) = t10;

LAB14:    t11 = (t1 + 12796);
    if (*((int *)t11) > 0)
        goto LAB15;

LAB16:    xsi_set_current_line(151, ng0);
    t4 = (t1 + 7272);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t11 = (t2 + 32U);
    t12 = *((char **)t11);
    t13 = (t2 + 32U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB18);
    t15 = (t2 + 32U);
    t16 = *((char **)t15);
    t17 = (t1 + 804);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 7088);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 8);

LAB20:    t20 = (t2 + 36U);
    t21 = *((char **)t20);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = (t23 + 148U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t10 = ((int  (*)(char *, char *))t27)(t1, t21);
    if (t10 == -1)
        goto LAB21;

LAB22:    if (t10 != 0)
        goto LAB23;

LAB18:    t21 = (t1 + 804);
    xsi_vlog_subprogram_popinvocation(t21);

LAB19:    t28 = (t2 + 36U);
    t29 = *((char **)t28);
    t28 = (t1 + 804);
    t30 = (t2 + 32U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    xsi_set_current_line(152, ng0);
    t4 = (t1 + 7364);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t11 = (t2 + 32U);
    t12 = *((char **)t11);
    t13 = (t2 + 32U);
    t14 = *((char **)t13);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t14, &&LAB24);
    t15 = (t2 + 32U);
    t16 = *((char **)t15);
    t17 = (t1 + 804);
    t18 = xsi_create_subprogram_invocation(t16, 0, t1, t17, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t17, t18);
    t19 = (t1 + 7088);
    xsi_vlogvar_assign_value(t19, t6, 0, 0, 8);

LAB26:    t20 = (t2 + 36U);
    t21 = *((char **)t20);
    t22 = (t21 + 44U);
    t23 = *((char **)t22);
    t24 = (t23 + 148U);
    t25 = *((char **)t24);
    t26 = (t25 + 0U);
    t27 = *((char **)t26);
    t10 = ((int  (*)(char *, char *))t27)(t1, t21);
    if (t10 == -1)
        goto LAB27;

LAB28:    if (t10 != 0)
        goto LAB29;

LAB24:    t21 = (t1 + 804);
    xsi_vlog_subprogram_popinvocation(t21);

LAB25:    t28 = (t2 + 36U);
    t29 = *((char **)t28);
    t28 = (t1 + 804);
    t30 = (t2 + 32U);
    t31 = *((char **)t30);
    xsi_delete_subprogram_invocation(t28, t29, t1, t31, t2);
    xsi_set_current_line(153, ng0);
    t4 = (t1 + 7456);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t32, 0, 8);
    t11 = (t32 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 8);
    *((unsigned int *)t32) = t8;
    t9 = *((unsigned int *)t12);
    t33 = (t9 >> 8);
    *((unsigned int *)t11) = t33;
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 & 255U);
    t35 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t35 & 255U);
    t13 = (t2 + 32U);
    t14 = *((char **)t13);
    t15 = (t2 + 32U);
    t16 = *((char **)t15);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t16, &&LAB30);
    t17 = (t2 + 32U);
    t18 = *((char **)t17);
    t19 = (t1 + 804);
    t20 = xsi_create_subprogram_invocation(t18, 0, t1, t19, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t19, t20);
    t21 = (t1 + 7088);
    xsi_vlogvar_assign_value(t21, t32, 0, 0, 8);

LAB32:    t22 = (t2 + 36U);
    t23 = *((char **)t22);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = (t25 + 148U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t29 = *((char **)t28);
    t10 = ((int  (*)(char *, char *))t29)(t1, t23);
    if (t10 == -1)
        goto LAB33;

LAB34:    if (t10 != 0)
        goto LAB35;

LAB30:    t23 = (t1 + 804);
    xsi_vlog_subprogram_popinvocation(t23);

LAB31:    t30 = (t2 + 36U);
    t31 = *((char **)t30);
    t30 = (t1 + 804);
    t36 = (t2 + 32U);
    t37 = *((char **)t36);
    xsi_delete_subprogram_invocation(t30, t31, t1, t37, t2);
    xsi_set_current_line(154, ng0);
    t4 = (t1 + 7456);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t32, 0, 8);
    t11 = (t32 + 4);
    t12 = (t6 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (t7 >> 0);
    *((unsigned int *)t32) = t8;
    t9 = *((unsigned int *)t12);
    t33 = (t9 >> 0);
    *((unsigned int *)t11) = t33;
    t34 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t34 & 255U);
    t35 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t35 & 255U);
    t13 = (t2 + 32U);
    t14 = *((char **)t13);
    t15 = (t2 + 32U);
    t16 = *((char **)t15);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t16, &&LAB36);
    t17 = (t2 + 32U);
    t18 = *((char **)t17);
    t19 = (t1 + 804);
    t20 = xsi_create_subprogram_invocation(t18, 0, t1, t19, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t19, t20);
    t21 = (t1 + 7088);
    xsi_vlogvar_assign_value(t21, t32, 0, 0, 8);

LAB38:    t22 = (t2 + 36U);
    t23 = *((char **)t22);
    t24 = (t23 + 44U);
    t25 = *((char **)t24);
    t26 = (t25 + 148U);
    t27 = *((char **)t26);
    t28 = (t27 + 0U);
    t29 = *((char **)t28);
    t10 = ((int  (*)(char *, char *))t29)(t1, t23);
    if (t10 == -1)
        goto LAB39;

LAB40:    if (t10 != 0)
        goto LAB41;

LAB36:    t23 = (t1 + 804);
    xsi_vlog_subprogram_popinvocation(t23);

LAB37:    t30 = (t2 + 36U);
    t31 = *((char **)t30);
    t30 = (t1 + 804);
    t36 = (t2 + 32U);
    t37 = *((char **)t36);
    xsi_delete_subprogram_invocation(t30, t31, t1, t37, t2);
    xsi_set_current_line(155, ng0);
    xsi_set_current_line(155, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 7640);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);

LAB42:    t4 = (t1 + 7640);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t11 = (t1 + 7272);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t14 = ((char*)((ng7)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t13, 8, t14, 32);
    memset(t38, 0, 8);
    t15 = (t6 + 4);
    if (*((unsigned int *)t15) != 0)
        goto LAB44;

LAB43:    t16 = (t32 + 4);
    if (*((unsigned int *)t16) != 0)
        goto LAB44;

LAB47:    if (*((unsigned int *)t6) < *((unsigned int *)t32))
        goto LAB45;

LAB46:    t18 = (t38 + 4);
    t7 = *((unsigned int *)t18);
    t8 = (~(t7));
    t9 = *((unsigned int *)t38);
    t33 = (t9 & t8);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB48;

LAB49:    xsi_set_current_line(161, ng0);
    t4 = (t1 + 504);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t6 = (t1 + 12800);
    *((int *)t6) = t10;

LAB91:    t11 = (t1 + 12800);
    if (*((int *)t11) > 0)
        goto LAB92;

LAB93:    xsi_set_current_line(162, ng0);
    t4 = ((char*)((ng3)));
    t5 = (t1 + 6352);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(163, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6444);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(164, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6536);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(165, ng0);
    t4 = (t1 + 504);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t7 = *((unsigned int *)t4);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t6 = (t1 + 12804);
    *((int *)t6) = t10;

LAB95:    t11 = (t1 + 12804);
    if (*((int *)t11) > 0)
        goto LAB96;

LAB97:    xsi_set_current_line(166, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6352);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(167, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6444);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(168, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t1 + 6536);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);

LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 28U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB7:    xsi_set_current_line(142, ng0);
    t13 = (t2 + 48U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    xsi_wp_set_status(t15, 1);
    *((char **)t3) = &&LAB9;
    goto LAB1;

LAB9:    t4 = (t1 + 12788);
    t10 = *((int *)t4);
    *((int *)t4) = (t10 - 1);
    goto LAB6;

LAB11:    xsi_set_current_line(146, ng0);
    t12 = (t2 + 48U);
    t13 = *((char **)t12);
    t14 = (t13 + 8U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB13;
    goto LAB1;

LAB13:    t4 = (t1 + 12792);
    t10 = *((int *)t4);
    *((int *)t4) = (t10 - 1);
    goto LAB10;

LAB15:    xsi_set_current_line(150, ng0);
    t12 = (t2 + 48U);
    t13 = *((char **)t12);
    t14 = (t13 + 16U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB17;
    goto LAB1;

LAB17:    t4 = (t1 + 12796);
    t10 = *((int *)t4);
    *((int *)t4) = (t10 - 1);
    goto LAB14;

LAB21:    t0 = -1;
    goto LAB1;

LAB23:    t20 = (t2 + 28U);
    *((char **)t20) = &&LAB20;
    goto LAB1;

LAB27:    t0 = -1;
    goto LAB1;

LAB29:    t20 = (t2 + 28U);
    *((char **)t20) = &&LAB26;
    goto LAB1;

LAB33:    t0 = -1;
    goto LAB1;

LAB35:    t22 = (t2 + 28U);
    *((char **)t22) = &&LAB32;
    goto LAB1;

LAB39:    t0 = -1;
    goto LAB1;

LAB41:    t22 = (t2 + 28U);
    *((char **)t22) = &&LAB38;
    goto LAB1;

LAB44:    t17 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB46;

LAB45:    *((unsigned int *)t38) = 1;
    goto LAB46;

LAB48:    xsi_set_current_line(155, ng0);

LAB50:    xsi_set_current_line(156, ng0);
    t19 = (t1 + 7548);
    t20 = (t19 + 36U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    memset(t39, 0, 8);
    t23 = (t21 + 4);
    t24 = (t22 + 4);
    t35 = *((unsigned int *)t21);
    t40 = *((unsigned int *)t22);
    t41 = (t35 ^ t40);
    t42 = *((unsigned int *)t23);
    t43 = *((unsigned int *)t24);
    t44 = (t42 ^ t43);
    t45 = (t41 | t44);
    t46 = *((unsigned int *)t23);
    t47 = *((unsigned int *)t24);
    t48 = (t46 | t47);
    t49 = (~(t48));
    t50 = (t45 & t49);
    if (t50 != 0)
        goto LAB54;

LAB51:    if (t48 != 0)
        goto LAB53;

LAB52:    *((unsigned int *)t39) = 1;

LAB54:    t26 = (t1 + 7364);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng8)));
    memset(t51, 0, 8);
    t30 = (t28 + 4);
    t31 = (t29 + 4);
    t52 = *((unsigned int *)t28);
    t53 = *((unsigned int *)t29);
    t54 = (t52 ^ t53);
    t55 = *((unsigned int *)t30);
    t56 = *((unsigned int *)t31);
    t57 = (t55 ^ t56);
    t58 = (t54 | t57);
    t59 = *((unsigned int *)t30);
    t60 = *((unsigned int *)t31);
    t61 = (t59 | t60);
    t62 = (~(t61));
    t63 = (t58 & t62);
    if (t63 != 0)
        goto LAB58;

LAB55:    if (t61 != 0)
        goto LAB57;

LAB56:    *((unsigned int *)t51) = 1;

LAB58:    t65 = *((unsigned int *)t39);
    t66 = *((unsigned int *)t51);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t37 = (t39 + 4);
    t68 = (t51 + 4);
    t69 = (t64 + 4);
    t70 = *((unsigned int *)t37);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB59;

LAB60:
LAB61:    t90 = (t1 + 7364);
    t91 = (t90 + 36U);
    t92 = *((char **)t91);
    t93 = ((char*)((ng9)));
    memset(t94, 0, 8);
    t95 = (t92 + 4);
    t96 = (t93 + 4);
    t97 = *((unsigned int *)t92);
    t98 = *((unsigned int *)t93);
    t99 = (t97 ^ t98);
    t100 = *((unsigned int *)t95);
    t101 = *((unsigned int *)t96);
    t102 = (t100 ^ t101);
    t103 = (t99 | t102);
    t104 = *((unsigned int *)t95);
    t105 = *((unsigned int *)t96);
    t106 = (t104 | t105);
    t107 = (~(t106));
    t108 = (t103 & t107);
    if (t108 != 0)
        goto LAB65;

LAB62:    if (t106 != 0)
        goto LAB64;

LAB63:    *((unsigned int *)t94) = 1;

LAB65:    t111 = *((unsigned int *)t64);
    t112 = *((unsigned int *)t94);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = (t64 + 4);
    t115 = (t94 + 4);
    t116 = (t110 + 4);
    t117 = *((unsigned int *)t114);
    t118 = *((unsigned int *)t115);
    t119 = (t117 | t118);
    *((unsigned int *)t116) = t119;
    t120 = *((unsigned int *)t116);
    t121 = (t120 != 0);
    if (t121 == 1)
        goto LAB66;

LAB67:
LAB68:    t138 = (t1 + 7364);
    t139 = (t138 + 36U);
    t140 = *((char **)t139);
    t141 = ((char*)((ng10)));
    memset(t142, 0, 8);
    t143 = (t140 + 4);
    t144 = (t141 + 4);
    t145 = *((unsigned int *)t140);
    t146 = *((unsigned int *)t141);
    t147 = (t145 ^ t146);
    t148 = *((unsigned int *)t143);
    t149 = *((unsigned int *)t144);
    t150 = (t148 ^ t149);
    t151 = (t147 | t150);
    t152 = *((unsigned int *)t143);
    t153 = *((unsigned int *)t144);
    t154 = (t152 | t153);
    t155 = (~(t154));
    t156 = (t151 & t155);
    if (t156 != 0)
        goto LAB72;

LAB69:    if (t154 != 0)
        goto LAB71;

LAB70:    *((unsigned int *)t142) = 1;

LAB72:    t159 = *((unsigned int *)t110);
    t160 = *((unsigned int *)t142);
    t161 = (t159 | t160);
    *((unsigned int *)t158) = t161;
    t162 = (t110 + 4);
    t163 = (t142 + 4);
    t164 = (t158 + 4);
    t165 = *((unsigned int *)t162);
    t166 = *((unsigned int *)t163);
    t167 = (t165 | t166);
    *((unsigned int *)t164) = t167;
    t168 = *((unsigned int *)t164);
    t169 = (t168 != 0);
    if (t169 == 1)
        goto LAB73;

LAB74:
LAB75:    t186 = (t158 + 4);
    t187 = *((unsigned int *)t186);
    t188 = (~(t187));
    t189 = *((unsigned int *)t158);
    t190 = (t189 & t188);
    t191 = (t190 != 0);
    if (t191 > 0)
        goto LAB76;

LAB77:    xsi_set_current_line(159, ng0);
    t4 = (t1 + 7640);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t11 = (t1 + 7548);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_add(t32, 32, t6, 32, t13, 8);
    t14 = (t2 + 32U);
    t15 = *((char **)t14);
    t16 = (t2 + 32U);
    t17 = *((char **)t16);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t17, &&LAB85);
    t18 = (t2 + 32U);
    t19 = *((char **)t18);
    t20 = (t1 + 804);
    t21 = xsi_create_subprogram_invocation(t19, 0, t1, t20, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t20, t21);
    t22 = (t1 + 7088);
    xsi_vlogvar_assign_value(t22, t32, 0, 0, 8);

LAB87:    t23 = (t2 + 36U);
    t24 = *((char **)t23);
    t25 = (t24 + 44U);
    t26 = *((char **)t25);
    t27 = (t26 + 148U);
    t28 = *((char **)t27);
    t29 = (t28 + 0U);
    t30 = *((char **)t29);
    t10 = ((int  (*)(char *, char *))t30)(t1, t24);
    if (t10 == -1)
        goto LAB88;

LAB89:    if (t10 != 0)
        goto LAB90;

LAB85:    t24 = (t1 + 804);
    xsi_vlog_subprogram_popinvocation(t24);

LAB86:    t31 = (t2 + 36U);
    t36 = *((char **)t31);
    t31 = (t1 + 804);
    t37 = (t2 + 32U);
    t68 = *((char **)t37);
    xsi_delete_subprogram_invocation(t31, t36, t1, t68, t2);

LAB78:    xsi_set_current_line(155, ng0);
    t4 = (t1 + 7640);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng6)));
    memset(t32, 0, 8);
    xsi_vlog_signed_add(t32, 32, t6, 32, t11, 32);
    t12 = (t1 + 7640);
    xsi_vlogvar_assign_value(t12, t32, 0, 0, 32);
    goto LAB42;

LAB53:    t25 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB54;

LAB57:    t36 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB58;

LAB59:    t75 = *((unsigned int *)t64);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t64) = (t75 | t76);
    t77 = (t39 + 4);
    t78 = (t51 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t39);
    t10 = (t81 & t80);
    t82 = *((unsigned int *)t78);
    t83 = (~(t82));
    t84 = *((unsigned int *)t51);
    t85 = (t84 & t83);
    t86 = (~(t10));
    t87 = (~(t85));
    t88 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t88 & t86);
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    goto LAB61;

LAB64:    t109 = (t94 + 4);
    *((unsigned int *)t94) = 1;
    *((unsigned int *)t109) = 1;
    goto LAB65;

LAB66:    t122 = *((unsigned int *)t110);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t110) = (t122 | t123);
    t124 = (t64 + 4);
    t125 = (t94 + 4);
    t126 = *((unsigned int *)t124);
    t127 = (~(t126));
    t128 = *((unsigned int *)t64);
    t129 = (t128 & t127);
    t130 = *((unsigned int *)t125);
    t131 = (~(t130));
    t132 = *((unsigned int *)t94);
    t133 = (t132 & t131);
    t134 = (~(t129));
    t135 = (~(t133));
    t136 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t136 & t134);
    t137 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t137 & t135);
    goto LAB68;

LAB71:    t157 = (t142 + 4);
    *((unsigned int *)t142) = 1;
    *((unsigned int *)t157) = 1;
    goto LAB72;

LAB73:    t170 = *((unsigned int *)t158);
    t171 = *((unsigned int *)t164);
    *((unsigned int *)t158) = (t170 | t171);
    t172 = (t110 + 4);
    t173 = (t142 + 4);
    t174 = *((unsigned int *)t172);
    t175 = (~(t174));
    t176 = *((unsigned int *)t110);
    t177 = (t176 & t175);
    t178 = *((unsigned int *)t173);
    t179 = (~(t178));
    t180 = *((unsigned int *)t142);
    t181 = (t180 & t179);
    t182 = (~(t177));
    t183 = (~(t181));
    t184 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t184 & t182);
    t185 = *((unsigned int *)t164);
    *((unsigned int *)t164) = (t185 & t183);
    goto LAB75;

LAB76:    xsi_set_current_line(157, ng0);
    t192 = ((char*)((ng3)));
    t193 = (t2 + 32U);
    t194 = *((char **)t193);
    t195 = (t2 + 32U);
    t196 = *((char **)t195);
    xsi_vlog_subprograminvocation_setJumpstate(t2, t196, &&LAB79);
    t197 = (t2 + 32U);
    t198 = *((char **)t197);
    t199 = (t1 + 804);
    t200 = xsi_create_subprogram_invocation(t198, 0, t1, t199, 0, t2);
    xsi_vlog_subprogram_pushinvocation(t199, t200);
    t201 = (t1 + 7088);
    xsi_vlogvar_assign_value(t201, t192, 0, 0, 8);

LAB81:    t202 = (t2 + 36U);
    t203 = *((char **)t202);
    t204 = (t203 + 44U);
    t205 = *((char **)t204);
    t206 = (t205 + 148U);
    t207 = *((char **)t206);
    t208 = (t207 + 0U);
    t209 = *((char **)t208);
    t210 = ((int  (*)(char *, char *))t209)(t1, t203);
    if (t210 == -1)
        goto LAB82;

LAB83:    if (t210 != 0)
        goto LAB84;

LAB79:    t203 = (t1 + 804);
    xsi_vlog_subprogram_popinvocation(t203);

LAB80:    t211 = (t2 + 36U);
    t212 = *((char **)t211);
    t211 = (t1 + 804);
    t213 = (t2 + 32U);
    t214 = *((char **)t213);
    xsi_delete_subprogram_invocation(t211, t212, t1, t214, t2);
    goto LAB78;

LAB82:    t0 = -1;
    goto LAB1;

LAB84:    t202 = (t2 + 28U);
    *((char **)t202) = &&LAB81;
    goto LAB1;

LAB88:    t0 = -1;
    goto LAB1;

LAB90:    t23 = (t2 + 28U);
    *((char **)t23) = &&LAB87;
    goto LAB1;

LAB92:    xsi_set_current_line(161, ng0);
    t12 = (t2 + 48U);
    t13 = *((char **)t12);
    t14 = (t13 + 24U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB94;
    goto LAB1;

LAB94:    t4 = (t1 + 12800);
    t10 = *((int *)t4);
    *((int *)t4) = (t10 - 1);
    goto LAB91;

LAB96:    xsi_set_current_line(165, ng0);
    t12 = (t2 + 48U);
    t13 = *((char **)t12);
    t14 = (t13 + 32U);
    xsi_wp_set_status(t14, 1);
    *((char **)t3) = &&LAB98;
    goto LAB1;

LAB98:    t4 = (t1 + 12804);
    t10 = *((int *)t4);
    *((int *)t4) = (t10 - 1);
    goto LAB95;

}

static void Initial_51_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 8164U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);

LAB4:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 8064);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 6260);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 8064);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 6260);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    xsi_set_current_line(59, ng0);
    xsi_vlogfile_write(1, 0, 0, ng12, 1, t0);
    xsi_set_current_line(73, ng0);
    xsi_vlogfile_write(1, 0, 0, ng11, 1, t0);
    goto LAB1;

}

static void Initial_173_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;

LAB0:    t1 = (t0 + 8308U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(173, ng0);

LAB4:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 8208);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(175, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 6352);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(176, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6444);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(177, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 6536);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB1;

}

static void Initial_182_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 8452U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(182, ng0);

LAB4:    xsi_set_current_line(183, ng0);
    t2 = (t0 + 8352);
    xsi_process_wait(t2, 0LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(184, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 6720);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 8);
    xsi_set_current_line(186, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 6628);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(188, ng0);

LAB6:    t2 = (t0 + 1708U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t5 = *((unsigned int *)t2);
    t6 = (~(t5));
    t7 = *((unsigned int *)t3);
    t8 = (t7 & t6);
    t9 = (t8 != 0);
    if (t9 > 0)
        goto LAB8;

LAB7:    t4 = (t0 + 9864);
    *((int *)t4) = 1;
    t10 = (t0 + 8452U);
    *((char **)t10) = &&LAB6;
    goto LAB1;

LAB8:    t11 = (t0 + 9864);
    *((int *)t11) = 0;
    xsi_set_current_line(188, ng0);
    t12 = (t0 + 9872);
    *((int *)t12) = 1;
    t13 = (t0 + 8480);
    *((char **)t13) = t12;
    *((char **)t1) = &&LAB9;
    goto LAB1;

LAB9:    xsi_set_current_line(189, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(190, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t14 = (t7 & t6);
    t4 = (t0 + 12808);
    *((int *)t4) = t14;

LAB10:    t10 = (t0 + 12808);
    if (*((int *)t10) > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(192, ng0);
    t2 = (t0 + 8352);
    xsi_process_wait(t2, 100000000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB11:    xsi_set_current_line(190, ng0);
    t11 = (t0 + 9880);
    *((int *)t11) = 1;
    t12 = (t0 + 8480);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    t2 = (t0 + 12808);
    t14 = *((int *)t2);
    *((int *)t2) = (t14 - 1);
    goto LAB10;

LAB14:    xsi_set_current_line(197, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(198, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t14 = (t7 & t6);
    t4 = (t0 + 12812);
    *((int *)t4) = t14;

LAB15:    t10 = (t0 + 12812);
    if (*((int *)t10) > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(201, ng0);
    t2 = ((char*)((ng17)));
    t3 = ((char*)((ng8)));
    t4 = ((char*)((ng18)));
    t10 = ((char*)((ng3)));
    t11 = (t0 + 8352);
    t12 = (t0 + 1060);
    t13 = xsi_create_subprogram_invocation(t11, 0, t0, t12, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t12, t13);
    t15 = (t0 + 7272);
    xsi_vlogvar_assign_value(t15, t2, 0, 0, 8);
    t16 = (t0 + 7364);
    xsi_vlogvar_assign_value(t16, t3, 0, 0, 8);
    t17 = (t0 + 7456);
    xsi_vlogvar_assign_value(t17, t4, 0, 0, 16);
    t18 = (t0 + 7548);
    xsi_vlogvar_assign_value(t18, t10, 0, 0, 8);

LAB21:    t19 = (t0 + 8404);
    t20 = *((char **)t19);
    t21 = (t20 + 44U);
    t22 = *((char **)t21);
    t23 = (t22 + 148U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t14 = ((int  (*)(char *, char *))t26)(t0, t20);

LAB23:    if (t14 != 0)
        goto LAB24;

LAB19:    t20 = (t0 + 1060);
    xsi_vlog_subprogram_popinvocation(t20);

LAB20:    t27 = (t0 + 8404);
    t28 = *((char **)t27);
    t27 = (t0 + 1060);
    t29 = (t0 + 8352);
    t30 = 0;
    xsi_delete_subprogram_invocation(t27, t28, t0, t29, t30);
    xsi_set_current_line(203, ng0);
    xsi_vlogfile_write(1, 0, 0, ng19, 1, t0);
    xsi_set_current_line(204, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t2 + 4);
    t5 = *((unsigned int *)t3);
    t6 = (~(t5));
    t7 = *((unsigned int *)t2);
    t14 = (t7 & t6);
    t4 = (t0 + 12816);
    *((int *)t4) = t14;

LAB25:    t10 = (t0 + 12816);
    if (*((int *)t10) > 0)
        goto LAB26;

LAB27:    goto LAB1;

LAB16:    xsi_set_current_line(198, ng0);
    t11 = (t0 + 9888);
    *((int *)t11) = 1;
    t12 = (t0 + 8480);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB18;
    goto LAB1;

LAB18:    t2 = (t0 + 12812);
    t14 = *((int *)t2);
    *((int *)t2) = (t14 - 1);
    goto LAB15;

LAB22:;
LAB24:    t19 = (t0 + 8452U);
    *((char **)t19) = &&LAB21;
    goto LAB1;

LAB26:    xsi_set_current_line(204, ng0);
    t11 = (t0 + 9896);
    *((int *)t11) = 1;
    t12 = (t0 + 8480);
    *((char **)t12) = t11;
    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB28:    t2 = (t0 + 12816);
    t14 = *((int *)t2);
    *((int *)t2) = (t14 - 1);
    goto LAB25;

}

static void NetDecl_253_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8596U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(253, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 9972);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0U);

LAB1:    return;
}

static void NetDecl_255_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8740U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(255, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 10008);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 255U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 7U);

LAB1:    return;
}

static void NetDecl_258_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 8884U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(258, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 10044);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0U);

LAB1:    return;
}

static void Always_309_6(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 9028U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(309, ng0);
    t2 = (t0 + 9904);
    *((int *)t2) = 1;
    t3 = (t0 + 9056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(310, ng0);
    t5 = (t0 + 1708U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(311, ng0);
    t2 = (t0 + 1800U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(310, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 6812);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 1, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(311, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 6812);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    goto LAB14;

}

static void Always_314_7(char *t0)
{
    char t4[8];
    char t22[16];
    char t23[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    t1 = (t0 + 9172U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(314, ng0);
    t2 = (t0 + 9912);
    *((int *)t2) = 1;
    t3 = (t0 + 9200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(315, ng0);
    t5 = (t0 + 1708U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t5) == 0)
        goto LAB5;

LAB7:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB8:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(316, ng0);
    t2 = (t0 + 6812);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB12;

LAB13:
LAB14:
LAB11:    goto LAB2;

LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(315, ng0);
    t19 = ((char*)((ng3)));
    t20 = (t0 + 6904);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 10, 0LL);
    goto LAB11;

LAB12:    xsi_set_current_line(316, ng0);

LAB15:    xsi_set_current_line(317, ng0);
    t12 = (t0 + 6904);
    t13 = (t12 + 36U);
    t19 = *((char **)t13);
    t20 = ((char*)((ng5)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 10, t19, 10, t20, 10);
    t21 = (t0 + 6904);
    xsi_vlogvar_wait_assign_value(t21, t4, 0, 0, 10, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = (t0 + 6904);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 10, t6, 32);
    t12 = xsi_vlog_time(t22, 1000.0000000000000, 1000.0000000000000);
    t13 = ((char*)((ng22)));
    xsi_vlog_unsigned_divide(t23, 64, t22, 64, t13, 32);
    xsi_vlogfile_write(1, 0, 0, ng21, 3, t0, (char)118, t4, 32, (char)118, t23, 64);
    goto LAB14;

}

static void Always_321_8(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;

LAB0:    t1 = (t0 + 9316U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(321, ng0);
    t2 = (t0 + 9920);
    *((int *)t2) = 1;
    t3 = (t0 + 9344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(321, ng0);

LAB5:    xsi_set_current_line(322, ng0);
    t4 = (t0 + 6904);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng23)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(322, ng0);

LAB13:    xsi_set_current_line(323, ng0);
    xsi_vlogfile_write(1, 0, 0, ng24, 1, t0);
    xsi_set_current_line(324, ng0);
    xsi_vlog_stop(1);
    goto LAB12;

}

static void Initial_334_9(char *t0)
{
    char t1[8];
    char t10[8];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(334, ng0);

LAB2:    xsi_set_current_line(335, ng0);
    *((int *)t1) = xsi_vlogfile_file_open_of_cname(ng25);
    t2 = (t1 + 4);
    *((int *)t2) = 0;
    t3 = (t0 + 6996);
    xsi_vlogvar_assign_value(t3, t1, 0, 0, 32);
    xsi_set_current_line(336, ng0);
    t2 = (t0 + 6996);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng26, 1, t0);
    xsi_set_current_line(337, ng0);
    t2 = (t0 + 6996);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 344);
    t6 = *((char **)t5);
    t5 = ((char*)((ng23)));
    t7 = ((char*)((ng6)));
    memset(t1, 0, 8);
    xsi_vlog_signed_minus(t1, 32, t5, 32, t7, 32);
    t8 = (t0 + 424);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_multiply(t10, 32, t1, 32, t9, 32);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng27, 3, t0, (char)119, t6, 32, (char)119, t10, 32);
    xsi_set_current_line(338, ng0);
    t2 = (t0 + 6996);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    xsi_vlogfile_fwrite(*((unsigned int *)t4), 1, 0, 0, ng28, 1, t0);

LAB1:    return;
}

static void Always_341_10(char *t0)
{
    char t9[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;

LAB0:    t1 = (t0 + 9604U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(341, ng0);
    t2 = (t0 + 9928);
    *((int *)t2) = 1;
    t3 = (t0 + 9632);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(341, ng0);

LAB5:    xsi_set_current_line(342, ng0);
    t4 = (t0 + 1984U);
    t5 = *((char **)t4);
    t4 = (t0 + 6904);
    t6 = (t4 + 36U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng6)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB6:    t11 = (t8 + 4);
    if (*((unsigned int *)t11) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t7) < *((unsigned int *)t8))
        goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;

LAB9:    t14 = *((unsigned int *)t5);
    t15 = *((unsigned int *)t9);
    t16 = (t14 & t15);
    *((unsigned int *)t13) = t16;
    t17 = (t5 + 4);
    t18 = (t9 + 4);
    t19 = (t13 + 4);
    t20 = *((unsigned int *)t17);
    t21 = *((unsigned int *)t18);
    t22 = (t20 | t21);
    *((unsigned int *)t19) = t22;
    t23 = *((unsigned int *)t19);
    t24 = (t23 != 0);
    if (t24 == 1)
        goto LAB11;

LAB12:
LAB13:    t45 = (t13 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t13);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB7:    t12 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB9;

LAB11:    t25 = *((unsigned int *)t13);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t13) = (t25 | t26);
    t27 = (t5 + 4);
    t28 = (t9 + 4);
    t29 = *((unsigned int *)t5);
    t30 = (~(t29));
    t31 = *((unsigned int *)t27);
    t32 = (~(t31));
    t33 = *((unsigned int *)t9);
    t34 = (~(t33));
    t35 = *((unsigned int *)t28);
    t36 = (~(t35));
    t37 = (t30 & t32);
    t38 = (t34 & t36);
    t39 = (~(t37));
    t40 = (~(t38));
    t41 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t41 & t39);
    t42 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t42 & t40);
    t43 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t43 & t39);
    t44 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t44 & t40);
    goto LAB13;

LAB14:    xsi_set_current_line(342, ng0);

LAB17:    xsi_set_current_line(343, ng0);
    t51 = (t0 + 6996);
    t52 = (t51 + 36U);
    t53 = *((char **)t52);
    t54 = (t0 + 2076U);
    t55 = *((char **)t54);
    t54 = (t0 + 2168U);
    t56 = *((char **)t54);
    t54 = (t0 + 2260U);
    t57 = *((char **)t54);
    xsi_vlogfile_fwrite(*((unsigned int *)t53), 1, 0, 0, ng29, 4, t0, (char)118, t55, 8, (char)118, t56, 8, (char)118, t57, 8);
    goto LAB16;

}


extern void work_m_00000000001997444715_2018136284_init()
{
	static char *pe[] = {(void *)Initial_51_0,(void *)Initial_173_1,(void *)Initial_182_2,(void *)NetDecl_253_3,(void *)NetDecl_255_4,(void *)NetDecl_258_5,(void *)Always_309_6,(void *)Always_314_7,(void *)Always_321_8,(void *)Initial_334_9,(void *)Always_341_10};
	static char *se[] = {(void *)sp_spi_byte,(void *)sp_spi_transmit};
	xsi_register_didat("work_m_00000000001997444715_2018136284", "isim/tb_fpga_isim_beh.exe.sim/work/m_00000000001997444715_2018136284.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
