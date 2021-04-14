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
static const char *ng0 = "C:/Users/Adelin/Desktop/tema 1 monitorizare temperatura/tester_tema_1/build/bin/sensors_input.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};
static int ng5[] = {4, 0};



static void Cont_9_0(char *t0)
{
    char t3[8];
    char t14[8];
    char t18[8];
    char t19[8];
    char t31[8];
    char t35[8];
    char t36[8];
    char t37[8];
    char t49[8];
    char t53[8];
    char t54[8];
    char t55[8];
    char t67[8];
    char t71[8];
    char t72[8];
    char t73[8];
    char t86[8];
    char t90[8];
    char t91[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t17;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t50;
    char *t51;
    char *t52;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t68;
    char *t69;
    char *t70;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    char *t84;
    char *t85;
    char *t87;
    char *t88;
    char *t89;
    char *t92;
    char *t93;
    char *t94;
    char *t95;
    char *t96;
    unsigned int t97;
    unsigned int t98;
    char *t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t103;
    unsigned int t104;
    char *t105;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(9, ng0);
    t2 = (t0 + 1368U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 255U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 255U);
    t12 = (t0 + 1528U);
    t13 = *((char **)t12);
    t12 = (t0 + 1488U);
    t15 = (t12 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t14, 16, t13, t16, 2, t17, 32, 1);
    memset(t18, 0, 8);
    xsi_vlog_unsigned_multiply(t18, 16, t3, 16, t14, 16);
    t20 = (t0 + 1368U);
    t21 = *((char **)t20);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t22 = (t21 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (t23 >> 8);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t22);
    t26 = (t25 >> 8);
    *((unsigned int *)t20) = t26;
    t27 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t27 & 255U);
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 255U);
    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    t29 = (t0 + 1488U);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t31, 16, t30, t33, 2, t34, 32, 1);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_multiply(t35, 16, t19, 16, t31, 16);
    memset(t36, 0, 8);
    xsi_vlog_unsigned_add(t36, 16, t18, 16, t35, 16);
    t38 = (t0 + 1368U);
    t39 = *((char **)t38);
    memset(t37, 0, 8);
    t38 = (t37 + 4);
    t40 = (t39 + 4);
    t41 = *((unsigned int *)t39);
    t42 = (t41 >> 16);
    *((unsigned int *)t37) = t42;
    t43 = *((unsigned int *)t40);
    t44 = (t43 >> 16);
    *((unsigned int *)t38) = t44;
    t45 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t45 & 255U);
    t46 = *((unsigned int *)t38);
    *((unsigned int *)t38) = (t46 & 255U);
    t47 = (t0 + 1528U);
    t48 = *((char **)t47);
    t47 = (t0 + 1488U);
    t50 = (t47 + 72U);
    t51 = *((char **)t50);
    t52 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t49, 16, t48, t51, 2, t52, 32, 1);
    memset(t53, 0, 8);
    xsi_vlog_unsigned_multiply(t53, 16, t37, 16, t49, 16);
    memset(t54, 0, 8);
    xsi_vlog_unsigned_add(t54, 16, t36, 16, t53, 16);
    t56 = (t0 + 1368U);
    t57 = *((char **)t56);
    memset(t55, 0, 8);
    t56 = (t55 + 4);
    t58 = (t57 + 4);
    t59 = *((unsigned int *)t57);
    t60 = (t59 >> 24);
    *((unsigned int *)t55) = t60;
    t61 = *((unsigned int *)t58);
    t62 = (t61 >> 24);
    *((unsigned int *)t56) = t62;
    t63 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t63 & 255U);
    t64 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t64 & 255U);
    t65 = (t0 + 1528U);
    t66 = *((char **)t65);
    t65 = (t0 + 1488U);
    t68 = (t65 + 72U);
    t69 = *((char **)t68);
    t70 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t67, 16, t66, t69, 2, t70, 32, 1);
    memset(t71, 0, 8);
    xsi_vlog_unsigned_multiply(t71, 16, t55, 16, t67, 16);
    memset(t72, 0, 8);
    xsi_vlog_unsigned_add(t72, 16, t54, 16, t71, 16);
    t74 = (t0 + 1368U);
    t75 = *((char **)t74);
    memset(t73, 0, 8);
    t74 = (t73 + 4);
    t76 = (t75 + 8);
    t77 = (t75 + 12);
    t78 = *((unsigned int *)t76);
    t79 = (t78 >> 0);
    *((unsigned int *)t73) = t79;
    t80 = *((unsigned int *)t77);
    t81 = (t80 >> 0);
    *((unsigned int *)t74) = t81;
    t82 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t82 & 255U);
    t83 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t83 & 255U);
    t84 = (t0 + 1528U);
    t85 = *((char **)t84);
    t84 = (t0 + 1488U);
    t87 = (t84 + 72U);
    t88 = *((char **)t87);
    t89 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t86, 16, t85, t88, 2, t89, 32, 1);
    memset(t90, 0, 8);
    xsi_vlog_unsigned_multiply(t90, 16, t73, 16, t86, 16);
    memset(t91, 0, 8);
    xsi_vlog_unsigned_add(t91, 16, t72, 16, t90, 16);
    t92 = (t0 + 3352);
    t93 = (t92 + 56U);
    t94 = *((char **)t93);
    t95 = (t94 + 56U);
    t96 = *((char **)t95);
    memset(t96, 0, 8);
    t97 = 65535U;
    t98 = t97;
    t99 = (t91 + 4);
    t100 = *((unsigned int *)t91);
    t97 = (t97 & t100);
    t101 = *((unsigned int *)t99);
    t98 = (t98 & t101);
    t102 = (t96 + 4);
    t103 = *((unsigned int *)t96);
    *((unsigned int *)t96) = (t103 | t97);
    t104 = *((unsigned int *)t102);
    *((unsigned int *)t102) = (t104 | t98);
    xsi_driver_vfirst_trans(t92, 0, 15);
    t105 = (t0 + 3256);
    *((int *)t105) = 1;

LAB1:    return;
}

static void Cont_11_1(char *t0)
{
    char t4[8];
    char t10[8];
    char t14[8];
    char t17[8];
    char t21[8];
    char t24[8];
    char t28[8];
    char t31[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;

LAB0:    t1 = (t0 + 2936U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);
    t2 = (t0 + 1488U);
    t5 = (t2 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    xsi_vlog_generic_get_index_select_value(t4, 8, t3, t6, 2, t7, 32, 1);
    t8 = (t0 + 1528U);
    t9 = *((char **)t8);
    t8 = (t0 + 1488U);
    t11 = (t8 + 72U);
    t12 = *((char **)t11);
    t13 = ((char*)((ng2)));
    xsi_vlog_generic_get_index_select_value(t10, 8, t9, t12, 2, t13, 32, 1);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 8, t4, 8, t10, 8);
    t15 = (t0 + 1528U);
    t16 = *((char **)t15);
    t15 = (t0 + 1488U);
    t18 = (t15 + 72U);
    t19 = *((char **)t18);
    t20 = ((char*)((ng3)));
    xsi_vlog_generic_get_index_select_value(t17, 8, t16, t19, 2, t20, 32, 1);
    memset(t21, 0, 8);
    xsi_vlog_unsigned_add(t21, 8, t14, 8, t17, 8);
    t22 = (t0 + 1528U);
    t23 = *((char **)t22);
    t22 = (t0 + 1488U);
    t25 = (t22 + 72U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng4)));
    xsi_vlog_generic_get_index_select_value(t24, 8, t23, t26, 2, t27, 32, 1);
    memset(t28, 0, 8);
    xsi_vlog_unsigned_add(t28, 8, t21, 8, t24, 8);
    t29 = (t0 + 1528U);
    t30 = *((char **)t29);
    t29 = (t0 + 1488U);
    t32 = (t29 + 72U);
    t33 = *((char **)t32);
    t34 = ((char*)((ng5)));
    xsi_vlog_generic_get_index_select_value(t31, 8, t30, t33, 2, t34, 32, 1);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 8, t28, 8, t31, 8);
    t36 = (t0 + 3416);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    memset(t40, 0, 8);
    t41 = 255U;
    t42 = t41;
    t43 = (t35 + 4);
    t44 = *((unsigned int *)t35);
    t41 = (t41 & t44);
    t45 = *((unsigned int *)t43);
    t42 = (t42 & t45);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t47 | t41);
    t48 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t48 | t42);
    xsi_driver_vfirst_trans(t36, 0, 7);
    t49 = (t0 + 3272);
    *((int *)t49) = 1;

LAB1:    return;
}


extern void uut_m_00000000003214464226_3166864719_init()
{
	static char *pe[] = {(void *)Cont_9_0,(void *)Cont_11_1};
	xsi_register_didat("uut_m_00000000003214464226_3166864719", "isim/tester.exe.sim/uut/m_00000000003214464226_3166864719.didat");
	xsi_register_executes(pe);
}
