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
static const char *ng0 = "C:/Users/Adelin/Desktop/tema 1 monitorizare temperatura/tester_tema_1/build/bin/division.v";
static int ng1[] = {0, 0};
static int ng2[] = {16, 0};
static int ng3[] = {1, 0};



static void Always_11_0(char *t0)
{
    char t6[8];
    char t32[8];
    char t34[8];
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
    char *t30;
    char *t31;
    char *t33;
    char *t35;
    char *t36;
    char *t37;
    int t38;
    char *t39;

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    t3 = (t0 + 3200);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(11, ng0);

LAB5:    xsi_set_current_line(12, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 16);
    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 16);
    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 2248);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    xsi_set_current_line(16, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB7;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB7:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(16, ng0);

LAB13:    xsi_set_current_line(18, ng0);
    xsi_set_current_line(18, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1928);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 5);

LAB14:    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB16;

LAB15:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;

LAB18:    t22 = (t6 + 4);
    t9 = *((unsigned int *)t22);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB20;

LAB21:    goto LAB12;

LAB16:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB20:    xsi_set_current_line(18, ng0);

LAB22:    xsi_set_current_line(19, ng0);
    t28 = (t0 + 1768);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_lshift(t32, 16, t30, 16, t31, 32);
    t33 = (t0 + 1768);
    xsi_vlogvar_assign_value(t33, t32, 0, 0, 16);
    xsi_set_current_line(20, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2088);
    t7 = (t5 + 72U);
    t8 = *((char **)t7);
    t21 = (t0 + 1928);
    t22 = (t21 + 56U);
    t28 = *((char **)t22);
    t29 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t28, 5, t29, 32);
    xsi_vlog_generic_get_index_select_value(t6, 1, t4, t8, 2, t32, 32, 2);
    t30 = (t0 + 1768);
    t31 = (t0 + 1768);
    t33 = (t31 + 72U);
    t35 = *((char **)t33);
    t36 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t34, t35, 2, t36, 32, 1);
    t37 = (t34 + 4);
    t9 = *((unsigned int *)t37);
    t38 = (!(t9));
    if (t38 == 1)
        goto LAB23;

LAB24:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2248);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t21 = (t4 + 4);
    if (*((unsigned int *)t21) != 0)
        goto LAB26;

LAB25:    t22 = (t8 + 4);
    if (*((unsigned int *)t22) != 0)
        goto LAB26;

LAB29:    if (*((unsigned int *)t4) < *((unsigned int *)t8))
        goto LAB28;

LAB27:    *((unsigned int *)t6) = 1;

LAB28:    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t10 = (~(t9));
    t11 = *((unsigned int *)t6);
    t12 = (t11 & t10);
    t13 = (t12 != 0);
    if (t13 > 0)
        goto LAB30;

LAB31:
LAB32:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 32, t4, 5, t5, 32);
    t7 = (t0 + 1928);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 5);
    goto LAB14;

LAB23:    xsi_vlogvar_assign_value(t30, t6, 0, *((unsigned int *)t34), 1);
    goto LAB24;

LAB26:    t28 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(21, ng0);

LAB33:    xsi_set_current_line(22, ng0);
    t30 = (t0 + 1768);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t35 = (t0 + 2248);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 16, t33, 16, t37, 16);
    t39 = (t0 + 1768);
    xsi_vlogvar_assign_value(t39, t32, 0, 0, 16);
    xsi_set_current_line(23, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1608);
    t4 = (t0 + 1608);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t8 = (t0 + 1928);
    t21 = (t8 + 56U);
    t22 = *((char **)t21);
    t28 = ((char*)((ng3)));
    memset(t32, 0, 8);
    xsi_vlog_unsigned_minus(t32, 32, t22, 5, t28, 32);
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t32, 32, 2);
    t29 = (t6 + 4);
    t9 = *((unsigned int *)t29);
    t38 = (!(t9));
    if (t38 == 1)
        goto LAB34;

LAB35:    goto LAB32;

LAB34:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB35;

}


extern void uut_m_00000000003057963592_2798683080_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("uut_m_00000000003057963592_2798683080", "isim/tester.exe.sim/uut/m_00000000003057963592_2798683080.didat");
	xsi_register_executes(pe);
}
