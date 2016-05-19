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
static const char *ng0 = "//Mac/Home/Arch/Exp 6. Pipelined CPU supporting Interrupt/alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {65536, 0};



static void Always_17_0(char *t0)
{
    char t12[8];
    char t15[8];
    char t17[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t13;
    char *t14;
    char *t16;
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
    int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;

LAB0:    t1 = (t0 + 16720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(17, ng0);
    t2 = (t0 + 17040);
    *((int *)t2) = 1;
    t3 = (t0 + 16752);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(17, ng0);

LAB5:    xsi_set_current_line(18, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 15800);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(19, ng0);
    t2 = (t0 + 15240U);
    t3 = *((char **)t2);

LAB6:    t2 = (t0 + 2920);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 3056);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 3736);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 3872);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 3192);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB15;

LAB16:    t2 = (t0 + 3464);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 3600);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 4008);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 4144);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 3328);
    t4 = *((char **)t2);
    t6 = xsi_vlog_unsigned_case_compare(t3, 4, t4, 32);
    if (t6 == 1)
        goto LAB25;

LAB26:
LAB27:    goto LAB2;

LAB7:    xsi_set_current_line(20, ng0);

LAB28:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 15400U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 14920U);
    t4 = *((char **)t2);
    t2 = (t0 + 15080U);
    t5 = *((char **)t2);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t4, 32, t5, 32);
    t2 = (t0 + 15800);
    xsi_vlogvar_assign_value(t2, t12, 0, 0, 32);

LAB31:    goto LAB27;

LAB9:    xsi_set_current_line(26, ng0);

LAB32:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 15400U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 14920U);
    t4 = *((char **)t2);
    t2 = (t0 + 15080U);
    t5 = *((char **)t2);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t4, 32, t5, 32);
    t2 = (t0 + 15800);
    xsi_vlogvar_assign_value(t2, t12, 0, 0, 32);

LAB35:    goto LAB27;

LAB11:    xsi_set_current_line(32, ng0);

LAB36:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 14920U);
    t5 = *((char **)t2);
    t2 = (t0 + 15080U);
    t13 = *((char **)t2);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 ^ t8);
    *((unsigned int *)t12) = t9;
    t2 = (t5 + 4);
    t14 = (t13 + 4);
    t16 = (t12 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t14);
    t18 = (t10 | t11);
    *((unsigned int *)t16) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB37;

LAB38:
LAB39:    t23 = (t0 + 15800);
    xsi_vlogvar_assign_value(t23, t12, 0, 0, 32);
    goto LAB27;

LAB13:    xsi_set_current_line(35, ng0);

LAB40:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 14920U);
    t5 = *((char **)t2);
    t2 = (t0 + 15080U);
    t13 = *((char **)t2);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 | t8);
    *((unsigned int *)t15) = t9;
    t2 = (t5 + 4);
    t14 = (t13 + 4);
    t16 = (t15 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t14);
    t18 = (t10 | t11);
    *((unsigned int *)t16) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB41;

LAB42:
LAB43:    memset(t12, 0, 8);
    t37 = (t12 + 4);
    t38 = (t15 + 4);
    t39 = *((unsigned int *)t15);
    t40 = (~(t39));
    *((unsigned int *)t12) = t40;
    *((unsigned int *)t37) = 0;
    if (*((unsigned int *)t38) != 0)
        goto LAB45;

LAB44:    t45 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t45 & 4294967295U);
    t46 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t46 & 4294967295U);
    t47 = (t0 + 15800);
    xsi_vlogvar_assign_value(t47, t12, 0, 0, 32);
    goto LAB27;

LAB15:    xsi_set_current_line(38, ng0);

LAB46:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 15400U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 14920U);
    t4 = *((char **)t2);
    t2 = (t0 + 15080U);
    t5 = *((char **)t2);
    memset(t12, 0, 8);
    t2 = (t4 + 4);
    if (*((unsigned int *)t2) != 0)
        goto LAB51;

LAB50:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB51;

LAB54:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB52;

LAB53:    t16 = (t0 + 15800);
    xsi_vlogvar_assign_value(t16, t12, 0, 0, 32);

LAB49:    goto LAB27;

LAB17:    xsi_set_current_line(44, ng0);

LAB55:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 14920U);
    t5 = *((char **)t2);
    t2 = (t0 + 15080U);
    t13 = *((char **)t2);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 & t8);
    *((unsigned int *)t12) = t9;
    t2 = (t5 + 4);
    t14 = (t13 + 4);
    t16 = (t12 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t14);
    t18 = (t10 | t11);
    *((unsigned int *)t16) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB56;

LAB57:
LAB58:    t37 = (t0 + 15800);
    xsi_vlogvar_assign_value(t37, t12, 0, 0, 32);
    goto LAB27;

LAB19:    xsi_set_current_line(47, ng0);

LAB59:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 14920U);
    t5 = *((char **)t2);
    t2 = (t0 + 15080U);
    t13 = *((char **)t2);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t13);
    t9 = (t7 | t8);
    *((unsigned int *)t12) = t9;
    t2 = (t5 + 4);
    t14 = (t13 + 4);
    t16 = (t12 + 4);
    t10 = *((unsigned int *)t2);
    t11 = *((unsigned int *)t14);
    t18 = (t10 | t11);
    *((unsigned int *)t16) = t18;
    t19 = *((unsigned int *)t16);
    t20 = (t19 != 0);
    if (t20 == 1)
        goto LAB60;

LAB61:
LAB62:    t37 = (t0 + 15800);
    xsi_vlogvar_assign_value(t37, t12, 0, 0, 32);
    goto LAB27;

LAB21:    xsi_set_current_line(50, ng0);

LAB63:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 15080U);
    t5 = *((char **)t2);
    t2 = (t0 + 14920U);
    t13 = *((char **)t2);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 32, t5, 32, t13, 32);
    t2 = (t0 + 15800);
    xsi_vlogvar_assign_value(t2, t12, 0, 0, 32);
    goto LAB27;

LAB23:    xsi_set_current_line(53, ng0);

LAB64:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 15400U);
    t5 = *((char **)t2);
    t2 = (t5 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 15080U);
    t4 = *((char **)t2);
    t2 = (t0 + 14920U);
    t5 = *((char **)t2);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 32, t4, 32, t5, 32);
    t2 = (t0 + 15800);
    xsi_vlogvar_assign_value(t2, t12, 0, 0, 32);

LAB67:    goto LAB27;

LAB25:    xsi_set_current_line(59, ng0);

LAB68:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 15080U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_multiply(t12, 32, t5, 32, t2, 32);
    t13 = (t0 + 15800);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB27;

LAB29:    xsi_set_current_line(22, ng0);
    t13 = (t0 + 14920U);
    t14 = *((char **)t13);
    t13 = (t0 + 15080U);
    t16 = *((char **)t13);
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t14, 32, t16, 32);
    t13 = (t0 + 15800);
    xsi_vlogvar_assign_value(t13, t17, 0, 0, 32);
    goto LAB31;

LAB33:    xsi_set_current_line(28, ng0);
    t13 = (t0 + 14920U);
    t14 = *((char **)t13);
    t13 = (t0 + 15080U);
    t16 = *((char **)t13);
    memset(t17, 0, 8);
    xsi_vlog_signed_minus(t17, 32, t14, 32, t16, 32);
    t13 = (t0 + 15800);
    xsi_vlogvar_assign_value(t13, t17, 0, 0, 32);
    goto LAB35;

LAB37:    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t12) = (t21 | t22);
    goto LAB39;

LAB41:    t21 = *((unsigned int *)t15);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t15) = (t21 | t22);
    t23 = (t5 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (~(t28));
    t34 = (~(t32));
    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & t33);
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t34);
    goto LAB43;

LAB45:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t38);
    *((unsigned int *)t12) = (t41 | t42);
    t43 = *((unsigned int *)t37);
    t44 = *((unsigned int *)t38);
    *((unsigned int *)t37) = (t43 | t44);
    goto LAB44;

LAB47:    xsi_set_current_line(40, ng0);
    t13 = (t0 + 14920U);
    t14 = *((char **)t13);
    t13 = (t0 + 15080U);
    t16 = *((char **)t13);
    memset(t17, 0, 8);
    xsi_vlog_signed_less(t17, 32, t14, 32, t16, 32);
    t13 = (t0 + 15800);
    xsi_vlogvar_assign_value(t13, t17, 0, 0, 32);
    goto LAB49;

LAB51:    t14 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB53;

LAB52:    *((unsigned int *)t12) = 1;
    goto LAB53;

LAB56:    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t12) = (t21 | t22);
    t23 = (t5 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t5);
    t26 = (~(t25));
    t27 = *((unsigned int *)t23);
    t29 = (~(t27));
    t30 = *((unsigned int *)t13);
    t31 = (~(t30));
    t33 = *((unsigned int *)t24);
    t34 = (~(t33));
    t28 = (t26 & t29);
    t32 = (t31 & t34);
    t35 = (~(t28));
    t36 = (~(t32));
    t39 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t39 & t35);
    t40 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t40 & t36);
    t41 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t41 & t35);
    t42 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t42 & t36);
    goto LAB58;

LAB60:    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t16);
    *((unsigned int *)t12) = (t21 | t22);
    t23 = (t5 + 4);
    t24 = (t13 + 4);
    t25 = *((unsigned int *)t23);
    t26 = (~(t25));
    t27 = *((unsigned int *)t5);
    t28 = (t27 & t26);
    t29 = *((unsigned int *)t24);
    t30 = (~(t29));
    t31 = *((unsigned int *)t13);
    t32 = (t31 & t30);
    t33 = (~(t28));
    t34 = (~(t32));
    t35 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t35 & t33);
    t36 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t36 & t34);
    goto LAB62;

LAB65:    xsi_set_current_line(55, ng0);
    t13 = (t0 + 15080U);
    t14 = *((char **)t13);
    t13 = (t0 + 14920U);
    t16 = *((char **)t13);
    memset(t15, 0, 8);
    xsi_vlog_signed_arith_rshift(t15, 32, t14, 32, t16, 32);
    t13 = (t0 + 15800);
    xsi_vlogvar_assign_value(t13, t15, 0, 0, 32);
    goto LAB67;

}


extern void work_m_00000000003818220120_2725559894_init()
{
	static char *pe[] = {(void *)Always_17_0};
	xsi_register_didat("work_m_00000000003818220120_2725559894", "isim/sim_mips_isim_beh.exe.sim/work/m_00000000003818220120_2725559894.didat");
	xsi_register_executes(pe);
}
