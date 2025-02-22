/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * loadsF1.c
 *
 * Code generation for function 'loadsF1'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "EOM_eq.h"
#include "loadsF1.h"
#include "error.h"
#include "EOM_eq_data.h"

/* Variable Definitions */
static emlrtRSInfo yc_emlrtRSI = { 22, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo ad_emlrtRSI = { 32, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo bd_emlrtRSI = { 33, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo cd_emlrtRSI = { 34, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo dd_emlrtRSI = { 36, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

static emlrtRSInfo ed_emlrtRSI = { 37, /* lineNo */
  "loadsF1",                           /* fcnName */
  "/home/hadi/Safe/MEGAsync/Hadi/TMTDyn/Code/TMTDyn/Beta/v1.0/Rods/1. STIFF-FLOP/code/loadsF1.m"/* pathName */
};

/* Function Definitions */
void loadsF1(const emlrtStack *sp, const real_T in1[34], const real_T in2[24],
             real_T out1[72], real_T out2[6])
{
  real_T t2;
  real_T t5;
  real_T t8;
  real_T t11;
  real_T t12;
  real_T t13;
  real_T t14;
  real_T t15;
  real_T t16_tmp;
  real_T t16;
  real_T t18_tmp;
  real_T t18;
  real_T t19_tmp;
  real_T t19;
  real_T t20;
  real_T t21_tmp;
  real_T t21;
  real_T t22_tmp;
  real_T t22;
  real_T t23;
  real_T t24;
  real_T t25;
  real_T t26;
  real_T t27;
  real_T t28;
  real_T t36;
  real_T t39;
  real_T t42;
  real_T out1_tmp;
  real_T b_out1_tmp;
  real_T c_out1_tmp;
  real_T d_out1_tmp;
  real_T e_out1_tmp;
  real_T f_out1_tmp;
  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;

  /* LOADSF1 */
  /*     [OUT1,OUT2] = LOADSF1(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     04-Jan-2019 15:17:24 */
  st.site = &yc_emlrtRSI;
  t2 = in1[4] * in1[4];
  t5 = in1[4] * in2[6] + in2[7] * t2;
  t8 = in1[4] * in2[8] + in2[9] * t2;
  t11 = in1[4] * in2[10] + in2[11] * t2;
  st.site = &ad_emlrtRSI;
  t12 = t5 * t5;
  st.site = &bd_emlrtRSI;
  t13 = t8 * t8;
  st.site = &cd_emlrtRSI;
  t14 = t11 * t11;
  t15 = ((-t12 - t13) - t14) + 1.0;
  st.site = &dd_emlrtRSI;
  if (t15 < 0.0) {
    b_st.site = &sb_emlrtRSI;
    b_error(&b_st);
  }

  t16_tmp = muDoubleScalarSqrt(t15);
  t16 = 1.0 / t16_tmp;
  st.site = &ed_emlrtRSI;
  t18_tmp = in1[16] * in1[4];
  t18 = t18_tmp * t11 * 2.0;
  t19_tmp = in1[4] * t5;
  t19 = t19_tmp * t8 * t16 * 2.0;
  t20 = in1[4] * t16_tmp * 2.0;
  t21_tmp = in1[16] * t2;
  t21 = t21_tmp * t11 * 2.0;
  t22_tmp = t2 * t5;
  t22 = t22_tmp * t8 * t16 * 2.0;
  t23 = t2 * t16_tmp * 2.0;
  t15 = in1[4] * t8;
  t24 = t15 * 2.0;
  t25 = t19_tmp * t11 * t16 * 2.0;
  t26 = t15 * t11 * t16 * 2.0;
  t15 = t2 * t8;
  t27 = t15 * 2.0;
  t28 = t22_tmp * t11 * t16 * 2.0;
  t15 = t15 * t11 * t16 * 2.0;
  out1[0] = t2;
  t36 = in1[4] * t2;
  out1[1] = t36;
  out1[2] = 0.0;
  out1[3] = 0.0;
  out1[4] = 0.0;
  out1[5] = 0.0;
  t39 = t18_tmp * t5;
  t42 = t39 * t8 * t16 * 2.0;
  out1[6] = t18 - t42;
  out1_tmp = t21_tmp * t5;
  b_out1_tmp = out1_tmp * t8 * t16 * 2.0;
  out1[7] = t21 - b_out1_tmp;
  c_out1_tmp = t18_tmp * t16_tmp;
  out1[8] = c_out1_tmp * 2.0 - t18_tmp * t13 * t16 * 2.0;
  d_out1_tmp = t21_tmp * t16_tmp;
  out1[9] = d_out1_tmp * 2.0 - t21_tmp * t13 * t16 * 2.0;
  e_out1_tmp = t18_tmp * t8;
  out1[10] = t39 * 2.0 - e_out1_tmp * t11 * t16 * 2.0;
  f_out1_tmp = t21_tmp * t8;
  out1[11] = out1_tmp * 2.0 - f_out1_tmp * t11 * t16 * 2.0;
  out1[12] = 0.0;
  out1[13] = 0.0;
  out1[14] = t2;
  out1[15] = t36;
  out1[16] = 0.0;
  out1[17] = 0.0;
  out1[18] = c_out1_tmp * -2.0 + t18_tmp * t12 * t16 * 2.0;
  out1[19] = d_out1_tmp * -2.0 + t21_tmp * t12 * t16 * 2.0;
  out1[20] = t18 + t42;
  out1[21] = t21 + b_out1_tmp;
  out1[22] = e_out1_tmp * 2.0 + t39 * t11 * t16 * 2.0;
  out1[23] = f_out1_tmp * 2.0 + out1_tmp * t11 * t16 * 2.0;
  out1[24] = 0.0;
  out1[25] = 0.0;
  out1[26] = 0.0;
  out1[27] = 0.0;
  out1[28] = t2;
  out1[29] = t36;
  out1[30] = t39 * -4.0;
  out1[31] = out1_tmp * -4.0;
  out1[32] = e_out1_tmp * -4.0;
  out1[33] = f_out1_tmp * -4.0;
  memset(&out1[34], 0, sizeof(real_T) << 3);
  out1[42] = t20 + in1[4] * t12 * t16 * 2.0;
  out1[43] = t23 + t2 * t12 * t16 * 2.0;
  t36 = in1[4] * t11 * 2.0;
  out1[44] = t19 + t36;
  t39 = t2 * t11 * 2.0;
  out1[45] = t22 + t39;
  out1[46] = -t24 + t25;
  out1[47] = -t27 + t28;
  out1[48] = 0.0;
  out1[49] = 0.0;
  out1[50] = 0.0;
  out1[51] = 0.0;
  out1[52] = 0.0;
  out1[53] = 0.0;
  out1[54] = t19 - t36;
  out1[55] = t22 - t39;
  out1[56] = t20 + in1[4] * t13 * t16 * 2.0;
  out1[57] = t23 + t2 * t13 * t16 * 2.0;
  t36 = t19_tmp * 2.0;
  out1[58] = t26 + t36;
  t39 = t22_tmp * 2.0;
  out1[59] = t15 + t39;
  out1[60] = 0.0;
  out1[61] = 0.0;
  out1[62] = 0.0;
  out1[63] = 0.0;
  out1[64] = 0.0;
  out1[65] = 0.0;
  out1[66] = t24 + t25;
  out1[67] = t27 + t28;
  out1[68] = t26 - t36;
  out1[69] = t15 - t39;
  out1[70] = t20 + in1[4] * t14 * t16 * 2.0;
  out1[71] = t23 + t2 * t14 * t16 * 2.0;
  t15 = (t5 * in1[30] + t8 * in1[31]) + t11 * in1[32];
  t36 = (t8 * in1[30] + t16_tmp * in1[32]) - t5 * in1[31];
  t39 = (t11 * in1[31] + t16_tmp * in1[30]) - t8 * in1[32];
  t42 = (t5 * in1[32] + t16_tmp * in1[31]) - t11 * in1[30];
  out2[0] = in1[27];
  out2[1] = in1[28];
  out2[2] = in1[29];
  out2[3] = ((t5 * t15 - t8 * t36) + t11 * t42) + t16_tmp * t39;
  out2[4] = ((t5 * t36 + t8 * t15) - t11 * t39) + t16_tmp * t42;
  out2[5] = ((t11 * t15 - t5 * t42) + t8 * t39) + t16_tmp * t36;
}

/* End of code generation (loadsF1.c) */
