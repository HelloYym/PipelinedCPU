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
static const char *ng0 = "C:/Arch/PipelinedCPU/displcd.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {255, 0};
static int ng10[] = {8, 0};
static int ng11[] = {127, 0};
static unsigned int ng12[] = {0U, 0U};
static unsigned int ng13[] = {64U, 0U};
static int ng14[] = {9, 0};
static int ng15[] = {10, 0};
static int ng16[] = {11, 0};
static int ng17[] = {12, 0};
static int ng18[] = {13, 0};
static int ng19[] = {14, 0};
static int ng20[] = {15, 0};



static void Always_31_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    char *t31;

LAB0:    t1 = (t0 + 4768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 5088);
    *((int *)t2) = 1;
    t3 = (t0 + 4800);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3688);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB14:    t5 = ((char*)((ng2)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 32);
    if (t30 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng7)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng8)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng17)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng18)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng19)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng20)));
    t30 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 32);
    if (t30 == 1)
        goto LAB45;

LAB46:
LAB48:
LAB47:    xsi_set_current_line(140, ng0);
    t2 = ((char*)((ng20)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB49:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(34, ng0);

LAB13:    xsi_set_current_line(35, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2568);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2728);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(37, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2888);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(39, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB12;

LAB15:    xsi_set_current_line(44, ng0);

LAB50:    xsi_set_current_line(45, ng0);
    t7 = ((char*)((ng1)));
    t8 = (t0 + 3368);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB17:    xsi_set_current_line(48, ng0);

LAB51:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB19:    xsi_set_current_line(52, ng0);

LAB52:    xsi_set_current_line(53, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2568);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB56;

LAB53:    if (t18 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t6) = 1;

LAB56:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB57;

LAB58:
LAB59:    goto LAB49;

LAB21:    xsi_set_current_line(60, ng0);

LAB61:    xsi_set_current_line(61, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB23:    xsi_set_current_line(64, ng0);

LAB62:    xsi_set_current_line(65, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB25:    xsi_set_current_line(68, ng0);

LAB63:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 2728);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB67;

LAB64:    if (t18 != 0)
        goto LAB66;

LAB65:    *((unsigned int *)t6) = 1;

LAB67:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB68;

LAB69:
LAB70:    goto LAB49;

LAB27:    xsi_set_current_line(76, ng0);

LAB72:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB29:    xsi_set_current_line(80, ng0);

LAB73:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 3848);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB31:    xsi_set_current_line(85, ng0);

LAB74:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 3848);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greater(t6, 32, t7, 32, t8, 32);
    t21 = (t6 + 4);
    t9 = *((unsigned int *)t21);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB75;

LAB76:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 3528);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);

LAB77:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3208);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2168U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB81;

LAB78:    if (t18 != 0)
        goto LAB80;

LAB79:    *((unsigned int *)t6) = 1;

LAB81:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB82;

LAB83:
LAB84:    goto LAB49;

LAB33:    xsi_set_current_line(98, ng0);

LAB86:    xsi_set_current_line(99, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng15)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB35:    xsi_set_current_line(102, ng0);

LAB87:    xsi_set_current_line(103, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB37:    xsi_set_current_line(106, ng0);

LAB88:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 1368U);
    t5 = *((char **)t3);
    t3 = (t0 + 1328U);
    t7 = (t3 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 3848);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng10)));
    xsi_vlog_get_indexed_partselect(t6, 8, t5, ((int*)(t8)), 2, t28, 32, 1, t29, 32, 1, 0);
    t31 = (t0 + 3528);
    xsi_vlogvar_assign_value(t31, t6, 0, 0, 8);
    xsi_set_current_line(108, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3048);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB92;

LAB89:    if (t18 != 0)
        goto LAB91;

LAB90:    *((unsigned int *)t6) = 1;

LAB92:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB93;

LAB94:
LAB95:    goto LAB49;

LAB39:    xsi_set_current_line(115, ng0);

LAB97:    xsi_set_current_line(116, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng18)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB41:    xsi_set_current_line(119, ng0);

LAB98:    xsi_set_current_line(120, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 3368);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(121, ng0);
    t2 = ((char*)((ng19)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB49;

LAB43:    xsi_set_current_line(123, ng0);

LAB99:    xsi_set_current_line(124, ng0);
    t3 = (t0 + 3848);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng10)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t7, 32, t8, 32);
    t21 = (t0 + 3848);
    xsi_vlogvar_assign_value(t21, t6, 0, 0, 32);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t5, 32, t7, 32);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB100;

LAB101:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 3848);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng11)));
    memset(t6, 0, 8);
    xsi_vlog_signed_equal(t6, 32, t5, 32, t7, 32);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t8);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB103;

LAB104:    xsi_set_current_line(130, ng0);
    t2 = ((char*)((ng16)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB105:
LAB102:    goto LAB49;

LAB45:    xsi_set_current_line(132, ng0);
    t3 = ((char*)((ng20)));
    t5 = (t0 + 3688);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 4);
    goto LAB49;

LAB55:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(55, ng0);

LAB60:    xsi_set_current_line(56, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 2568);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB59;

LAB66:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB67;

LAB68:    xsi_set_current_line(71, ng0);

LAB71:    xsi_set_current_line(72, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 2728);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB70;

LAB75:    xsi_set_current_line(87, ng0);
    t22 = ((char*)((ng12)));
    t28 = (t0 + 3528);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 8);
    goto LAB77;

LAB80:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB81;

LAB82:    xsi_set_current_line(93, ng0);

LAB85:    xsi_set_current_line(94, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 3208);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng14)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB84;

LAB91:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB92;

LAB93:    xsi_set_current_line(110, ng0);

LAB96:    xsi_set_current_line(111, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 3048);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 1);
    xsi_set_current_line(112, ng0);
    t2 = ((char*)((ng17)));
    t3 = (t0 + 3688);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    goto LAB95;

LAB100:    xsi_set_current_line(126, ng0);
    t21 = ((char*)((ng20)));
    t22 = (t0 + 3688);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    goto LAB102;

LAB103:    xsi_set_current_line(128, ng0);
    t21 = ((char*)((ng10)));
    t22 = (t0 + 3688);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    goto LAB105;

}


extern void work_m_00000000001587146704_0205589395_init()
{
	static char *pe[] = {(void *)Always_31_0};
	xsi_register_didat("work_m_00000000001587146704_0205589395", "isim/mips_top_isim_beh.exe.sim/work/m_00000000001587146704_0205589395.didat");
	xsi_register_executes(pe);
}
