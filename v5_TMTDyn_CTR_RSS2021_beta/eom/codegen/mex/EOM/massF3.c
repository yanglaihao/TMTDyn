/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * massF3.c
 *
 * Code generation for function 'massF3'
 *
 */

/* Include files */
#include "massF3.h"
#include "EOM_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo de_emlrtRSI = { 134,/* lineNo */
  "massF3",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Postdoc\\2_KCL\\2_Research\\2. Model\\CTR TMTDyn\\eom\\massF3.m"/* pathName */
};

static emlrtRSInfo fe_emlrtRSI = { 151,/* lineNo */
  "massF3",                            /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\Postdoc\\2_KCL\\2_Research\\2. Model\\CTR TMTDyn\\eom\\massF3.m"/* pathName */
};

/* Function Definitions */
void massF3(const emlrtStack *sp, const real_T in1[60], const real_T in2[48],
            real_T s, real_T out1[36], real_T out2[144], real_T out3[144],
            real_T out4[6])
{
  emlrtStack st;
  real_T b_t314_tmp;
  real_T b_t320_tmp;
  real_T c_t320_tmp;
  real_T d_t320_tmp;
  real_T t10;
  real_T t103_tmp;
  real_T t107;
  real_T t109;
  real_T t110;
  real_T t116;
  real_T t117;
  real_T t118;
  real_T t119;
  real_T t120;
  real_T t121;
  real_T t122;
  real_T t123;
  real_T t124;
  real_T t125;
  real_T t126;
  real_T t127;
  real_T t128;
  real_T t129;
  real_T t130;
  real_T t131;
  real_T t133;
  real_T t134;
  real_T t17;
  real_T t18;
  real_T t191;
  real_T t191_tmp;
  real_T t192;
  real_T t2;
  real_T t207;
  real_T t208;
  real_T t219;
  real_T t219_tmp_tmp_tmp;
  real_T t220;
  real_T t23;
  real_T t233;
  real_T t234;
  real_T t240;
  real_T t241;
  real_T t243;
  real_T t244;
  real_T t260;
  real_T t261;
  real_T t264;
  real_T t265;
  real_T t268;
  real_T t269;
  real_T t292;
  real_T t293;
  real_T t294;
  real_T t295;
  real_T t296;
  real_T t297;
  real_T t298;
  real_T t299;
  real_T t30;
  real_T t300;
  real_T t301;
  real_T t302;
  real_T t304;
  real_T t305;
  real_T t308;
  real_T t308_tmp_tmp;
  real_T t309;
  real_T t310;
  real_T t311;
  real_T t311_tmp_tmp;
  real_T t312;
  real_T t313;
  real_T t314;
  real_T t314_tmp;
  real_T t315;
  real_T t317;
  real_T t318;
  real_T t320;
  real_T t320_tmp;
  real_T t321;
  real_T t321_tmp;
  real_T t324;
  real_T t326;
  real_T t326_tmp;
  real_T t37;
  real_T t45;
  real_T t46;
  real_T t47;
  real_T t50;
  real_T t51;
  real_T t59;
  real_T t7;
  real_T t70;
  real_T t75;
  real_T t77;
  real_T t78;
  real_T t79;
  real_T t8;
  real_T t80;
  real_T t81;
  real_T t82;
  real_T t83;
  real_T t84;
  real_T t85;
  real_T t86;
  real_T t88;
  real_T t9;
  real_T t92;
  real_T t93;
  real_T t95;
  real_T t97;
  st.prev = sp;
  st.tls = sp->tls;

  /* MASSF3 */
  /*     [OUT1,OUT2,OUT3,OUT4] = MASSF3(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     10-Mar-2021 20:34:23 */
  t2 = in1[48] + in1[38];
  t7 = in1[9] * in1[9];
  t8 = in1[10] * in1[10];
  t9 = s * s;
  t10 = muDoubleScalarPower(s, 3.0);
  t23 = s / 2.0;
  t17 = t2 * t2;
  t18 = muDoubleScalarPower(t2, 3.0);
  t30 = in1[50] + -in1[36];
  t37 = t2 * 2.0;
  t45 = in1[50] * 2.0 + -(in1[36] * 2.0);
  t46 = t30 * t30;
  t47 = muDoubleScalarPower(t30, 3.0);
  t50 = t17 / 2.0;
  t51 = t18 / 2.0;
  t85 = (((in1[48] / 2.0 + in1[36] / 2.0) + in1[38] / 2.0) + t23) + -(in1[50] /
    2.0);
  t59 = t46 / 2.0;
  t88 = s * t17;
  t70 = t18 + t88 * 3.0;
  t75 = t17 + s * t37;
  t77 = t51 + t88 * 1.5;
  t78 = t50 + s * t2;
  t80 = ((in2[11] * s * 2.0 + in2[3] * t2 * 2.0) + in2[12] * t9 * 3.0) + in2[4] *
    t17 * 3.0;
  t81 = ((in2[13] * s * 2.0 + in2[5] * t2 * 2.0) + in2[14] * t9 * 3.0) + in2[6] *
    t17 * 3.0;
  t82 = (((in2[15] * s * 2.0 + in2[7] * t2 * 2.0) + in2[16] * t9 * 3.0) + in2[8]
         * t17 * 3.0) + 1.0;
  t18 = -(in1[0] * (t7 + -t8) * 3.1415926535897931);
  t79 = (in2[0] + -(in2[1] * t30 * 2.0)) + in2[2] * t46 * 3.0;
  t83 = t80 * t80;
  t84 = t81 * t81;
  t86 = t82 * t82;
  t88 = t18 * (t7 / 4.0 + t8 / 4.0);
  out1[0] = t18;
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  out1[6] = 0.0;
  out1[7] = t18;
  out1[8] = 0.0;
  out1[9] = 0.0;
  out1[10] = 0.0;
  out1[11] = 0.0;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = t18;
  out1[15] = 0.0;
  out1[16] = 0.0;
  out1[17] = 0.0;
  out1[18] = 0.0;
  out1[19] = 0.0;
  out1[20] = 0.0;
  out1[21] = t88;
  out1[22] = 0.0;
  out1[23] = 0.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = 0.0;
  out1[28] = t88;
  out1[29] = 0.0;
  out1[30] = 0.0;
  out1[31] = 0.0;
  out1[32] = 0.0;
  out1[33] = 0.0;
  out1[34] = 0.0;
  out1[35] = t18 * (t7 / 2.0 + t8 / 2.0);
  t92 = (-t59 + t23 * t45) + t2 * t45 / 2.0;
  t93 = (-(t47 / 2.0) + s * t46 * 1.5) + t2 * t46 * 1.5;
  t18 = (t83 + t84) + t86;
  t95 = 1.0 / (t18 * t18);
  st.site = &de_emlrtRSI;
  if (t18 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t88 = 1.0 / muDoubleScalarSqrt(t18);
  t97 = muDoubleScalarPower(t88, 3.0);
  t18 = ((((((((in1[51] / 2.0 + in2[17] * t9 / 2.0) + in2[18] * t10 / 2.0) +
              in2[9] * t50) + in2[10] * t51) + -(in2[0] * t30 / 2.0)) + in2[1] *
           t59) + in2[2] * t47 * -0.5) + t2 * t79 / 2.0) + t23 * ((in2[9] * t2 *
    2.0 + in2[10] * t17 * 3.0) + t79);
  t103_tmp = t82 * t88 + 1.0;
  t116 = muDoubleScalarCos(t18);
  t117 = muDoubleScalarSin(t18);
  st.site = &fe_emlrtRSI;
  if (t103_tmp < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &b_emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t107 = muDoubleScalarSqrt(t103_tmp);
  t118 = t116 * t116;
  t119 = t117 * t117;
  t123 = t37 * t88 + t2 * t86 * t97 * -2.0;
  t109 = 1.0 / t107;
  t120 = s * t88 * 2.0 + -(s * t86 * t97 * 2.0);
  t121 = t9 * t88 * 3.0 + -(t9 * t86 * t97 * 3.0);
  t122 = t17 * t88 * 3.0 + -(t17 * t86 * t97 * 3.0);
  t110 = muDoubleScalarPower(t109, 3.0);
  t18 = s * 1.4142135623730951 * t88 * t109;
  t124 = t18 * t116;
  t125 = t18 * t117;
  t18 = t9 * 1.4142135623730951 * t88 * t109;
  t126 = t18 * t116 * 1.5;
  t127 = t18 * t117 * 1.5;
  t18 = 1.4142135623730951 * t17 * t88 * t109;
  t128 = t18 * t116 * 1.5;
  t129 = t18 * t117 * 1.5;
  t18 = t2 * 1.4142135623730951 * t88 * t109;
  t130 = t18 * t116;
  t131 = t18 * t117;
  t47 = 1.4142135623730951 * t80 * t88;
  t18 = t47 * t109;
  t79 = t18 * t116;
  t50 = 1.4142135623730951 * t81 * t88;
  t88 = t50 * t109;
  t133 = t88 * t116;
  t134 = t18 * t117;
  t46 = t88 * t117;
  t88 = s * 1.4142135623730951 * t80;
  t51 = t88 * t81;
  t18 = t51 * t97 * t109;
  t37 = t18 * t116;
  t59 = t18 * t117;
  t191_tmp = t88 * t82 * t97 * t109;
  t191 = t191_tmp * t116;
  t30 = s * 1.4142135623730951 * t81 * t82 * t97 * t109;
  t192 = t30 * t116;
  t86 = t9 * 1.4142135623730951 * t80;
  t7 = t86 * t81;
  t18 = t7 * t97 * t109;
  t207 = t18 * t116 * 1.5;
  t208 = t18 * t117 * 1.5;
  t219_tmp_tmp_tmp = 1.4142135623730951 * t17 * t80;
  t8 = t219_tmp_tmp_tmp * t81;
  t18 = t8 * t97 * t109;
  t219 = t18 * t116 * 1.5;
  t220 = t18 * t117 * 1.5;
  t88 = t2 * 1.4142135623730951 * t80;
  t45 = t88 * t81;
  t18 = t45 * t97 * t109;
  t233 = t18 * t116;
  t234 = t18 * t117;
  t18 = t88 * t82 * t97 * t109;
  t240 = t18 * t116;
  t88 = t2 * 1.4142135623730951 * t81 * t82 * t97 * t109;
  t241 = t88 * t116;
  t243 = t18 * t117;
  t244 = t88 * t117;
  t18 = t7 * t82 * t95 * t110;
  t260 = t18 * t116 * 0.75;
  t261 = t18 * t117 * 0.75;
  t18 = t8 * t82 * t95 * t110;
  t264 = t18 * t116 * 0.75;
  t265 = t18 * t117 * 0.75;
  t18 = t45 * t82 * t95 * t110;
  t268 = t18 * t116 / 2.0;
  t269 = t18 * t117 / 2.0;
  t292 = t79 + t46;
  t293 = t133 + -t134;
  t294 = t9 * t46 / 4.0 + t9 * t79 / 4.0;
  t295 = t10 * t46 / 4.0 + t10 * t79 / 4.0;
  t298 = t77 * t79 / 2.0 + t77 * t46 / 2.0;
  t300 = t78 * t79 / 2.0 + t78 * t46 / 2.0;
  t302 = t85 * t79 / 2.0 + t85 * t46 / 2.0;
  t304 = t92 * t79 / 2.0 + t92 * t46 / 2.0;
  t305 = t93 * t79 / 2.0 + t93 * t46 / 2.0;
  t308_tmp_tmp = t47 * t110;
  t315 = t308_tmp_tmp * t116;
  t313 = t50 * t110;
  t50 = t313 * t117;
  t308 = ((t191 + t30 * t117) + t315 * t120 / 4.0) + t50 * t120 / 4.0;
  t18 = 1.4142135623730951 * t23 * t82;
  t88 = t51 * t82 * t95 * t110;
  t45 = s * 1.4142135623730951 * t84 * t97 * t109;
  t46 = t18 * t84 * t95 * t110;
  t309 = (((t124 + -(t45 * t116)) + t59) + t46 * t116) + t88 * t117 * -0.5;
  t8 = s * 1.4142135623730951 * t83 * t97 * t109;
  t7 = t18 * t83 * t95 * t110;
  t310 = (((t125 + -(t8 * t117)) + t37) + t7 * t117) + t88 * t116 * -0.5;
  t311_tmp_tmp = 1.4142135623730951 * t23 * t80;
  t18 = t311_tmp_tmp * t81 * t82 * t95 * t110;
  t311 = (((t124 + -(t8 * t116)) + -t59) + t7 * t116) + t18 * t117;
  t312 = (((t125 + -(t45 * t117)) + -t37) + t46 * t117) + t18 * t116;
  t46 = t9 * 1.4142135623730951 * t81 * t82 * t97 * t109;
  t88 = t86 * t82 * t97 * t109;
  t314_tmp = t88 * t116;
  b_t314_tmp = t46 * t117;
  t314 = ((t314_tmp * 1.5 + b_t314_tmp * 1.5) + t315 * t121 / 4.0) + t50 * t121 /
    4.0;
  t18 = t9 * 1.4142135623730951 * t82;
  t51 = t9 * 1.4142135623730951 * t84 * t97 * t109;
  t59 = t18 * t84 * t95 * t110;
  t317 = (((t127 + -(t51 * t117 * 1.5)) + t59 * t117 * 0.75) + -t207) + t260;
  t47 = t9 * 1.4142135623730951 * t83 * t97 * t109;
  t79 = t18 * t83 * t95 * t110;
  t318 = (((t126 + -(t47 * t116 * 1.5)) + -t208) + t79 * t116 * 0.75) + t261;
  t320_tmp = 1.4142135623730951 * t17 * t81 * t82 * t97 * t109;
  b_t320_tmp = t219_tmp_tmp_tmp * t82 * t97 * t109;
  c_t320_tmp = b_t320_tmp * t116;
  d_t320_tmp = t320_tmp * t117;
  t320 = ((c_t320_tmp * 1.5 + d_t320_tmp * 1.5) + t315 * t122 / 4.0) + t50 *
    t122 / 4.0;
  t18 = 1.4142135623730951 * t17 * t82;
  t37 = 1.4142135623730951 * t17 * t83 * t97 * t109;
  t321_tmp = t18 * t83 * t95 * t110;
  t321 = (((t128 + -(t37 * t116 * 1.5)) + -t220) + t321_tmp * t116 * 0.75) +
    t265;
  t30 = 1.4142135623730951 * t17 * t84 * t97 * t109;
  t45 = t18 * t84 * t95 * t110;
  t324 = (((t129 + -(t30 * t117 * 1.5)) + -t219) + t45 * t117 * 0.75) + t264;
  t18 = t2 * 1.4142135623730951 * t82;
  t326_tmp = t2 * 1.4142135623730951 * t83 * t97 * t109;
  t83 = t18 * t83 * t95 * t110;
  t326 = (((t130 + -(t326_tmp * t116)) + t83 * t116 / 2.0) + -t234) + t269;
  t17 = t2 * 1.4142135623730951 * t84 * t97 * t109;
  t18 = t18 * t84 * t95 * t110;
  t84 = (((t131 + -(t17 * t117)) + t18 * t117 / 2.0) + -t233) + t268;
  t2 = ((t240 + t244) + t315 * t123 / 4.0) + t50 * t123 / 4.0;
  t296 = t9 * t134 / 4.0 + -(t9 * t133 / 4.0);
  t297 = t10 * t134 / 4.0 + -(t10 * t133 / 4.0);
  t299 = t77 * t133 / 2.0 + -(t77 * t134 / 2.0);
  t301 = t78 * t133 / 2.0 + -(t78 * t134 / 2.0);
  t110 = t85 * t133 / 2.0 + -(t85 * t134 / 2.0);
  t95 = t92 * t133 / 2.0 + -(t92 * t134 / 2.0);
  t134 = t93 * t133 / 2.0 + -(t93 * t134 / 2.0);
  t8 = t313 * t116;
  t7 = t308_tmp_tmp * t117;
  t313 = ((t192 + -(t191_tmp * t117)) + t8 * t120 / 4.0) + -(t7 * t120 / 4.0);
  t80 = t88 * t117;
  t219_tmp_tmp_tmp = t46 * t116;
  t315 = ((t219_tmp_tmp_tmp * 1.5 + -(t80 * 1.5)) + t8 * t121 / 4.0) + -(t7 *
    t121 / 4.0);
  t125 = (((t127 + -(t47 * t117 * 1.5)) + t207) + t79 * t117 * 0.75) + -t260;
  t124 = (((t126 + -(t51 * t116 * 1.5)) + t208) + t59 * t116 * 0.75) + -t261;
  t86 = (((t128 + -(t30 * t116 * 1.5)) + t220) + t45 * t116 * 0.75) + -t265;
  t59 = (((t129 + -(t37 * t117 * 1.5)) + t219) + t321_tmp * t117 * 0.75) + -t264;
  t51 = b_t320_tmp * t117;
  t50 = t320_tmp * t116;
  t37 = ((t50 * 1.5 + -(t51 * 1.5)) + t8 * t122 / 4.0) + -(t7 * t122 / 4.0);
  t88 = (((t130 + -(t17 * t116)) + t234) + t18 * t116 / 2.0) + -t269;
  t18 = (((t131 + -(t326_tmp * t117)) + t233) + t83 * t117 / 2.0) + -t268;
  t45 = ((t241 + -t243) + t8 * t123 / 4.0) + -(t7 * t123 / 4.0);
  out2[0] = 0.0;
  out2[1] = 0.0;
  out2[2] = 0.0;
  t46 = 1.4142135623730951 * t85 * t107;
  t79 = 1.4142135623730951 * t107 * t116;
  t30 = 1.4142135623730951 * t107 * t117;
  t47 = t46 * t116;
  t46 *= t117;
  out2[3] = ((t79 * t302 + t30 * t110) - t47 * t292 / 2.0) - t46 * t293 / 2.0;
  out2[4] = ((t79 * t110 - t30 * t302) - t47 * t293 / 2.0) + t46 * t292 / 2.0;
  t46 = t85 * t103_tmp;
  out2[5] = ((t292 * t302 + t293 * t110) + t46 * t118) + t46 * t119;
  out2[6] = 0.0;
  out2[7] = 0.0;
  out2[8] = 0.0;
  t46 = 1.4142135623730951 * t92 * t107;
  t47 = t46 * t116;
  t46 *= t117;
  t8 = -1.4142135623730951 * t107 * t116;
  out2[9] = ((t8 * t304 - t30 * t95) + t47 * t292 / 2.0) + t46 * t293 / 2.0;
  out2[10] = ((t30 * t304 - t79 * t95) + t47 * t293 / 2.0) - t46 * t292 / 2.0;
  t46 = t92 * t103_tmp;
  out2[11] = ((-t292 * t304 - t293 * t95) - t46 * t118) - t46 * t119;
  out2[12] = 0.0;
  out2[13] = 0.0;
  out2[14] = 0.0;
  t46 = 1.4142135623730951 * t93 * t107;
  t47 = t46 * t116;
  t46 *= t117;
  out2[15] = ((t79 * t305 + t30 * t134) - t47 * t292 / 2.0) - t46 * t293 / 2.0;
  t7 = -1.4142135623730951 * t107 * t117;
  out2[16] = ((t7 * t305 + t79 * t134) - t47 * t293 / 2.0) + t46 * t292 / 2.0;
  t46 = t93 * t103_tmp;
  out2[17] = ((t292 * t305 + t293 * t134) + t46 * t118) + t46 * t119;
  out2[18] = t75;
  out2[19] = 0.0;
  out2[20] = 0.0;
  out2[21] = ((t240 * t293 * -0.5 + t243 * t292 / 2.0) + t30 * t326) + t79 * t18;
  out2[22] = ((t240 * t292 / 2.0 + t243 * t293 / 2.0) + t79 * t326) - t30 * t18;
  out2[23] = t293 * t326 + t292 * t18;
  out2[24] = t70;
  out2[25] = 0.0;
  out2[26] = 0.0;
  out2[27] = ((t30 * t321 + t79 * t59) - c_t320_tmp * t293 * 0.75) + t51 * t292 *
    0.75;
  out2[28] = ((t79 * t321 - t30 * t59) + c_t320_tmp * t292 * 0.75) + t51 * t293 *
    0.75;
  out2[29] = t293 * t321 + t292 * t59;
  out2[30] = 0.0;
  out2[31] = t75;
  out2[32] = 0.0;
  out2[33] = ((t241 * t293 * -0.5 + t244 * t292 / 2.0) - t79 * t88) + t30 * t84;
  out2[34] = ((t241 * t292 / 2.0 + t244 * t293 / 2.0) + t30 * t88) + t79 * t84;
  out2[35] = -t292 * t88 + t293 * t84;
  out2[36] = 0.0;
  out2[37] = t70;
  out2[38] = 0.0;
  out2[39] = ((t8 * t86 + t30 * t324) - t50 * t293 * 0.75) + d_t320_tmp * t292 *
    0.75;
  out2[40] = ((t30 * t86 + t79 * t324) + t50 * t292 * 0.75) + d_t320_tmp * t293 *
    0.75;
  out2[41] = -t292 * t86 + t293 * t324;
  out2[42] = 0.0;
  out2[43] = 0.0;
  out2[44] = t75;
  t18 = 1.4142135623730951 * t109 * t116;
  t46 = t18 * t123;
  t88 = 1.4142135623730951 * t109 * t117;
  t47 = t88 * t123;
  out2[45] = ((t79 * t45 - t30 * t2) + t46 * t293 / 4.0) - t47 * t292 / 4.0;
  out2[46] = ((t8 * t2 - t30 * t45) - t46 * t292 / 4.0) - t47 * t293 / 4.0;
  out2[47] = t292 * t45 - t293 * t2;
  out2[48] = 0.0;
  out2[49] = 0.0;
  out2[50] = t70;
  t46 = t18 * t122;
  t47 = t88 * t122;
  out2[51] = ((t7 * t320 + t79 * t37) + t46 * t293 / 4.0) - t47 * t292 / 4.0;
  out2[52] = ((t8 * t320 - t30 * t37) - t46 * t292 / 4.0) - t47 * t293 / 4.0;
  out2[53] = -t293 * t320 + t292 * t37;
  out2[54] = 0.0;
  out2[55] = 0.0;
  out2[56] = 0.0;
  t46 = 1.4142135623730951 * t78 * t107;
  t47 = t46 * t116;
  t46 *= t117;
  out2[57] = ((t79 * t300 + t30 * t301) - t47 * t292 / 2.0) - t46 * t293 / 2.0;
  out2[58] = ((t79 * t301 - t30 * t300) - t47 * t293 / 2.0) + t46 * t292 / 2.0;
  t46 = t78 * t103_tmp;
  out2[59] = ((t292 * t300 + t293 * t301) + t46 * t118) + t46 * t119;
  out2[60] = 0.0;
  out2[61] = 0.0;
  out2[62] = 0.0;
  t46 = 1.4142135623730951 * t77 * t107;
  t47 = t46 * t116;
  t46 *= t117;
  out2[63] = ((t79 * t298 + t30 * t299) - t47 * t292 / 2.0) - t46 * t293 / 2.0;
  out2[64] = ((t79 * t299 - t30 * t298) - t47 * t293 / 2.0) + t46 * t292 / 2.0;
  t46 = t77 * t103_tmp;
  out2[65] = ((t292 * t298 + t293 * t299) + t46 * t118) + t46 * t119;
  out2[66] = t9;
  out2[67] = 0.0;
  out2[68] = 0.0;
  t46 = t311_tmp_tmp * t82 * t97 * t109;
  t47 = t46 * t117;
  out2[69] = ((t191 * t293 * -0.5 + t79 * t310) + t30 * t311) + t47 * t292;
  out2[70] = ((t79 * t311 - t30 * t310) + t46 * t116 * t292) + t47 * t293;
  out2[71] = t292 * t310 + t293 * t311;
  out2[72] = t10;
  out2[73] = 0.0;
  out2[74] = 0.0;
  out2[75] = ((t79 * t125 + t30 * t318) - t314_tmp * t293 * 0.75) + t80 * t292 *
    0.75;
  out2[76] = ((t7 * t125 + t79 * t318) + t314_tmp * t292 * 0.75) + t80 * t293 *
    0.75;
  out2[77] = t292 * t125 + t293 * t318;
  out2[78] = 0.0;
  out2[79] = t9;
  out2[80] = 0.0;
  t46 = 1.4142135623730951 * t23 * t81 * t82 * t97 * t109;
  t47 = t46 * t117;
  out2[81] = ((t192 * t293 * -0.5 - t79 * t309) + t30 * t312) + t47 * t292;
  out2[82] = ((t30 * t309 + t79 * t312) + t46 * t116 * t292) + t47 * t293;
  out2[83] = -t292 * t309 + t293 * t312;
  out2[84] = 0.0;
  out2[85] = t10;
  out2[86] = 0.0;
  out2[87] = ((t30 * t317 - t79 * t124) - t219_tmp_tmp_tmp * t293 * 0.75) +
    b_t314_tmp * t292 * 0.75;
  out2[88] = ((t79 * t317 + t30 * t124) + t219_tmp_tmp_tmp * t292 * 0.75) +
    b_t314_tmp * t293 * 0.75;
  out2[89] = t293 * t317 - t292 * t124;
  out2[90] = 0.0;
  out2[91] = 0.0;
  out2[92] = t9;
  t46 = t18 * t120;
  t47 = t88 * t120;
  out2[93] = ((t7 * t308 + t79 * t313) + t46 * t293 / 4.0) - t47 * t292 / 4.0;
  out2[94] = ((t8 * t308 - t30 * t313) - t46 * t292 / 4.0) - t47 * t293 / 4.0;
  out2[95] = -t293 * t308 + t292 * t313;
  out2[96] = 0.0;
  out2[97] = 0.0;
  out2[98] = t10;
  t46 = t18 * t121;
  t47 = t88 * t121;
  out2[99] = ((t79 * t315 - t30 * t314) + t46 * t293 / 4.0) - t47 * t292 / 4.0;
  out2[100] = ((t8 * t314 - t30 * t315) - t46 * t292 / 4.0) - t47 * t293 / 4.0;
  out2[101] = t292 * t315 - t293 * t314;
  out2[102] = 0.0;
  out2[103] = 0.0;
  out2[104] = 0.0;
  t46 = t9 * 1.4142135623730951 * t107;
  t47 = t46 * t116;
  t46 *= t117;
  out2[105] = ((t79 * t294 - t30 * t296) - t47 * t292 / 4.0) - t46 * t293 / 4.0;
  out2[106] = ((t7 * t294 - t79 * t296) - t47 * t293 / 4.0) + t46 * t292 / 4.0;
  t46 = t9 * t103_tmp;
  out2[107] = ((t292 * t294 - t293 * t296) + t46 * t118 / 2.0) + t46 * t119 /
    2.0;
  out2[108] = 0.0;
  out2[109] = 0.0;
  out2[110] = 0.0;
  t46 = t10 * 1.4142135623730951 * t107;
  t47 = t46 * t116;
  t46 *= t117;
  out2[111] = ((t79 * t295 - t30 * t297) - t47 * t292 / 4.0) - t46 * t293 / 4.0;
  out2[112] = ((t7 * t295 - t79 * t297) - t47 * t293 / 4.0) + t46 * t292 / 4.0;
  t46 = t10 * t103_tmp;
  out2[113] = ((t292 * t295 - t293 * t297) + t46 * t118 / 2.0) + t46 * t119 /
    2.0;
  memset(&out2[114], 0, 30U * sizeof(real_T));
  memset(&out3[0], 0, 144U * sizeof(real_T));
  out4[0] = in1[32];
  out4[1] = in1[33];
  out4[2] = in1[34];
  out4[3] = 0.0;
  out4[4] = 0.0;
  out4[5] = 0.0;
}

/* End of code generation (massF3.c) */
