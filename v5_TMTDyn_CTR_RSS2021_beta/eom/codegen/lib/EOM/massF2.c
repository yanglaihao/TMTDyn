/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 * File: massF2.c
 *
 * MATLAB Coder version            : 5.1
 * C/C++ source code generated on  : 10-Mar-2021 22:46:32
 */

/* Include Files */
#include "massF2.h"
#include <math.h>
#include <string.h>

/* Function Definitions */
/*
 * MASSF2
 *     [OUT1,OUT2,OUT3,OUT4] = MASSF2(IN1,IN2,S,DS,T_SYM)
 * Arguments    : const double in1[60]
 *                const double in2[48]
 *                double s
 *                double out1[36]
 *                double out2[144]
 *                double out3[144]
 *                double out4[6]
 * Return Type  : void
 */
void massF2(const double in1[60], const double in2[48], double s, double out1[36],
            double out2[144], double out3[144], double out4[6])
{
  double b_t196_tmp;
  double t119;
  double t120;
  double t121;
  double t121_tmp;
  double t122;
  double t132;
  double t133;
  double t154;
  double t155;
  double t16;
  double t162_tmp;
  double t164_tmp;
  double t178;
  double t179;
  double t180;
  double t181;
  double t184;
  double t185;
  double t19;
  double t190;
  double t190_tmp;
  double t192;
  double t193;
  double t194;
  double t194_tmp_tmp;
  double t195;
  double t196;
  double t196_tmp;
  double t198;
  double t29;
  double t30;
  double t34;
  double t35;
  double t38;
  double t39;
  double t4;
  double t45;
  double t46;
  double t5;
  double t51;
  double t53_tmp;
  double t55;
  double t6;
  double t61;
  double t62;
  double t63;
  double t65;
  double t69_tmp;
  double t7;
  double t72;
  double t74;
  double t75;
  double t78;
  double t79;
  double t80;
  double t81;
  double t82;
  double t83;
  double t84;
  double t85;
  double t86;
  double t87;
  double t88;
  double t89;
  double t90;
  double t91;

  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     10-Mar-2021 20:34:29 */
  t4 = in1[9] * in1[9];
  t5 = in1[10] * in1[10];
  t6 = s * s;
  t7 = pow(s, 3.0);
  t16 = s / 2.0;
  t19 = in1[50] + -in1[36];
  t29 = t19 * t19;
  t30 = pow(t19, 3.0);
  t34 = in2[3] * s * 2.0 + in2[4] * t6 * 3.0;
  t35 = in2[5] * s * 2.0 + in2[6] * t6 * 3.0;
  t38 = (in2[7] * s * 2.0 + in2[8] * t6 * 3.0) + 1.0;
  t55 = (in1[36] / 2.0 + t16) + -(in1[50] / 2.0);
  t39 = t29 / 2.0;
  t45 = t34 * t34;
  t46 = t35 * t35;
  t51 = t38 * t38;
  t53_tmp = -(in1[0] * (t4 + -t5) * 3.1415926535897931);
  t62 = (t45 + t46) + t51;
  t61 = t53_tmp * (t4 / 4.0 + t5 / 4.0);
  out1[0] = t53_tmp;
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  out1[6] = 0.0;
  out1[7] = t53_tmp;
  out1[8] = 0.0;
  out1[9] = 0.0;
  out1[10] = 0.0;
  out1[11] = 0.0;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = t53_tmp;
  out1[15] = 0.0;
  out1[16] = 0.0;
  out1[17] = 0.0;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = t61;
  out1[22] = 0.0;
  out1[23] = 0.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = 0.0;
  out1[28] = t61;
  out1[29] = 0.0;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = 0.0;
  out1[34] = 0.0;
  out1[35] = t53_tmp * (t4 / 2.0 + t5 / 2.0);
  t63 = 1.0 / (t62 * t62);
  t5 = 1.0 / sqrt(t62);
  t65 = pow(t5, 3.0);
  t4 = (((((in1[51] / 2.0 + in2[9] * t6 / 2.0) + in2[10] * t7 / 2.0) + -(in2[0] *
           t19 / 2.0)) + in2[1] * t39) + in2[2] * t30 * -0.5) + t16 * ((in2[0] +
    -(in2[1] * t19 * 2.0)) + in2[2] * t29 * 3.0);
  t69_tmp = t38 * t5 + 1.0;
  t78 = cos(t4);
  t79 = sin(t4);
  t72 = sqrt(t69_tmp);
  t80 = t78 * t78;
  t81 = t79 * t79;
  t74 = 1.0 / t72;
  t82 = s * t5 * 2.0 + -(s * t51 * t65 * 2.0);
  t83 = t6 * t5 * 3.0 + -(t6 * t51 * t65 * 3.0);
  t75 = pow(t74, 3.0);
  t4 = s * 1.4142135623730951 * t5 * t74;
  t84 = t4 * t78;
  t85 = t4 * t79;
  t4 = t6 * 1.4142135623730951 * t5 * t74;
  t86 = t4 * t78 * 1.5;
  t87 = t4 * t79 * 1.5;
  t61 = 1.4142135623730951 * t34 * t5;
  t4 = t61 * t74;
  t88 = t4 * t78;
  t62 = 1.4142135623730951 * t35 * t5;
  t5 = t62 * t74;
  t89 = t5 * t78;
  t90 = t4 * t79;
  t91 = t5 * t79;
  t5 = s * 1.4142135623730951 * t34;
  t19 = t5 * t35;
  t4 = t19 * t65 * t74;
  t119 = t4 * t78;
  t120 = t4 * t79;
  t121_tmp = t5 * t38 * t65 * t74;
  t121 = t121_tmp * t78;
  t53_tmp = s * 1.4142135623730951 * t35 * t38 * t65 * t74;
  t122 = t53_tmp * t78;
  t185 = t6 * 1.4142135623730951 * t34;
  t5 = t185 * t35;
  t4 = t5 * t65 * t74;
  t132 = t4 * t78 * 1.5;
  t133 = t4 * t79 * 1.5;
  t4 = t5 * t38 * t63 * t75;
  t154 = t4 * t78 * 0.75;
  t155 = t4 * t79 * 0.75;
  t162_tmp = t39 - t16 * (in1[50] * 2.0 + -(in1[36] * 2.0));
  t164_tmp = t30 / 2.0 - s * t29 * 1.5;
  t178 = t88 + t91;
  t179 = t89 + -t90;
  t180 = t6 * t88 / 4.0 + t6 * t91 / 4.0;
  t181 = t7 * t88 / 4.0 + t7 * t91 / 4.0;
  t184 = t55 * t88 / 2.0 + t55 * t91 / 2.0;
  t29 = t61 * t75;
  t190_tmp = t29 * t78;
  t39 = t62 * t75;
  t51 = t39 * t79;
  t190 = ((t121 + t53_tmp * t79) + t190_tmp * t82 / 4.0) + t51 * t82 / 4.0;
  t4 = 1.4142135623730951 * t16 * t38;
  t5 = t19 * t38 * t63 * t75;
  t62 = s * 1.4142135623730951 * t46 * t65 * t74;
  t19 = t4 * t46 * t63 * t75;
  t192 = (((t84 + -(t62 * t78)) + t120) + t19 * t78) + t5 * t79 * -0.5;
  t61 = s * 1.4142135623730951 * t45 * t65 * t74;
  t53_tmp = t4 * t45 * t63 * t75;
  t193 = (((t85 + -(t61 * t79)) + t119) + t53_tmp * t79) + t5 * t78 * -0.5;
  t194_tmp_tmp = 1.4142135623730951 * t16 * t34;
  t4 = t194_tmp_tmp * t35 * t38 * t63 * t75;
  t194 = (((t84 + -(t61 * t78)) + -t120) + t53_tmp * t78) + t4 * t79;
  t195 = (((t85 + -(t62 * t79)) + -t119) + t19 * t79) + t4 * t78;
  t119 = t6 * 1.4142135623730951 * t35 * t38 * t65 * t74;
  t61 = t185 * t38 * t65 * t74;
  t196_tmp = t61 * t78;
  b_t196_tmp = t119 * t79;
  t196 = ((t196_tmp * 1.5 + b_t196_tmp * 1.5) + t190_tmp * t83 / 4.0) + t51 *
    t83 / 4.0;
  t4 = t6 * 1.4142135623730951 * t38;
  t51 = t6 * 1.4142135623730951 * t45 * t65 * t74;
  t19 = t4 * t45 * t63 * t75;
  t198 = (((t86 + -(t51 * t78 * 1.5)) + -t133) + t19 * t78 * 0.75) + t155;
  t62 = t6 * 1.4142135623730951 * t46 * t65 * t74;
  t53_tmp = t4 * t46 * t63 * t75;
  t63 = (((t87 + -(t62 * t79 * 1.5)) + -t132) + t53_tmp * t79 * 0.75) + t154;
  t45 = t6 * t89 / 4.0 + -(t6 * t90 / 4.0);
  t46 = t7 * t89 / 4.0 + -(t7 * t90 / 4.0);
  t185 = t55 * t89 / 2.0 + -(t55 * t90 / 2.0);
  t5 = t39 * t78;
  t4 = t29 * t79;
  t75 = ((t122 + -(t121_tmp * t79)) + t5 * t82 / 4.0) + -(t4 * t82 / 4.0);
  t34 = t61 * t79;
  t84 = t119 * t78;
  t85 = ((t84 * 1.5 + -(t34 * 1.5)) + t5 * t83 / 4.0) + -(t4 * t83 / 4.0);
  t120 = (((t86 + -(t62 * t78 * 1.5)) + t133) + t53_tmp * t78 * 0.75) + -t155;
  t39 = (((t87 + -(t51 * t79 * 1.5)) + t132) + t19 * t79 * 0.75) + -t154;
  out2[0] = 0.0;
  out2[1] = 0.0;
  out2[2] = 0.0;
  t29 = 1.4142135623730951 * t55 * t72;
  t30 = 1.4142135623730951 * t72 * t78;
  t190_tmp = 1.4142135623730951 * t72 * t79;
  t119 = t29 * t78;
  t29 *= t79;
  out2[3] = ((t30 * t184 + t190_tmp * t185) - t119 * t178 / 2.0) - t29 * t179 /
    2.0;
  out2[4] = ((t30 * t185 - t190_tmp * t184) - t119 * t179 / 2.0) + t29 * t178 /
    2.0;
  t29 = t55 * t69_tmp;
  out2[5] = ((t178 * t184 + t179 * t185) + t29 * t80) + t29 * t81;
  out2[6] = 0.0;
  out2[7] = 0.0;
  out2[8] = 0.0;
  t29 = t90 * t162_tmp * -0.5 + t89 * t162_tmp / 2.0;
  t119 = t88 * t162_tmp / 2.0 + t91 * t162_tmp / 2.0;
  t51 = t30 * t178;
  t4 = t190_tmp * t179;
  out2[9] = ((t190_tmp * t29 + t30 * t119) - t51 * t162_tmp / 2.0) - t4 *
    t162_tmp / 2.0;
  t5 = t30 * t179;
  t61 = t190_tmp * t178;
  out2[10] = ((t30 * t29 - t190_tmp * t119) - t5 * t162_tmp / 2.0) + t61 *
    t162_tmp / 2.0;
  t62 = t69_tmp * t80;
  t19 = t69_tmp * t81;
  out2[11] = ((t179 * t29 + t178 * t119) + t62 * t162_tmp) + t19 * t162_tmp;
  out2[12] = 0.0;
  out2[13] = 0.0;
  out2[14] = 0.0;
  t29 = t90 * t164_tmp * -0.5 + t89 * t164_tmp / 2.0;
  t119 = t88 * t164_tmp / 2.0 + t91 * t164_tmp / 2.0;
  t53_tmp = -1.4142135623730951 * t72 * t79;
  out2[15] = ((t53_tmp * t29 - t30 * t119) + t51 * t164_tmp / 2.0) + t4 *
    t164_tmp / 2.0;
  t51 = -1.4142135623730951 * t72 * t78;
  out2[16] = ((t51 * t29 + t190_tmp * t119) + t5 * t164_tmp / 2.0) - t61 *
    t164_tmp / 2.0;
  out2[17] = ((-t179 * t29 - t178 * t119) - t62 * t164_tmp) - t19 * t164_tmp;
  out2[18] = t6;
  out2[19] = 0.0;
  out2[20] = 0.0;
  t29 = t194_tmp_tmp * t38 * t65 * t74;
  t119 = t29 * t79;
  out2[21] = ((t121 * t179 * -0.5 + t30 * t193) + t190_tmp * t194) + t119 * t178;
  out2[22] = ((t30 * t194 - t190_tmp * t193) + t29 * t78 * t178) + t119 * t179;
  out2[23] = t178 * t193 + t179 * t194;
  out2[24] = t7;
  out2[25] = 0.0;
  out2[26] = 0.0;
  out2[27] = ((t190_tmp * t198 + t30 * t39) - t196_tmp * t179 * 0.75) + t34 *
    t178 * 0.75;
  out2[28] = ((t30 * t198 - t190_tmp * t39) + t196_tmp * t178 * 0.75) + t34 *
    t179 * 0.75;
  out2[29] = t179 * t198 + t178 * t39;
  out2[30] = 0.0;
  out2[31] = t6;
  out2[32] = 0.0;
  t29 = 1.4142135623730951 * t16 * t35 * t38 * t65 * t74;
  t119 = t29 * t79;
  out2[33] = ((t122 * t179 * -0.5 - t30 * t192) + t190_tmp * t195) + t119 * t178;
  out2[34] = ((t190_tmp * t192 + t30 * t195) + t29 * t78 * t178) + t119 * t179;
  out2[35] = -t178 * t192 + t179 * t195;
  out2[36] = 0.0;
  out2[37] = t7;
  out2[38] = 0.0;
  out2[39] = ((t51 * t120 + t190_tmp * t63) - t84 * t179 * 0.75) + b_t196_tmp *
    t178 * 0.75;
  out2[40] = ((t190_tmp * t120 + t30 * t63) + t84 * t178 * 0.75) + b_t196_tmp *
    t179 * 0.75;
  out2[41] = -t178 * t120 + t179 * t63;
  out2[42] = 0.0;
  out2[43] = 0.0;
  out2[44] = t6;
  t5 = 1.4142135623730951 * t74 * t78;
  t29 = t5 * t82;
  t4 = 1.4142135623730951 * t74 * t79;
  t119 = t4 * t82;
  out2[45] = ((t30 * t75 - t190_tmp * t190) + t29 * t179 / 4.0) - t119 * t178 /
    4.0;
  out2[46] = ((t51 * t190 - t190_tmp * t75) - t29 * t178 / 4.0) - t119 * t179 /
    4.0;
  out2[47] = t178 * t75 - t179 * t190;
  out2[48] = 0.0;
  out2[49] = 0.0;
  out2[50] = t7;
  t29 = t5 * t83;
  t119 = t4 * t83;
  out2[51] = ((t30 * t85 - t190_tmp * t196) + t29 * t179 / 4.0) - t119 * t178 /
    4.0;
  out2[52] = ((t51 * t196 - t190_tmp * t85) - t29 * t178 / 4.0) - t119 * t179 /
    4.0;
  out2[53] = t178 * t85 - t179 * t196;
  out2[54] = 0.0;
  out2[55] = 0.0;
  out2[56] = 0.0;
  t29 = t6 * 1.4142135623730951 * t72;
  t119 = t29 * t78;
  t29 *= t79;
  out2[57] = ((t30 * t180 + t190_tmp * t45) - t119 * t178 / 4.0) - t29 * t179 /
    4.0;
  out2[58] = ((t53_tmp * t180 + t30 * t45) - t119 * t179 / 4.0) + t29 * t178 /
    4.0;
  t29 = t6 * t69_tmp;
  out2[59] = ((t178 * t180 + t179 * t45) + t29 * t80 / 2.0) + t29 * t81 / 2.0;
  out2[60] = 0.0;
  out2[61] = 0.0;
  out2[62] = 0.0;
  t29 = t7 * 1.4142135623730951 * t72;
  t119 = t29 * t78;
  t29 *= t79;
  out2[63] = ((t30 * t181 + t190_tmp * t46) - t119 * t178 / 4.0) - t29 * t179 /
    4.0;
  out2[64] = ((t53_tmp * t181 + t30 * t46) - t119 * t179 / 4.0) + t29 * t178 /
    4.0;
  t29 = t7 * t69_tmp;
  out2[65] = ((t178 * t181 + t179 * t46) + t29 * t80 / 2.0) + t29 * t81 / 2.0;
  memset(&out2[66], 0, 78U * sizeof(double));
  memset(&out3[0], 0, 144U * sizeof(double));
  out4[0] = in1[32];
  out4[1] = in1[33];
  out4[2] = in1[34];
  out4[3] = 0.0;
  out4[4] = 0.0;
  out4[5] = 0.0;
}

/*
 * File trailer for massF2.c
 *
 * [EOF]
 */
