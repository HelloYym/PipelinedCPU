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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Arch/SingleClockCPU/controller.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {8U, 0U};
static unsigned int ng4[] = {32U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {34U, 0U};
static unsigned int ng7[] = {36U, 0U};
static unsigned int ng8[] = {37U, 0U};
static unsigned int ng9[] = {42U, 0U};
static unsigned int ng10[] = {2U, 0U};
static unsigned int ng11[] = {3U, 0U};
static unsigned int ng12[] = {4U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {12U, 0U};
static unsigned int ng15[] = {13U, 0U};
static unsigned int ng16[] = {35U, 0U};
static unsigned int ng17[] = {43U, 0U};



static void Always_39_0(char *t0)
{
    char t6[8];
    char t14[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    int t13;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    int t25;
    char *t26;
    char *t27;

LAB0:    t1 = (t0 + 15064U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 15880);
    *((int *)t2) = 1;
    t3 = (t0 + 15096);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(39, ng0);

LAB5:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = (t0 + 11744);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 3);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1152);
    t3 = *((char **)t2);
    t2 = (t0 + 12384);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t2 = (t0 + 12544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 13664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 11344U);
    t3 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t4 = (t3 + 4);
    t7 = *((unsigned int *)t3);
    t8 = (t7 >> 26);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t4);
    t10 = (t9 >> 26);
    *((unsigned int *)t2) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 63U);
    t12 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t12 & 63U);

LAB6:    t5 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t5, 6);
    if (t13 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng10)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng11)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng12)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng13)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng14)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng15)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng16)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng17)));
    t13 = xsi_vlog_unsigned_case_compare(t6, 6, t2, 6);
    if (t13 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(161, ng0);

LAB63:    xsi_set_current_line(162, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(52, ng0);

LAB30:    xsi_set_current_line(53, ng0);
    t15 = (t0 + 11344U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t15 = (t14 + 4);
    t17 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 63U);
    t23 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t23 & 63U);

LAB31:    t24 = ((char*)((ng3)));
    t25 = xsi_vlog_unsigned_case_compare(t14, 6, t24, 6);
    if (t25 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t13 == 1)
        goto LAB34;

LAB35:    t2 = ((char*)((ng6)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t13 == 1)
        goto LAB36;

LAB37:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t13 == 1)
        goto LAB38;

LAB39:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t13 == 1)
        goto LAB40;

LAB41:    t2 = ((char*)((ng9)));
    t13 = xsi_vlog_unsigned_case_compare(t14, 6, t2, 6);
    if (t13 == 1)
        goto LAB42;

LAB43:
LAB45:
LAB44:    xsi_set_current_line(87, ng0);

LAB53:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13664);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB46:    goto LAB29;

LAB9:    xsi_set_current_line(92, ng0);

LAB54:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 608);
    t4 = *((char **)t3);
    t3 = (t0 + 11744);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    goto LAB29;

LAB11:    xsi_set_current_line(95, ng0);

LAB55:    xsi_set_current_line(96, ng0);
    t3 = (t0 + 608);
    t4 = *((char **)t3);
    t3 = (t0 + 11744);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 3);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1288);
    t3 = *((char **)t2);
    t2 = (t0 + 12384);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t2 = (t0 + 12544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 3056);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB13:    xsi_set_current_line(104, ng0);

LAB56:    xsi_set_current_line(105, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 11904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 12064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 11744);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 12384);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 12544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 12224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB15:    xsi_set_current_line(113, ng0);

LAB57:    xsi_set_current_line(114, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 11904);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(115, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 12064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t2 = (t0 + 11744);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t2 = (t0 + 12384);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1968);
    t3 = *((char **)t2);
    t2 = (t0 + 12544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(120, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 12224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB17:    xsi_set_current_line(122, ng0);

LAB58:    xsi_set_current_line(123, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 12224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 12544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(126, ng0);
    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB19:    xsi_set_current_line(130, ng0);

LAB59:    xsi_set_current_line(131, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 12224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 12544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 2512);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(136, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB21:    xsi_set_current_line(138, ng0);

LAB60:    xsi_set_current_line(139, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 12224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(140, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 12544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(142, ng0);
    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(144, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB23:    xsi_set_current_line(146, ng0);

LAB61:    xsi_set_current_line(147, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 12224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 12544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(150, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 12864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(151, ng0);
    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3328);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(153, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB25:    xsi_set_current_line(155, ng0);

LAB62:    xsi_set_current_line(156, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 12224);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t2 = (t0 + 12544);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(158, ng0);
    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t2 = (t0 + 12704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 4);
    xsi_set_current_line(159, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB29;

LAB32:    xsi_set_current_line(54, ng0);

LAB47:    xsi_set_current_line(55, ng0);
    t26 = (t0 + 744);
    t27 = *((char **)t26);
    t26 = (t0 + 11744);
    xsi_vlogvar_assign_value(t26, t27, 0, 0, 3);
    goto LAB46;

LAB34:    xsi_set_current_line(57, ng0);

LAB48:    xsi_set_current_line(58, ng0);
    t3 = (t0 + 2104);
    t4 = *((char **)t3);
    t3 = (t0 + 12704);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB36:    xsi_set_current_line(63, ng0);

LAB49:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 2240);
    t4 = *((char **)t3);
    t3 = (t0 + 12704);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB38:    xsi_set_current_line(69, ng0);

LAB50:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 2512);
    t4 = *((char **)t3);
    t3 = (t0 + 12704);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB40:    xsi_set_current_line(75, ng0);

LAB51:    xsi_set_current_line(76, ng0);
    t3 = (t0 + 2648);
    t4 = *((char **)t3);
    t3 = (t0 + 12704);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

LAB42:    xsi_set_current_line(81, ng0);

LAB52:    xsi_set_current_line(82, ng0);
    t3 = (t0 + 2376);
    t4 = *((char **)t3);
    t3 = (t0 + 12704);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 4);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t2 = (t0 + 13184);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3192);
    t3 = *((char **)t2);
    t2 = (t0 + 13344);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13504);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB46;

}

static void Always_171_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

LAB0:    t1 = (t0 + 15312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 15896);
    *((int *)t2) = 1;
    t3 = (t0 + 15344);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(171, ng0);

LAB5:    xsi_set_current_line(172, ng0);
    t4 = (t0 + 11184U);
    t5 = *((char **)t4);
    t4 = (t0 + 14144);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 1, 0LL);
    goto LAB2;

}

static void Always_176_2(char *t0)
{
    char t11[8];
    char t15[8];
    char t16[8];
    char t37[8];
    char t51[8];
    char t58[8];
    char t107[8];
    char t115[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
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
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    char *t63;
    char *t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    char *t96;
    char *t97;
    char *t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    char *t119;
    char *t120;
    char *t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    char *t129;
    char *t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    int t139;
    int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    unsigned int t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    char *t153;
    char *t154;

LAB0:    t1 = (t0 + 15560U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(176, ng0);
    t2 = (t0 + 15912);
    *((int *)t2) = 1;
    t3 = (t0 + 15592);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(176, ng0);

LAB5:    xsi_set_current_line(177, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 13824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(178, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 13984);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(179, ng0);
    t2 = (t0 + 10864U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 11024U);
    t3 = *((char **)t2);
    memset(t11, 0, 8);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t2) != 0)
        goto LAB12;

LAB13:    t5 = (t11 + 4);
    t12 = *((unsigned int *)t11);
    t13 = *((unsigned int *)t5);
    t14 = (t12 || t13);
    if (t14 > 0)
        goto LAB14;

LAB15:    memcpy(t115, t11, 8);

LAB16:    t147 = (t115 + 4);
    t148 = *((unsigned int *)t147);
    t149 = (~(t148));
    t150 = *((unsigned int *)t115);
    t151 = (t150 & t149);
    t152 = (t151 != 0);
    if (t152 > 0)
        goto LAB50;

LAB51:
LAB52:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(179, ng0);

LAB9:    xsi_set_current_line(180, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 13824);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    goto LAB8;

LAB10:    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB12:    t4 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB13;

LAB14:    t17 = (t0 + 14144);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t16, 0, 8);
    t20 = (t19 + 4);
    t21 = *((unsigned int *)t20);
    t22 = (~(t21));
    t23 = *((unsigned int *)t19);
    t24 = (t23 & t22);
    t25 = (t24 & 1U);
    if (t25 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t20) == 0)
        goto LAB17;

LAB19:    t26 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t26) = 1;

LAB20:    t27 = (t16 + 4);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t19);
    t30 = (~(t29));
    *((unsigned int *)t16) = t30;
    *((unsigned int *)t27) = 0;
    if (*((unsigned int *)t28) != 0)
        goto LAB22;

LAB21:    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & 1U);
    t36 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t36 & 1U);
    memset(t37, 0, 8);
    t38 = (t16 + 4);
    t39 = *((unsigned int *)t38);
    t40 = (~(t39));
    t41 = *((unsigned int *)t16);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t38) != 0)
        goto LAB25;

LAB26:    t45 = (t37 + 4);
    t46 = *((unsigned int *)t37);
    t47 = *((unsigned int *)t45);
    t48 = (t46 || t47);
    if (t48 > 0)
        goto LAB27;

LAB28:    memcpy(t58, t37, 8);

LAB29:    memset(t15, 0, 8);
    t90 = (t58 + 4);
    t91 = *((unsigned int *)t90);
    t92 = (~(t91));
    t93 = *((unsigned int *)t58);
    t94 = (t93 & t92);
    t95 = (t94 & 1U);
    if (t95 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t90) == 0)
        goto LAB37;

LAB39:    t96 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t96) = 1;

LAB40:    t97 = (t15 + 4);
    t98 = (t58 + 4);
    t99 = *((unsigned int *)t58);
    t100 = (~(t99));
    *((unsigned int *)t15) = t100;
    *((unsigned int *)t97) = 0;
    if (*((unsigned int *)t98) != 0)
        goto LAB42;

LAB41:    t105 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t105 & 1U);
    t106 = *((unsigned int *)t97);
    *((unsigned int *)t97) = (t106 & 1U);
    memset(t107, 0, 8);
    t108 = (t15 + 4);
    t109 = *((unsigned int *)t108);
    t110 = (~(t109));
    t111 = *((unsigned int *)t15);
    t112 = (t111 & t110);
    t113 = (t112 & 1U);
    if (t113 != 0)
        goto LAB43;

LAB44:    if (*((unsigned int *)t108) != 0)
        goto LAB45;

LAB46:    t116 = *((unsigned int *)t11);
    t117 = *((unsigned int *)t107);
    t118 = (t116 & t117);
    *((unsigned int *)t115) = t118;
    t119 = (t11 + 4);
    t120 = (t107 + 4);
    t121 = (t115 + 4);
    t122 = *((unsigned int *)t119);
    t123 = *((unsigned int *)t120);
    t124 = (t122 | t123);
    *((unsigned int *)t121) = t124;
    t125 = *((unsigned int *)t121);
    t126 = (t125 != 0);
    if (t126 == 1)
        goto LAB47;

LAB48:
LAB49:    goto LAB16;

LAB17:    *((unsigned int *)t16) = 1;
    goto LAB20;

LAB22:    t31 = *((unsigned int *)t16);
    t32 = *((unsigned int *)t28);
    *((unsigned int *)t16) = (t31 | t32);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t28);
    *((unsigned int *)t27) = (t33 | t34);
    goto LAB21;

LAB23:    *((unsigned int *)t37) = 1;
    goto LAB26;

LAB25:    t44 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB26;

LAB27:    t49 = (t0 + 11184U);
    t50 = *((char **)t49);
    memset(t51, 0, 8);
    t49 = (t50 + 4);
    t52 = *((unsigned int *)t49);
    t53 = (~(t52));
    t54 = *((unsigned int *)t50);
    t55 = (t54 & t53);
    t56 = (t55 & 1U);
    if (t56 != 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t49) != 0)
        goto LAB32;

LAB33:    t59 = *((unsigned int *)t37);
    t60 = *((unsigned int *)t51);
    t61 = (t59 & t60);
    *((unsigned int *)t58) = t61;
    t62 = (t37 + 4);
    t63 = (t51 + 4);
    t64 = (t58 + 4);
    t65 = *((unsigned int *)t62);
    t66 = *((unsigned int *)t63);
    t67 = (t65 | t66);
    *((unsigned int *)t64) = t67;
    t68 = *((unsigned int *)t64);
    t69 = (t68 != 0);
    if (t69 == 1)
        goto LAB34;

LAB35:
LAB36:    goto LAB29;

LAB30:    *((unsigned int *)t51) = 1;
    goto LAB33;

LAB32:    t57 = (t51 + 4);
    *((unsigned int *)t51) = 1;
    *((unsigned int *)t57) = 1;
    goto LAB33;

LAB34:    t70 = *((unsigned int *)t58);
    t71 = *((unsigned int *)t64);
    *((unsigned int *)t58) = (t70 | t71);
    t72 = (t37 + 4);
    t73 = (t51 + 4);
    t74 = *((unsigned int *)t37);
    t75 = (~(t74));
    t76 = *((unsigned int *)t72);
    t77 = (~(t76));
    t78 = *((unsigned int *)t51);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (~(t80));
    t82 = (t75 & t77);
    t83 = (t79 & t81);
    t84 = (~(t82));
    t85 = (~(t83));
    t86 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t86 & t84);
    t87 = *((unsigned int *)t64);
    *((unsigned int *)t64) = (t87 & t85);
    t88 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t88 & t84);
    t89 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t89 & t85);
    goto LAB36;

LAB37:    *((unsigned int *)t15) = 1;
    goto LAB40;

LAB42:    t101 = *((unsigned int *)t15);
    t102 = *((unsigned int *)t98);
    *((unsigned int *)t15) = (t101 | t102);
    t103 = *((unsigned int *)t97);
    t104 = *((unsigned int *)t98);
    *((unsigned int *)t97) = (t103 | t104);
    goto LAB41;

LAB43:    *((unsigned int *)t107) = 1;
    goto LAB46;

LAB45:    t114 = (t107 + 4);
    *((unsigned int *)t107) = 1;
    *((unsigned int *)t114) = 1;
    goto LAB46;

LAB47:    t127 = *((unsigned int *)t115);
    t128 = *((unsigned int *)t121);
    *((unsigned int *)t115) = (t127 | t128);
    t129 = (t11 + 4);
    t130 = (t107 + 4);
    t131 = *((unsigned int *)t11);
    t132 = (~(t131));
    t133 = *((unsigned int *)t129);
    t134 = (~(t133));
    t135 = *((unsigned int *)t107);
    t136 = (~(t135));
    t137 = *((unsigned int *)t130);
    t138 = (~(t137));
    t139 = (t132 & t134);
    t140 = (t136 & t138);
    t141 = (~(t139));
    t142 = (~(t140));
    t143 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t143 & t141);
    t144 = *((unsigned int *)t121);
    *((unsigned int *)t121) = (t144 & t142);
    t145 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t145 & t141);
    t146 = *((unsigned int *)t115);
    *((unsigned int *)t115) = (t146 & t142);
    goto LAB49;

LAB50:    xsi_set_current_line(184, ng0);

LAB53:    xsi_set_current_line(185, ng0);
    t153 = ((char*)((ng1)));
    t154 = (t0 + 13984);
    xsi_vlogvar_assign_value(t154, t153, 0, 0, 1);
    goto LAB52;

}


extern void work_m_00000000000246826878_3092946469_init()
{
	static char *pe[] = {(void *)Always_39_0,(void *)Always_171_1,(void *)Always_176_2};
	xsi_register_didat("work_m_00000000000246826878_3092946469", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000000246826878_3092946469.didat");
	xsi_register_executes(pe);
}
