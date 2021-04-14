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
static const char *ng0 = "C:/Users/Adelin/Desktop/tema 1 monitorizare temperatura/tester_tema_1/build/bin/output_display.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {2, 0};
static int ng4[] = {1, 0};
static int ng5[] = {19, 0};
static int ng6[] = {26, 0};
static int ng7[] = {8, 0};
static unsigned int ng8[] = {255U, 0U};



static void Always_11_0(char *t0)
{
    char t6[8];
    char t7[8];
    char t20[8];
    char t30[8];
    char t38[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    char *t77;

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
    t5 = (t0 + 1928);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(13, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = (t0 + 2088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    xsi_set_current_line(15, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_multiply(t6, 32, t3, 16, t2, 32);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    memset(t7, 0, 8);
    t4 = (t6 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB7;

LAB6:    t8 = (t5 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t5))
        goto LAB9;

LAB8:    *((unsigned int *)t7) = 1;

LAB9:    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:
LAB13:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB16;

LAB15:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB16;

LAB19:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB18;

LAB17:    *((unsigned int *)t6) = 1;

LAB18:    memset(t7, 0, 8);
    t16 = (t6 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t16) != 0)
        goto LAB22;

LAB23:    t18 = (t7 + 4);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t18);
    t24 = (t22 || t23);
    if (t24 > 0)
        goto LAB24;

LAB25:    memcpy(t38, t7, 8);

LAB26:    t70 = (t38 + 4);
    t71 = *((unsigned int *)t70);
    t72 = (~(t71));
    t73 = *((unsigned int *)t38);
    t74 = (t73 & t72);
    t75 = (t74 != 0);
    if (t75 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(29, ng0);

LAB61:    xsi_set_current_line(30, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB63;

LAB62:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB64;

LAB65:    t16 = (t6 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB67;

LAB68:
LAB69:
LAB41:    goto LAB2;

LAB7:    t9 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(15, ng0);

LAB14:    xsi_set_current_line(16, ng0);
    t16 = (t0 + 2088);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = ((char*)((ng4)));
    memset(t20, 0, 8);
    xsi_vlog_unsigned_add(t20, 32, t18, 16, t19, 32);
    t21 = (t0 + 2088);
    xsi_vlogvar_assign_value(t21, t20, 0, 0, 16);
    goto LAB13;

LAB16:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB18;

LAB20:    *((unsigned int *)t7) = 1;
    goto LAB23;

LAB22:    t17 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB23;

LAB24:    t19 = (t0 + 2088);
    t21 = (t19 + 56U);
    t25 = *((char **)t21);
    t26 = ((char*)((ng6)));
    memset(t20, 0, 8);
    t27 = (t25 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB28;

LAB27:    t28 = (t26 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB28;

LAB31:    if (*((unsigned int *)t25) > *((unsigned int *)t26))
        goto LAB30;

LAB29:    *((unsigned int *)t20) = 1;

LAB30:    memset(t30, 0, 8);
    t31 = (t20 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t20);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB32;

LAB33:    if (*((unsigned int *)t31) != 0)
        goto LAB34;

LAB35:    t39 = *((unsigned int *)t7);
    t40 = *((unsigned int *)t30);
    t41 = (t39 & t40);
    *((unsigned int *)t38) = t41;
    t42 = (t7 + 4);
    t43 = (t30 + 4);
    t44 = (t38 + 4);
    t45 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    t47 = (t45 | t46);
    *((unsigned int *)t44) = t47;
    t48 = *((unsigned int *)t44);
    t49 = (t48 != 0);
    if (t49 == 1)
        goto LAB36;

LAB37:
LAB38:    goto LAB26;

LAB28:    t29 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB30;

LAB32:    *((unsigned int *)t30) = 1;
    goto LAB35;

LAB34:    t37 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB35;

LAB36:    t50 = *((unsigned int *)t38);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t38) = (t50 | t51);
    t52 = (t7 + 4);
    t53 = (t30 + 4);
    t54 = *((unsigned int *)t7);
    t55 = (~(t54));
    t56 = *((unsigned int *)t52);
    t57 = (~(t56));
    t58 = *((unsigned int *)t30);
    t59 = (~(t58));
    t60 = *((unsigned int *)t53);
    t61 = (~(t60));
    t62 = (t55 & t57);
    t63 = (t59 & t61);
    t64 = (~(t62));
    t65 = (~(t63));
    t66 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t66 & t64);
    t67 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t67 & t65);
    t68 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t68 & t64);
    t69 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t69 & t65);
    goto LAB38;

LAB39:    xsi_set_current_line(18, ng0);

LAB42:    xsi_set_current_line(19, ng0);
    xsi_set_current_line(19, ng0);
    t76 = ((char*)((ng4)));
    t77 = (t0 + 2248);
    xsi_vlogvar_assign_value(t77, t76, 0, 0, 4);

LAB43:    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB45;

LAB44:    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB45;

LAB48:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB47;

LAB46:    *((unsigned int *)t6) = 1;

LAB47:    t16 = (t6 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB49;

LAB50:    goto LAB41;

LAB45:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB47;

LAB49:    xsi_set_current_line(19, ng0);

LAB51:    xsi_set_current_line(20, ng0);
    t17 = (t0 + 2088);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t21 = ((char*)((ng5)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_minus(t7, 32, t19, 16, t21, 32);
    t25 = (t0 + 2248);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memset(t20, 0, 8);
    t28 = (t7 + 4);
    if (*((unsigned int *)t28) != 0)
        goto LAB53;

LAB52:    t29 = (t27 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB53;

LAB56:    if (*((unsigned int *)t7) < *((unsigned int *)t27))
        goto LAB55;

LAB54:    *((unsigned int *)t20) = 1;

LAB55:    t37 = (t20 + 4);
    t22 = *((unsigned int *)t37);
    t23 = (~(t22));
    t24 = *((unsigned int *)t20);
    t32 = (t24 & t23);
    t33 = (t32 != 0);
    if (t33 > 0)
        goto LAB57;

LAB58:
LAB59:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 2248);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t8 = (t0 + 2248);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 4);
    goto LAB43;

LAB53:    t31 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB55;

LAB57:    xsi_set_current_line(20, ng0);

LAB60:    xsi_set_current_line(22, ng0);
    t42 = (t0 + 1768);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t52 = ((char*)((ng4)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_lshift(t30, 8, t44, 8, t52, 32);
    t53 = (t0 + 1768);
    xsi_vlogvar_assign_value(t53, t30, 0, 0, 8);
    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1768);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 8, t5, 32);
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 8);
    goto LAB59;

LAB63:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t6) = 1;
    goto LAB65;

LAB67:    xsi_set_current_line(31, ng0);

LAB70:    xsi_set_current_line(32, ng0);
    t17 = ((char*)((ng8)));
    t18 = (t0 + 1768);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 8);
    goto LAB69;

}


extern void uut_m_00000000000148964138_3488864514_init()
{
	static char *pe[] = {(void *)Always_11_0};
	xsi_register_didat("uut_m_00000000000148964138_3488864514", "isim/tester.exe.sim/uut/m_00000000000148964138_3488864514.didat");
	xsi_register_executes(pe);
}
