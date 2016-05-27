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
static const char *ng0 = "//Mac/Home/Arch/Exp 7. Pipelined CPU Acessing Mem in Multiple Cycle/datapath.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};
static int ng6[] = {5, 0};
static int ng7[] = {6, 0};
static int ng8[] = {7, 0};
static int ng9[] = {8, 0};
static unsigned int ng10[] = {0U, 0U};
static int ng11[] = {9, 0};
static int ng12[] = {10, 0};
static int ng13[] = {11, 0};
static int ng14[] = {12, 0};
static int ng15[] = {13, 0};
static int ng16[] = {14, 0};
static int ng17[] = {15, 0};
static int ng18[] = {16, 0};
static int ng19[] = {17, 0};
static int ng20[] = {18, 0};
static int ng21[] = {19, 0};
static int ng22[] = {20, 0};
static int ng23[] = {21, 0};
static int ng24[] = {22, 0};
static int ng25[] = {23, 0};
static unsigned int ng26[] = {4294967295U, 0U};
static unsigned int ng27[] = {4U, 0U};



static void Always_143_0(char *t0)
{
    char t4[8];
    char t20[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 32376U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(143, ng0);
    t2 = (t0 + 38896);
    *((int *)t2) = 1;
    t3 = (t0 + 32408);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(143, ng0);

LAB5:    xsi_set_current_line(144, ng0);
    t5 = (t0 + 15216U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t4 + 4);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 0);
    *((unsigned int *)t4) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t12 & 31U);
    t13 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t13 & 31U);

LAB6:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t14, 32);
    if (t15 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng6)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng9)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng11)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng12)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng13)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng14)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng15)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng16)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng17)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng18)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng19)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng20)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng21)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng22)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng23)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng24)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng25)));
    t15 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t15 == 1)
        goto LAB53;

LAB54:
LAB56:
LAB55:    xsi_set_current_line(169, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);

LAB57:    goto LAB2;

LAB7:    xsi_set_current_line(145, ng0);
    t16 = (t0 + 24736);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t19, t18, 0, 0, 32, 0LL);
    goto LAB57;

LAB9:    xsi_set_current_line(146, ng0);
    t3 = (t0 + 19056U);
    t5 = *((char **)t3);
    t3 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB11:    xsi_set_current_line(147, ng0);
    t3 = (t0 + 27296);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB13:    xsi_set_current_line(148, ng0);
    t3 = (t0 + 23136);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB15:    xsi_set_current_line(149, ng0);
    t3 = (t0 + 28096);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB17:    xsi_set_current_line(150, ng0);
    t3 = (t0 + 28416);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB19:    xsi_set_current_line(151, ng0);
    t3 = (t0 + 29696);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB21:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 29856);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB23:    xsi_set_current_line(153, ng0);
    t3 = (t0 + 21456U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t3, 27, t5, 5);
    t6 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t6, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB25:    xsi_set_current_line(154, ng0);
    t3 = (t0 + 21936U);
    t5 = *((char **)t3);
    t3 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB27:    xsi_set_current_line(155, ng0);
    t3 = (t0 + 21616U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t3, 27, t5, 5);
    t6 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t6, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB29:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 22096U);
    t5 = *((char **)t3);
    t3 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB31:    xsi_set_current_line(157, ng0);
    t3 = (t0 + 22256U);
    t5 = *((char **)t3);
    t3 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB33:    xsi_set_current_line(158, ng0);
    t3 = (t0 + 29216);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB35:    xsi_set_current_line(159, ng0);
    t3 = (t0 + 29376);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

LAB37:    xsi_set_current_line(160, ng0);
    t3 = (t0 + 22576U);
    t5 = *((char **)t3);
    t3 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB39:    xsi_set_current_line(161, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    goto LAB57;

LAB41:    xsi_set_current_line(162, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t5, t3, 0, 0, 32, 0LL);
    goto LAB57;

LAB43:    xsi_set_current_line(163, ng0);
    t3 = (t0 + 20336U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng10)));
    t6 = (t0 + 20176U);
    t7 = *((char **)t6);
    t6 = ((char*)((ng10)));
    t14 = (t0 + 24576);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 6U, t18, 19, t17, 1, t6, 7, t7, 1, t3, 3, t5, 1);
    t19 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t19, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB45:    xsi_set_current_line(164, ng0);
    t3 = (t0 + 20496U);
    t5 = *((char **)t3);
    t3 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB47:    xsi_set_current_line(165, ng0);
    t3 = (t0 + 20816U);
    t5 = *((char **)t3);
    t3 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB49:    xsi_set_current_line(166, ng0);
    t3 = (t0 + 20656U);
    t5 = *((char **)t3);
    t3 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t3, t5, 0, 0, 32, 0LL);
    goto LAB57;

LAB51:    xsi_set_current_line(167, ng0);
    t3 = (t0 + 31136);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng10)));
    xsi_vlogtype_concat(t20, 32, 32, 2U, t7, 27, t6, 5);
    t14 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t14, t20, 0, 0, 32, 0LL);
    goto LAB57;

LAB53:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 31296);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31456);
    xsi_vlogvar_wait_assign_value(t7, t6, 0, 0, 32, 0LL);
    goto LAB57;

}

static void Cont_173_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;

LAB0:    t1 = (t0 + 32624U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 15216U);
    t5 = *((char **)t2);
    memset(t6, 0, 8);
    t2 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 5);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 5);
    t13 = (t12 & 1);
    *((unsigned int *)t2) = t13;
    memset(t4, 0, 8);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t14);
    t16 = (~(t15));
    t17 = *((unsigned int *)t6);
    t18 = (t17 & t16);
    t19 = (t18 & 1U);
    if (t19 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t14) != 0)
        goto LAB6;

LAB7:    t21 = (t4 + 4);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t21);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB8;

LAB9:    t28 = *((unsigned int *)t4);
    t29 = (~(t28));
    t30 = *((unsigned int *)t21);
    t31 = (t29 || t30);
    if (t31 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t21) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t33, 8);

LAB16:    t32 = (t0 + 39376);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memcpy(t37, t3, 8);
    xsi_driver_vfirst_trans(t32, 0, 31);
    t38 = (t0 + 38912);
    *((int *)t38) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t20 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t20) = 1;
    goto LAB7;

LAB8:    t25 = (t0 + 31456);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    goto LAB9;

LAB10:    t32 = (t0 + 22736U);
    t33 = *((char **)t32);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t27, 32, t33, 32);
    goto LAB16;

LAB14:    memcpy(t3, t27, 8);
    goto LAB16;

}

static void Cont_181_2(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 32872U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(182, ng0);
    t2 = (t0 + 24736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 39440);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t6, 8);
    xsi_driver_vfirst_trans(t7, 0, 31);
    t12 = (t0 + 38928);
    *((int *)t12) = 1;

LAB1:    return;
}

static void Always_184_3(char *t0)
{
    char t4[8];
    char t25[8];
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
    char *t14;
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
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;

LAB0:    t1 = (t0 + 33120U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(184, ng0);
    t2 = (t0 + 38944);
    *((int *)t2) = 1;
    t3 = (t0 + 33152);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(184, ng0);

LAB5:    xsi_set_current_line(185, ng0);
    t5 = (t0 + 18736U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = (t6 + 4);
    t15 = *((unsigned int *)t6);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB11;

LAB10:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 18896U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t4);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t23 = (t4 + 4);
    t29 = (t24 + 4);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB12;

LAB13:
LAB14:    t56 = (t0 + 24416);
    xsi_vlogvar_assign_value(t56, t25, 0, 0, 1);
    xsi_set_current_line(186, ng0);
    t2 = (t0 + 18736U);
    t3 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB18;

LAB16:    if (*((unsigned int *)t2) == 0)
        goto LAB15;

LAB17:    t5 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t5) = 1;

LAB18:    t6 = (t4 + 4);
    t12 = (t3 + 4);
    t15 = *((unsigned int *)t3);
    t16 = (~(t15));
    *((unsigned int *)t4) = t16;
    *((unsigned int *)t6) = 0;
    if (*((unsigned int *)t12) != 0)
        goto LAB20;

LAB19:    t21 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t21 & 1U);
    t22 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t22 & 1U);
    t13 = (t0 + 24576);
    xsi_vlogvar_assign_value(t13, t4, 0, 0, 1);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB11:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB10;

LAB12:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t36 | t37);
    t38 = (t4 + 4);
    t39 = (t24 + 4);
    t40 = *((unsigned int *)t4);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t54 & t50);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    goto LAB14;

LAB15:    *((unsigned int *)t4) = 1;
    goto LAB18;

LAB20:    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t12);
    *((unsigned int *)t4) = (t17 | t18);
    t19 = *((unsigned int *)t6);
    t20 = *((unsigned int *)t12);
    *((unsigned int *)t6) = (t19 | t20);
    goto LAB19;

}

static void Always_190_4(char *t0)
{
    char t14[8];
    char t15[8];
    char t19[8];
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
    char *t11;
    char *t12;
    int t13;
    char *t16;
    char *t17;
    unsigned int t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;

LAB0:    t1 = (t0 + 33368U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(190, ng0);
    t2 = (t0 + 38960);
    *((int *)t2) = 1;
    t3 = (t0 + 33400);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(190, ng0);

LAB5:    xsi_set_current_line(191, ng0);
    t4 = (t0 + 18736U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(194, ng0);
    t2 = (t0 + 17776U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(197, ng0);
    t2 = (t0 + 18896U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(191, ng0);

LAB9:    xsi_set_current_line(192, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 24736);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(194, ng0);

LAB13:    xsi_set_current_line(195, ng0);
    t4 = (t0 + 17936U);
    t5 = *((char **)t4);
    t4 = (t0 + 24736);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 32, 0LL);
    goto LAB12;

LAB14:    xsi_set_current_line(197, ng0);

LAB17:    xsi_set_current_line(198, ng0);
    t4 = (t0 + 15536U);
    t5 = *((char **)t4);

LAB18:    t4 = (t0 + 1288);
    t11 = *((char **)t4);
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t11, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 1424);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 1560);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t13 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1696);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = (t0 + 1832);
    t3 = *((char **)t2);
    t13 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 32);
    if (t13 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB16;

LAB19:    xsi_set_current_line(199, ng0);
    t4 = (t0 + 21296U);
    t12 = *((char **)t4);
    t4 = (t0 + 24736);
    xsi_vlogvar_wait_assign_value(t4, t12, 0, 0, 32, 0LL);
    goto LAB29;

LAB21:    xsi_set_current_line(200, ng0);
    t2 = ((char*)((ng10)));
    t4 = (t0 + 23136);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t12 + 4);
    t6 = *((unsigned int *)t12);
    t7 = (t6 >> 0);
    *((unsigned int *)t15) = t7;
    t8 = *((unsigned int *)t17);
    t9 = (t8 >> 0);
    *((unsigned int *)t16) = t9;
    t10 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t10 & 67108863U);
    t18 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t18 & 67108863U);
    t20 = (t0 + 27296);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memset(t19, 0, 8);
    t23 = (t19 + 4);
    t24 = (t22 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 28);
    *((unsigned int *)t19) = t26;
    t27 = *((unsigned int *)t24);
    t28 = (t27 >> 28);
    *((unsigned int *)t23) = t28;
    t29 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t29 & 15U);
    t30 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t30 & 15U);
    xsi_vlogtype_concat(t14, 32, 32, 3U, t19, 4, t15, 26, t2, 2);
    t31 = (t0 + 24736);
    xsi_vlogvar_wait_assign_value(t31, t14, 0, 0, 32, 0LL);
    goto LAB29;

LAB23:    xsi_set_current_line(201, ng0);
    t2 = (t0 + 27776);
    t4 = (t2 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 24736);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    goto LAB29;

LAB25:    xsi_set_current_line(202, ng0);
    t2 = (t0 + 22416U);
    t4 = *((char **)t2);
    t2 = (t0 + 24736);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    goto LAB29;

LAB27:    xsi_set_current_line(203, ng0);
    t2 = (t0 + 22416U);
    t4 = *((char **)t2);
    t2 = (t0 + 24736);
    xsi_vlogvar_wait_assign_value(t2, t4, 0, 0, 32, 0LL);
    goto LAB29;

}

static void Cont_211_5(char *t0)
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
    char *t16;

LAB0:    t1 = (t0 + 33616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(211, ng0);
    t2 = (t0 + 21776U);
    t3 = *((char **)t2);
    t2 = (t0 + 39504);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 31U;
    t9 = t8;
    t10 = (t3 + 4);
    t11 = *((unsigned int *)t3);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t2, 0, 4);
    t16 = (t0 + 38976);
    *((int *)t16) = 1;

LAB1:    return;
}

static void Cont_212_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 33864U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(212, ng0);
    t2 = (t0 + 27936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 39568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 38992);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_215_7(char *t0)
{
    char t3[8];
    char t4[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
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
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;

LAB0:    t1 = (t0 + 34112U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(215, ng0);
    t2 = (t0 + 15536U);
    t5 = *((char **)t2);
    t2 = (t0 + 1288);
    t6 = *((char **)t2);
    memset(t7, 0, 8);
    t2 = (t5 + 4);
    t8 = (t6 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t6);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t2);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t2);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t7) = 1;

LAB7:    memset(t4, 0, 8);
    t22 = (t7 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t7);
    t26 = (t25 & t24);
    t27 = (t26 & 1U);
    if (t27 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t22) != 0)
        goto LAB10;

LAB11:    t29 = (t4 + 4);
    t30 = *((unsigned int *)t4);
    t31 = *((unsigned int *)t29);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB12;

LAB13:    t36 = *((unsigned int *)t4);
    t37 = (~(t36));
    t38 = *((unsigned int *)t29);
    t39 = (t37 || t38);
    if (t39 > 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t29) > 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t4) > 0)
        goto LAB18;

LAB19:    memcpy(t3, t42, 8);

LAB20:    t43 = (t0 + 39632);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = (t45 + 56U);
    t47 = *((char **)t46);
    memcpy(t47, t3, 8);
    xsi_driver_vfirst_trans(t43, 0, 31);
    t48 = (t0 + 39008);
    *((int *)t48) = 1;

LAB1:    return;
LAB6:    t21 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t4) = 1;
    goto LAB11;

LAB10:    t28 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB11;

LAB12:    t33 = (t0 + 24736);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    goto LAB13;

LAB14:    t40 = (t0 + 27296);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    goto LAB15;

LAB16:    xsi_vlog_unsigned_bit_combine(t3, 32, t35, 32, t42, 32);
    goto LAB20;

LAB18:    memcpy(t3, t35, 8);
    goto LAB20;

}

static void Always_220_8(char *t0)
{
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 34360U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(220, ng0);
    t2 = (t0 + 39024);
    *((int *)t2) = 1;
    t3 = (t0 + 34392);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(220, ng0);

LAB5:    xsi_set_current_line(221, ng0);
    t4 = (t0 + 19216U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(227, ng0);
    t2 = (t0 + 19376U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(221, ng0);

LAB9:    xsi_set_current_line(222, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 24896);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(223, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 27296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(224, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(225, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 27456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(227, ng0);

LAB13:    xsi_set_current_line(228, ng0);
    t4 = (t0 + 24416);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 24896);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(229, ng0);
    t2 = (t0 + 24736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 27296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(230, ng0);
    t2 = (t0 + 19056U);
    t3 = *((char **)t2);
    t2 = (t0 + 23136);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(231, ng0);
    t2 = (t0 + 21296U);
    t3 = *((char **)t2);
    t2 = (t0 + 27456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_236_9(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
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
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;

LAB0:    t1 = (t0 + 34608U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(236, ng0);
    t2 = (t0 + 39040);
    *((int *)t2) = 1;
    t3 = (t0 + 34640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(236, ng0);

LAB5:    xsi_set_current_line(237, ng0);
    t4 = (t0 + 27776);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 27936);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    t11 = (t6 + 4);
    t12 = (t9 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t11);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t10) = 1;

LAB9:    t26 = (t0 + 24256);
    xsi_vlogvar_wait_assign_value(t26, t10, 0, 0, 1, 0LL);
    goto LAB2;

LAB8:    t25 = (t10 + 4);
    *((unsigned int *)t10) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

}

static void Cont_240_10(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 34856U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 23136);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 21);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 21);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = (t0 + 39696);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 31U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 4);
    t27 = (t0 + 39056);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_240_11(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 35104U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(241, ng0);
    t2 = (t0 + 23136);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 16);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 16);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = (t0 + 39760);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 31U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 4);
    t27 = (t0 + 39072);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_240_12(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 35352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(242, ng0);
    t2 = (t0 + 23136);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t3 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 11);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 11);
    *((unsigned int *)t6) = t11;
    t12 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t12 & 31U);
    t13 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t13 & 31U);
    t14 = (t0 + 39824);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t18, 0, 8);
    t19 = 31U;
    t20 = t19;
    t21 = (t3 + 4);
    t22 = *((unsigned int *)t3);
    t19 = (t19 & t22);
    t23 = *((unsigned int *)t21);
    t20 = (t20 & t23);
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t25 | t19);
    t26 = *((unsigned int *)t24);
    *((unsigned int *)t24) = (t26 | t20);
    xsi_driver_vfirst_trans(t14, 0, 4);
    t27 = (t0 + 39088);
    *((int *)t27) = 1;

LAB1:    return;
}

static void Cont_240_13(char *t0)
{
    char t3[8];
    char t4[8];
    char t16[8];
    char t17[8];
    char t29[8];
    char t34[8];
    char t47[8];
    char t48[8];
    char *t1;
    char *t2;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    char *t66;

LAB0:    t1 = (t0 + 35600U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(243, ng0);
    t2 = (t0 + 15696U);
    t5 = *((char **)t2);
    memset(t4, 0, 8);
    t2 = (t5 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t2) != 0)
        goto LAB6;

LAB7:    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t12);
    t15 = (t13 || t14);
    if (t15 > 0)
        goto LAB8;

LAB9:    t43 = *((unsigned int *)t4);
    t44 = (~(t43));
    t45 = *((unsigned int *)t12);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t12) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t47, 8);

LAB16:    t61 = (t0 + 39888);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    t64 = (t63 + 56U);
    t65 = *((char **)t64);
    memcpy(t65, t3, 8);
    xsi_driver_vfirst_trans(t61, 0, 31);
    t66 = (t0 + 39104);
    *((int *)t66) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t11 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 23136);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t17) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 0);
    *((unsigned int *)t21) = t26;
    t27 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t27 & 65535U);
    t28 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t28 & 65535U);
    t30 = ((char*)((ng18)));
    t31 = (t0 + 23136);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    memset(t34, 0, 8);
    t35 = (t34 + 4);
    t36 = (t33 + 4);
    t37 = *((unsigned int *)t33);
    t38 = (t37 >> 15);
    t39 = (t38 & 1);
    *((unsigned int *)t34) = t39;
    t40 = *((unsigned int *)t36);
    t41 = (t40 >> 15);
    t42 = (t41 & 1);
    *((unsigned int *)t35) = t42;
    xsi_vlog_mul_concat(t29, 16, 1, t30, 1U, t34, 1);
    xsi_vlogtype_concat(t16, 32, 32, 2U, t29, 16, t17, 16);
    goto LAB9;

LAB10:    t49 = (t0 + 23136);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    memset(t48, 0, 8);
    t52 = (t48 + 4);
    t53 = (t51 + 4);
    t54 = *((unsigned int *)t51);
    t55 = (t54 >> 0);
    *((unsigned int *)t48) = t55;
    t56 = *((unsigned int *)t53);
    t57 = (t56 >> 0);
    *((unsigned int *)t52) = t57;
    t58 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t58 & 65535U);
    t59 = *((unsigned int *)t52);
    *((unsigned int *)t52) = (t59 & 65535U);
    t60 = ((char*)((ng10)));
    xsi_vlogtype_concat(t47, 32, 32, 2U, t60, 16, t48, 16);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t16, 32, t47, 32);
    goto LAB16;

LAB14:    memcpy(t3, t16, 8);
    goto LAB16;

}

static void Cont_248_14(char *t0)
{
    char t5[8];
    char t7[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 35848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(248, ng0);
    t2 = (t0 + 27456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng10)));
    t8 = (t0 + 22256U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t8 = (t7 + 4);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t7) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t15 & 1073741823U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 1073741823U);
    xsi_vlogtype_concat(t5, 32, 32, 2U, t7, 30, t6, 2);
    memset(t17, 0, 8);
    xsi_vlog_unsigned_add(t17, 32, t4, 32, t5, 32);
    t18 = (t0 + 39952);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t17, 8);
    xsi_driver_vfirst_trans(t18, 0, 31);
    t23 = (t0 + 39120);
    *((int *)t23) = 1;

LAB1:    return;
}

static void Always_251_15(char *t0)
{
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
    char *t11;
    char *t12;
    int t13;
    char *t14;

LAB0:    t1 = (t0 + 36096U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(251, ng0);
    t2 = (t0 + 39136);
    *((int *)t2) = 1;
    t3 = (t0 + 36128);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(251, ng0);

LAB5:    xsi_set_current_line(252, ng0);
    t4 = (t0 + 19216U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(256, ng0);
    t2 = (t0 + 19376U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(252, ng0);

LAB9:    xsi_set_current_line(253, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 27776);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 32, 0LL);
    xsi_set_current_line(254, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 27936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(256, ng0);

LAB13:    xsi_set_current_line(257, ng0);
    t4 = (t0 + 16176U);
    t5 = *((char **)t4);

LAB14:    t4 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 32);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 32);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(263, ng0);
    t2 = (t0 + 16336U);
    t3 = *((char **)t2);

LAB24:    t2 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t13 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t13 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t13 == 1)
        goto LAB29;

LAB30:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 2, t2, 32);
    if (t13 == 1)
        goto LAB31;

LAB32:
LAB33:    goto LAB12;

LAB15:    xsi_set_current_line(258, ng0);
    t11 = (t0 + 22576U);
    t12 = *((char **)t11);
    t11 = (t0 + 27776);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 32);
    goto LAB23;

LAB17:    xsi_set_current_line(259, ng0);
    t3 = (t0 + 30336);
    t4 = (t3 + 56U);
    t11 = *((char **)t4);
    t12 = (t0 + 27776);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB23;

LAB19:    xsi_set_current_line(260, ng0);
    t3 = (t0 + 20816U);
    t4 = *((char **)t3);
    t3 = (t0 + 27776);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB23;

LAB21:    xsi_set_current_line(261, ng0);
    t3 = (t0 + 21936U);
    t4 = *((char **)t3);
    t3 = (t0 + 27776);
    xsi_vlogvar_assign_value(t3, t4, 0, 0, 32);
    goto LAB23;

LAB25:    xsi_set_current_line(264, ng0);
    t4 = (t0 + 22576U);
    t11 = *((char **)t4);
    t4 = (t0 + 27936);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB33;

LAB27:    xsi_set_current_line(265, ng0);
    t4 = (t0 + 30336);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t14 = (t0 + 27936);
    xsi_vlogvar_assign_value(t14, t12, 0, 0, 32);
    goto LAB33;

LAB29:    xsi_set_current_line(266, ng0);
    t4 = (t0 + 20816U);
    t11 = *((char **)t4);
    t4 = (t0 + 27936);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB33;

LAB31:    xsi_set_current_line(267, ng0);
    t4 = (t0 + 22096U);
    t11 = *((char **)t4);
    t4 = (t0 + 27936);
    xsi_vlogvar_assign_value(t4, t11, 0, 0, 32);
    goto LAB33;

}

static void Always_273_16(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    int t17;

LAB0:    t1 = (t0 + 36344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(273, ng0);
    t2 = (t0 + 39152);
    *((int *)t2) = 1;
    t3 = (t0 + 36376);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(273, ng0);

LAB5:    xsi_set_current_line(274, ng0);
    t5 = (t0 + 23136);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t4, 0, 8);
    t8 = (t4 + 4);
    t9 = (t7 + 4);
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 11);
    *((unsigned int *)t4) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 >> 11);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t14 & 31U);
    t15 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t15 & 31U);
    t16 = (t0 + 27616);
    xsi_vlogvar_assign_value(t16, t4, 0, 0, 5);
    xsi_set_current_line(275, ng0);
    t2 = (t0 + 17296U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 4416);
    t5 = *((char **)t2);
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 32);
    if (t17 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 4552);
    t5 = *((char **)t2);
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 32);
    if (t17 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 4688);
    t5 = *((char **)t2);
    t17 = xsi_vlog_unsigned_case_compare(t3, 2, t5, 32);
    if (t17 == 1)
        goto LAB11;

LAB12:
LAB13:    goto LAB2;

LAB7:    xsi_set_current_line(276, ng0);
    t2 = (t0 + 21776U);
    t6 = *((char **)t2);
    t2 = (t0 + 27616);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);
    goto LAB13;

LAB9:    xsi_set_current_line(277, ng0);
    t2 = (t0 + 21616U);
    t6 = *((char **)t2);
    t2 = (t0 + 27616);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);
    goto LAB13;

LAB11:    xsi_set_current_line(278, ng0);
    t2 = (t0 + 14344);
    t6 = *((char **)t2);
    t2 = (t0 + 27616);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 5);
    goto LAB13;

}

static void Always_299_17(char *t0)
{
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 36592U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(299, ng0);
    t2 = (t0 + 39168);
    *((int *)t2) = 1;
    t3 = (t0 + 36624);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(299, ng0);

LAB5:    xsi_set_current_line(300, ng0);
    t4 = (t0 + 19536U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(323, ng0);
    t2 = (t0 + 19696U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(300, ng0);

LAB9:    xsi_set_current_line(301, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 25056);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(302, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 28096);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(303, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 28416);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(304, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 28256);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(305, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23296);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(306, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 25536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(307, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 25696);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(308, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 28576);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(309, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 28736);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(310, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 28896);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(311, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(312, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23936);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(314, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(315, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23456);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(317, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(318, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 29536);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(319, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 27136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(320, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 29056);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(323, ng0);

LAB13:    xsi_set_current_line(324, ng0);
    t4 = (t0 + 24896);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 25056);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(325, ng0);
    t2 = (t0 + 27296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28096);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(326, ng0);
    t2 = (t0 + 23136);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28416);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(327, ng0);
    t2 = (t0 + 27456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28256);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(328, ng0);
    t2 = (t0 + 27616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23296);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(329, ng0);
    t2 = (t0 + 15856U);
    t3 = *((char **)t2);
    t2 = (t0 + 25536);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(330, ng0);
    t2 = (t0 + 16016U);
    t3 = *((char **)t2);
    t2 = (t0 + 25696);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 2, 0LL);
    xsi_set_current_line(331, ng0);
    t2 = (t0 + 27776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28576);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(332, ng0);
    t2 = (t0 + 27936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 28736);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(333, ng0);
    t2 = (t0 + 22256U);
    t3 = *((char **)t2);
    t2 = (t0 + 28896);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(334, ng0);
    t2 = (t0 + 16816U);
    t3 = *((char **)t2);
    t2 = (t0 + 26176);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 4, 0LL);
    xsi_set_current_line(335, ng0);
    t2 = (t0 + 16976U);
    t3 = *((char **)t2);
    t2 = (t0 + 23936);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(336, ng0);
    t2 = (t0 + 17136U);
    t3 = *((char **)t2);
    t2 = (t0 + 26336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(337, ng0);
    t2 = (t0 + 17456U);
    t3 = *((char **)t2);
    t2 = (t0 + 26656);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(338, ng0);
    t2 = (t0 + 17616U);
    t3 = *((char **)t2);
    t2 = (t0 + 23456);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(339, ng0);
    t2 = (t0 + 16656U);
    t3 = *((char **)t2);
    t2 = (t0 + 29536);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(340, ng0);
    t2 = (t0 + 16496U);
    t3 = *((char **)t2);
    t2 = (t0 + 27136);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 1, 0LL);
    xsi_set_current_line(342, ng0);
    t2 = (t0 + 18256U);
    t3 = *((char **)t2);
    t2 = (t0 + 29056);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_347_18(char *t0)
{
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;

LAB0:    t1 = (t0 + 36840U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(347, ng0);
    t2 = (t0 + 39184);
    *((int *)t2) = 1;
    t3 = (t0 + 36872);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(347, ng0);

LAB5:    xsi_set_current_line(348, ng0);
    t4 = (t0 + 25536);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 1968);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 2240);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 2104);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 2376);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 2, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:
LAB15:    xsi_set_current_line(354, ng0);
    t2 = (t0 + 25696);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB16:    t5 = (t0 + 2512);
    t7 = *((char **)t5);
    t9 = xsi_vlog_unsigned_case_compare(t4, 2, t7, 32);
    if (t9 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 2648);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t9 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 2784);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t9 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 2920);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t4, 2, t3, 32);
    if (t9 == 1)
        goto LAB23;

LAB24:
LAB25:    goto LAB2;

LAB7:    xsi_set_current_line(349, ng0);
    t7 = (t0 + 28576);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t0 + 29216);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);
    goto LAB15;

LAB9:    xsi_set_current_line(350, ng0);
    t2 = (t0 + 28256);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 29216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    goto LAB15;

LAB11:    xsi_set_current_line(351, ng0);
    t2 = (t0 + 28896);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    memset(t13, 0, 8);
    t7 = (t13 + 4);
    t8 = (t5 + 4);
    t14 = *((unsigned int *)t5);
    t15 = (t14 >> 6);
    *((unsigned int *)t13) = t15;
    t16 = *((unsigned int *)t8);
    t17 = (t16 >> 6);
    *((unsigned int *)t7) = t17;
    t18 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t18 & 31U);
    t19 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t19 & 31U);
    t10 = (t0 + 29216);
    xsi_vlogvar_assign_value(t10, t13, 0, 0, 32);
    goto LAB15;

LAB13:    xsi_set_current_line(352, ng0);
    t2 = (t0 + 29056);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 29216);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    goto LAB15;

LAB17:    xsi_set_current_line(355, ng0);
    t5 = (t0 + 28736);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t0 + 29376);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);
    goto LAB25;

LAB19:    xsi_set_current_line(356, ng0);
    t2 = (t0 + 28896);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t8 = (t0 + 29376);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB25;

LAB21:    xsi_set_current_line(357, ng0);
    t2 = ((char*)((ng27)));
    t5 = (t0 + 29376);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 32);
    goto LAB25;

LAB23:    xsi_set_current_line(358, ng0);
    t2 = ((char*)((ng10)));
    t5 = (t0 + 29376);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 32);
    goto LAB25;

}

static void Always_371_19(char *t0)
{
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 37088U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(371, ng0);
    t2 = (t0 + 39200);
    *((int *)t2) = 1;
    t3 = (t0 + 37120);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(371, ng0);

LAB5:    xsi_set_current_line(372, ng0);
    t4 = (t0 + 19856U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(389, ng0);
    t2 = (t0 + 20016U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(372, ng0);

LAB9:    xsi_set_current_line(385, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 26496);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(386, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 23776);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(389, ng0);

LAB13:    xsi_set_current_line(390, ng0);
    t4 = (t0 + 25056);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 25216);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(391, ng0);
    t2 = (t0 + 28096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 29696);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(392, ng0);
    t2 = (t0 + 28416);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 29856);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(393, ng0);
    t2 = (t0 + 23296);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23616);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(394, ng0);
    t2 = (t0 + 28576);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30016);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(395, ng0);
    t2 = (t0 + 28736);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30176);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(396, ng0);
    t2 = (t0 + 22576U);
    t3 = *((char **)t2);
    t2 = (t0 + 30336);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    xsi_set_current_line(397, ng0);
    t2 = (t0 + 23936);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 24096);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(398, ng0);
    t2 = (t0 + 26336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26496);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(399, ng0);
    t2 = (t0 + 26656);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26816);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(400, ng0);
    t2 = (t0 + 23456);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 23776);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(401, ng0);
    t2 = (t0 + 29536);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30496);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    goto LAB12;

}

static void Cont_406_20(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 37336U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(407, ng0);
    t2 = (t0 + 24096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 40016);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 39216);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_406_21(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 37584U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(407, ng0);
    t2 = (t0 + 26496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 40080);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 39232);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Cont_406_22(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 37832U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(408, ng0);
    t2 = (t0 + 30336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 40144);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t4, 8);
    xsi_driver_vfirst_trans(t5, 0, 31);
    t10 = (t0 + 39248);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_412_23(char *t0)
{
    char t3[8];
    char t4[8];
    char *t1;
    char *t2;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    t1 = (t0 + 38080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(412, ng0);
    t2 = (t0 + 30496);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB4;

LAB5:    if (*((unsigned int *)t7) != 0)
        goto LAB6;

LAB7:    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t14);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB8;

LAB9:    t21 = *((unsigned int *)t4);
    t22 = (~(t21));
    t23 = *((unsigned int *)t14);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t14) > 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t4) > 0)
        goto LAB14;

LAB15:    memcpy(t3, t27, 8);

LAB16:    t28 = (t0 + 40208);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t3, 8);
    xsi_driver_vfirst_trans(t28, 0, 31);
    t33 = (t0 + 39264);
    *((int *)t33) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t4) = 1;
    goto LAB7;

LAB6:    t13 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t13) = 1;
    goto LAB7;

LAB8:    t18 = (t0 + 31296);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    goto LAB9;

LAB10:    t25 = (t0 + 30176);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    goto LAB11;

LAB12:    xsi_vlog_unsigned_bit_combine(t3, 32, t20, 32, t27, 32);
    goto LAB16;

LAB14:    memcpy(t3, t20, 8);
    goto LAB16;

}

static void Always_415_24(char *t0)
{
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
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 38328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(415, ng0);
    t2 = (t0 + 39280);
    *((int *)t2) = 1;
    t3 = (t0 + 38360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(415, ng0);

LAB5:    xsi_set_current_line(416, ng0);
    t4 = (t0 + 20976U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(424, ng0);
    t2 = (t0 + 21136U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB10;

LAB11:
LAB12:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(416, ng0);

LAB9:    xsi_set_current_line(417, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 25376);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(418, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 30656);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(419, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 26976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(420, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 31136);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 5, 0LL);
    xsi_set_current_line(421, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 30816);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(422, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 30976);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB8;

LAB10:    xsi_set_current_line(424, ng0);

LAB13:    xsi_set_current_line(425, ng0);
    t4 = (t0 + 25216);
    t5 = (t4 + 56U);
    t11 = *((char **)t5);
    t12 = (t0 + 25376);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(426, ng0);
    t2 = (t0 + 23776);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30656);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(427, ng0);
    t2 = (t0 + 26816);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 26976);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 1, 0LL);
    xsi_set_current_line(428, ng0);
    t2 = (t0 + 23616);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 31136);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 5, 0LL);
    xsi_set_current_line(429, ng0);
    t2 = (t0 + 30336);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 30816);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 32, 0LL);
    xsi_set_current_line(430, ng0);
    t2 = (t0 + 20816U);
    t3 = *((char **)t2);
    t2 = (t0 + 30976);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 32, 0LL);
    goto LAB12;

}

static void Always_434_25(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 38576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(434, ng0);
    t2 = (t0 + 39296);
    *((int *)t2) = 1;
    t3 = (t0 + 38608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(434, ng0);

LAB5:    xsi_set_current_line(435, ng0);
    t4 = (t0 + 30816);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31296);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    xsi_set_current_line(436, ng0);
    t2 = (t0 + 26976);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = (t0 + 4824);
    t6 = *((char **)t5);
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t6, 32);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 4960);
    t3 = *((char **)t2);
    t8 = xsi_vlog_unsigned_case_compare(t4, 1, t3, 32);
    if (t8 == 1)
        goto LAB9;

LAB10:
LAB11:    goto LAB2;

LAB7:    xsi_set_current_line(437, ng0);
    t5 = (t0 + 30816);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t10 = (t0 + 31296);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(438, ng0);
    t2 = (t0 + 30976);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 31296);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB11;

}


extern void work_m_00000000002844798820_3027548060_init()
{
	static char *pe[] = {(void *)Always_143_0,(void *)Cont_173_1,(void *)Cont_181_2,(void *)Always_184_3,(void *)Always_190_4,(void *)Cont_211_5,(void *)Cont_212_6,(void *)Cont_215_7,(void *)Always_220_8,(void *)Always_236_9,(void *)Cont_240_10,(void *)Cont_240_11,(void *)Cont_240_12,(void *)Cont_240_13,(void *)Cont_248_14,(void *)Always_251_15,(void *)Always_273_16,(void *)Always_299_17,(void *)Always_347_18,(void *)Always_371_19,(void *)Cont_406_20,(void *)Cont_406_21,(void *)Cont_406_22,(void *)Cont_412_23,(void *)Always_415_24,(void *)Always_434_25};
	xsi_register_didat("work_m_00000000002844798820_3027548060", "isim/mips_isim_beh.exe.sim/work/m_00000000002844798820_3027548060.didat");
	xsi_register_executes(pe);
}
