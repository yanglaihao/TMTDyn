/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sprdmpF27.c
 *
 * Code generation for function 'sprdmpF27'
 *
 */

/* Include files */
#include "sprdmpF27.h"
#include "EOM_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo we_emlrtRSI = { 85, /* lineNo */
  "sprdmpF27",                         /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\Tutorial\\eom\\sprdmpF27.m"/* pathName */
};

static emlrtRSInfo ff_emlrtRSI = { 154,/* lineNo */
  "sprdmpF27",                         /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\Tutorial\\eom\\sprdmpF27.m"/* pathName */
};

static emlrtRSInfo gf_emlrtRSI = { 155,/* lineNo */
  "sprdmpF27",                         /* fcnName */
  "C:\\Users\\customer\\MEGAsync\\Hadi\\TMTDyn\\Code\\TMTDyn_beta\\Tutorial\\eom\\sprdmpF27.m"/* pathName */
};

/* Function Definitions */
void sprdmpF27(const emlrtStack *sp, const real_T in1[34], const real_T in2[48],
               real_T out1[144], real_T out2[6], real_T out3[6], real_T out4[6],
               real_T *out6)
{
  emlrtStack st;
  real_T t10;
  real_T t100;
  real_T t101;
  real_T t109;
  real_T t11;
  real_T t111;
  real_T t112;
  real_T t113;
  real_T t114;
  real_T t115;
  real_T t116;
  real_T t117;
  real_T t12;
  real_T t121;
  real_T t122;
  real_T t123;
  real_T t13;
  real_T t139;
  real_T t140;
  real_T t141;
  real_T t142;
  real_T t143;
  real_T t144;
  real_T t145;
  real_T t146;
  real_T t147;
  real_T t154;
  real_T t157;
  real_T t158;
  real_T t159;
  real_T t160;
  real_T t161;
  real_T t162;
  real_T t18;
  real_T t182;
  real_T t183;
  real_T t185;
  real_T t189;
  real_T t190;
  real_T t191;
  real_T t198;
  real_T t199;
  real_T t20;
  real_T t200;
  real_T t205;
  real_T t206;
  real_T t207;
  real_T t208;
  real_T t209;
  real_T t21;
  real_T t210;
  real_T t211;
  real_T t218;
  real_T t218_tmp;
  real_T t219;
  real_T t219_tmp;
  real_T t220;
  real_T t224;
  real_T t225;
  real_T t226;
  real_T t233;
  real_T t234;
  real_T t235;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t29;
  real_T t4;
  real_T t40;
  real_T t41;
  real_T t42;
  real_T t43;
  real_T t45;
  real_T t46;
  real_T t47;
  real_T t49;
  real_T t5;
  real_T t51;
  real_T t53;
  real_T t59;
  real_T t6;
  real_T t60;
  real_T t61;
  real_T t62;
  real_T t63;
  real_T t64;
  real_T t65;
  real_T t67;
  real_T t68;
  real_T t69;
  real_T t7;
  real_T t70;
  real_T t71;
  real_T t72;
  real_T t73;
  real_T t74;
  real_T t75;
  real_T t76;
  real_T t8;
  real_T t9;
  real_T t99;
  st.prev = sp;
  st.tls = sp->tls;

  /* SPRDMPF27 */
  /*     [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6] = SPRDMPF27(IN1,IN2,S,DS,T_SYM) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.6. */
  /*     26-Feb-2021 21:07:23 */
  t117 = muDoubleScalarCos(in1[20]);
  t116 = muDoubleScalarSin(in1[20]);
  t4 = in1[33] * in1[33];
  t5 = in2[9] * 2.0;
  t6 = in2[10] * 2.0;
  t7 = in2[11] * 2.0;
  t8 = in2[15] * 2.0;
  t9 = in2[16] * 2.0;
  t10 = in2[17] * 2.0;
  t11 = in2[9] * in2[9];
  t12 = in2[10] * in2[10];
  t13 = in2[11] * in2[11];
  t18 = in1[18] * in1[18];
  t20 = in1[2] * in1[2];
  t21 = in1[3] * in1[3];
  t29 = 1.0 / in1[33];
  t45 = in2[9] * in2[10] * -2.0;
  t46 = in2[9] * in2[11] * -2.0;
  t47 = in2[10] * in2[11] * -2.0;
  st.site = &we_emlrtRSI;
  if (in1[33] < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t65 = 1.0 / muDoubleScalarSqrt(in1[33]);
  t25 = in2[10] * t5;
  t26 = in2[11] * t5;
  t27 = in2[11] * t6;
  t40 = in2[9] * t5;
  t41 = in2[10] * t6;
  t42 = in2[11] * t7;
  t43 = 1.0 / (t116 * t116);
  t49 = t11 * -2.0;
  t51 = t12 * -2.0;
  t53 = t13 * -2.0;
  t59 = in2[6] + -in2[12];
  t60 = in2[7] + -in2[13];
  t61 = in2[8] + -in2[14];
  t62 = in2[9] + -in2[15];
  t63 = in2[10] + -in2[16];
  t64 = in2[11] + -in2[17];
  t67 = t4 * (t117 * t117);
  t68 = in2[9] * t59;
  t69 = in2[10] * t59;
  t70 = in2[9] * t60;
  t71 = in2[11] * t59;
  t72 = in2[10] * t60;
  t73 = in2[9] * t61;
  t74 = in2[11] * t60;
  t75 = in2[10] * t61;
  t76 = in2[11] * t61;
  t99 = (t40 + t41) - 1.0;
  t100 = (t40 + t42) - 1.0;
  t101 = (t41 + t42) - 1.0;
  t109 = ((-t11 + -t12) + -t13) + 1.0;
  st.site = &ff_emlrtRSI;
  if (t109 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t109 = muDoubleScalarSqrt(t109);
  t12 = ((-(in2[15] * in2[15]) + -(in2[16] * in2[16])) + -(in2[17] * in2[17])) +
    1.0;
  st.site = &gf_emlrtRSI;
  if (t12 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&st, &emlrtRTEI,
      "Coder:toolbox:ElFunDomainError", "Coder:toolbox:ElFunDomainError", 3, 4,
      4, "sqrt");
  }

  t12 = muDoubleScalarSqrt(t12);
  t113 = (t68 + t72) + t76;
  t111 = 1.0 / t109;
  t112 = 1.0 / t12;
  t114 = t109 * 2.0;
  t115 = t12 * 2.0;
  t116 = t5 * t109;
  t117 = t6 * t109;
  t11 = t7 * t109;
  t121 = in2[9] * t109 * -2.0;
  t122 = in2[10] * t109 * -2.0;
  t123 = in2[11] * t109 * -2.0;
  t142 = t59 * t109;
  t143 = t60 * t109;
  t144 = t61 * t109;
  t139 = t45 * t111;
  t140 = t46 * t111;
  t141 = t47 * t111;
  t145 = t27 + t116;
  t146 = t26 + t117;
  t147 = t25 + t11;
  t154 = t73 * t111;
  t157 = t47 + t116;
  t158 = t46 + t117;
  t159 = t45 + t11;
  t205 = (t69 + -t70) + t144;
  t206 = (t73 + -t71) + t143;
  t207 = (t74 + -t75) + t142;
  t208 = t109 + -t12;
  t160 = t5 + in2[17] * t6 * t112;
  t161 = t6 + in2[15] * t7 * t112;
  t162 = t7 + in2[16] * t5 * t112;
  t182 = t59 + t74 * t111;
  t183 = (in2[13] + -in2[7]) + t71 * t111;
  t117 = t61 + t69 * t111;
  t185 = (in2[12] + -in2[6]) + t75 * t111;
  t12 = t60 + t154;
  t13 = (in2[14] + -in2[8]) + t70 * t111;
  t4 = 1.0 / t4 * (t20 * t20 + -(t21 * t21)) + t18 * t18 * (t43 * t43) * ((t67 -
    1.0) * (t67 - 1.0)) * 6.0;
  t209 = t114 + in2[15] * t5 * t112;
  t210 = t114 + in2[16] * t6 * t112;
  t211 = t114 + in2[17] * t7 * t112;
  t218_tmp = t7 * t62;
  t218 = (t9 + t140) + t218_tmp * t111;
  t219_tmp = t5 * t63;
  t219 = (t10 + t139) + t219_tmp * t111;
  t60 = t6 * t64;
  t220 = (t8 + t141) + t60 * t111;
  t11 = in2[9] * t111;
  t224 = t11 * t207;
  t116 = in2[10] * t111;
  t225 = t116 * t206;
  t59 = in2[11] * t111;
  t226 = t59 * t205;
  t189 = in2[9] * t182;
  t190 = in2[9] * t185;
  t191 = in2[10] * t183;
  t198 = in2[10] * t12;
  t199 = in2[11] * t117;
  t200 = in2[11] * t13;
  t233 = (((((t70 + t69 * -2.0) + -t144) + in2[11] * -t68 * t111) + in2[9] * t12)
          + t109 * t13) + t11 * t206;
  t234 = (((((t75 + t74 * -2.0) + -t142) + in2[10] * -t70 * t111) + in2[10] *
           t117) + t109 * t185) + t116 * t205;
  t235 = (((((t71 + t73 * -2.0) + -t143) + in2[11] * -t75 * t111) + in2[11] *
           t182) + t109 * t183) + t59 * t207;
  t61 = (((((t73 + t71 * -2.0) + t143) + in2[10] * t68 * t111) + -(in2[9] * t13))
         + t109 * t12) + t11 * t205;
  t117 = (((((t69 + t70 * -2.0) + t144) + in2[11] * t72 * t111) + -(in2[10] *
            t185)) + t109 * t117) + t116 * t207;
  t13 = (((((t74 + t75 * -2.0) + t142) + in2[11] * t154) + -(in2[11] * t183)) +
         t109 * t182) + t59 * t206;
  out1[0] = 0.0;
  out1[1] = 0.0;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  out1[6] = t101;
  out1[7] = t45 + t123;
  out1[8] = t158;
  t11 = (-t68 + -t72) + -t76;
  out1[9] = ((t11 - t198) + t200) + t224;
  out1[10] = t117;
  out1[11] = t235;
  out1[12] = (t51 + t53) + 1.0;
  out1[13] = t147;
  out1[14] = t26 + t122;
  memset(&out1[15], 0, 15U * sizeof(real_T));
  out1[30] = t159;
  out1[31] = t100;
  out1[32] = t47 + t121;
  out1[33] = t233;
  out1[34] = ((t11 + t190) - t199) + t225;
  out1[35] = t13;
  out1[36] = t25 + t123;
  out1[37] = (t49 + t53) + 1.0;
  out1[38] = t145;
  memset(&out1[39], 0, 15U * sizeof(real_T));
  out1[54] = t46 + t122;
  out1[55] = t157;
  out1[56] = t99;
  out1[57] = t61;
  out1[58] = t234;
  out1[59] = ((t11 - t189) + t191) + t226;
  out1[60] = t146;
  out1[61] = t27 + t121;
  out1[62] = (t49 + t51) + 1.0;
  memset(&out1[63], 0, 18U * sizeof(real_T));
  out1[81] = (-t115 + t5 * t62 * t111) + t49 * t111;
  out1[82] = (-t10 + t139) + t6 * t62 * t111;
  out1[83] = t218;
  out1[84] = 0.0;
  out1[85] = 0.0;
  out1[86] = 0.0;
  out1[87] = t209;
  out1[88] = t162;
  out1[89] = -t6 + in2[17] * t5 * t112;
  memset(&out1[90], 0, 15U * sizeof(real_T));
  out1[105] = t219;
  out1[106] = (-t115 + t6 * t63 * t111) + t51 * t111;
  out1[107] = (-t8 + t141) + t7 * t63 * t111;
  out1[108] = 0.0;
  out1[109] = 0.0;
  out1[110] = 0.0;
  out1[111] = -t7 + in2[15] * t6 * t112;
  out1[112] = t210;
  out1[113] = t160;
  memset(&out1[114], 0, 15U * sizeof(real_T));
  out1[129] = (-t9 + t140) + t5 * t64 * t111;
  out1[130] = t220;
  out1[131] = (-t115 + t7 * t64 * t111) + t53 * t111;
  out1[132] = 0.0;
  out1[133] = 0.0;
  out1[134] = 0.0;
  out1[135] = t161;
  out1[136] = -t5 + in2[16] * t7 * t112;
  out1[137] = t211;
  out1[138] = 0.0;
  out1[139] = 0.0;
  out1[140] = 0.0;
  out1[141] = 0.0;
  out1[142] = 0.0;
  out1[143] = 0.0;
  t12 = in1[1] * (1.0 / in1[4]) * t29;
  t11 = t12 * (t29 * (t20 + -t21) + -(t18 * t43 * (t67 - 1.0) * 6.0)) *
    3.1415926535897931;
  out2[0] = t11 * (((in2[9] * t113 - in2[10] * t205) + in2[11] * t206) + t109 *
                   t207) * -1.3333333333333333;
  out2[1] = t11 * (((in2[10] * t113 + in2[9] * t205) - in2[11] * t207) + t109 *
                   t206) * -1.3333333333333333;
  out2[2] = t11 * ((((in1[4] / 4.0 + in2[11] * t113) - in2[9] * t206) + in2[10] *
                    t207) + t109 * t205) * -4.0;
  t11 = t12 * (t4 * 3.1415926535897931 / 4.0 - in1[19] * in1[19] * t18 * t29 *
               t43 * (t67 - 1.0) * 3.1415926535897931 * 3.0);
  t116 = in2[11] * t63;
  out2[3] = t11 * (((t116 * 2.0 - t60) + t62 * t114) - t5 * t208) * -4.0;
  t59 = in2[9] * t64;
  out2[4] = t11 * (((t59 * 2.0 - t218_tmp) + t63 * t114) - t6 * t208) * -4.0;
  t11 = in2[10] * t62;
  out2[5] = t12 * t4 * 3.1415926535897931 * (((t11 * 2.0 - t219_tmp) + t64 *
    t114) - t7 * t208) * -0.66666666666666663;
  out3[0] = -in1[5] * ((((((((t101 * in2[30] - t101 * in2[36]) - t147 * in2[31])
    + t147 * in2[37]) + t158 * in2[32]) - t158 * in2[38]) + t117 * in2[34]) +
                        t235 * in2[35]) - in2[33] * (((t113 + t198) - t200) -
    t224));
  out3[1] = -in1[6] * ((((((((t100 * in2[31] - t100 * in2[37]) - t145 * in2[32])
    + t145 * in2[38]) + t159 * in2[30]) - t159 * in2[36]) + t233 * in2[33]) +
                        t13 * in2[35]) - in2[34] * (((t113 - t190) + t199) -
    t225));
  out3[2] = -in1[7] * ((((((((t99 * in2[32] - t99 * in2[38]) - t146 * in2[30]) +
    t146 * in2[36]) + t157 * in2[31]) - t157 * in2[37]) + t61 * in2[33]) + t234 *
                        in2[34]) - in2[35] * (((t113 + t189) - t191) - t226));
  out3[3] = -in1[8] * (((((t162 * in2[40] + t209 * in2[39]) + t218 * in2[35]) -
    in2[41] * (t6 - in2[9] * in2[17] * t112 * 2.0)) - in2[34] * ((t10 + t25 *
    t111) - t11 * t111 * 2.0)) - in2[33] * ((t115 + t40 * t111) - in2[9] * t62 *
    t111 * 2.0));
  out3[4] = -in1[9] * (((((t160 * in2[41] + t210 * in2[40]) + t219 * in2[33]) -
    in2[39] * (t7 - in2[10] * in2[15] * t112 * 2.0)) - in2[35] * ((t8 + t27 *
    t111) - t116 * t111 * 2.0)) - in2[34] * ((t115 + t41 * t111) - in2[10] * t63
    * t111 * 2.0));
  out3[5] = -in1[10] * (((((t161 * in2[39] + t211 * in2[41]) + t220 * in2[34]) -
    in2[40] * (t5 - in2[11] * in2[16] * t112 * 2.0)) - in2[33] * ((t9 + t26 *
    t111) - t59 * t111 * 2.0)) - in2[35] * ((t115 + t42 * t111) - in2[11] * t64 *
    t111 * 2.0));
  out4[0] = 0.0;
  out4[1] = 0.0;
  out4[2] = -t18 * t43 * (t67 - 1.0) * 3.1415926535897931 * (((((in1[21] + in1
    [22]) + in1[23]) + in1[24]) + in1[25]) + in1[26]);
  t117 = in1[23] * in1[19] * t18 * t43 * t65 * (t67 - 1.0) * 3.1415926535897931;
  t11 = in1[24] * in1[19] * t18 * t43 * t65 * (t67 - 1.0) * 3.1415926535897931;
  t12 = in1[25] * in1[19] * t18 * t43 * t65 * (t67 - 1.0) * 3.1415926535897931;
  t13 = in1[26] * in1[19] * t18 * t43 * t65 * (t67 - 1.0) * 3.1415926535897931;
  t59 = in1[21] * in1[19] * t18 * t43 * t65;
  t116 = in1[22] * in1[19] * t18 * t43 * t65;
  out4[3] = ((((t59 * (t67 - 1.0) * 3.1415926535897931 * -0.93771626297577859 -
                t116 * (t67 - 1.0) * 3.1415926535897931 * 0.93771626297577859) +
               t117 * 0.167999098695029) + t11 * 0.76971716428074954) + t12 *
             0.76971716428074932) + t13 * 0.16799909869502891;
  out4[4] = ((((t117 * 0.9857871488499218 + t11 * 0.63838506170774523) - t12 *
               0.63838506170774545) - t13 * 0.9857871488499218) - t59 *
             8.3666002653407556 * (t67 - 1.0) * 3.1415926535897931 *
             0.041522491349480967) + t116 * 8.3666002653407556 * (t67 - 1.0) *
    3.1415926535897931 * 0.041522491349480967;
  out4[5] = 0.0;
  *out6 = 1.0;
}

/* End of code generation (sprdmpF27.c) */
