/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_sprdmpF128_api.c
 *
 * Code generation for function '_coder_sprdmpF128_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "sprdmpF128.h"
#include "_coder_sprdmpF128_api.h"
#include "sprdmpF128_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[6];
static const mxArray *b_emlrt_marshallOut(const real_T u[6]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *in2,
  const char_T *identifier))[224];
static const mxArray *c_emlrt_marshallOut(const real_T u);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[224];
static const mxArray *d_emlrt_marshallOut(const real_T u[636]);
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *s, const
  char_T *identifier);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *in1, const
  char_T *identifier))[6];
static const mxArray *emlrt_marshallOut(const real_T u[636]);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[6];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[224];
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[6]
{
  real_T (*y)[6];
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u[6])
{
  const mxArray *y;
  const mxArray *m1;
  static const int32_T iv2[1] = { 0 };

  static const int32_T iv3[1] = { 6 };

  y = NULL;
  m1 = emlrtCreateNumericArray(1, iv2, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m1, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m1, iv3, 1);
  emlrtAssign(&y, m1);
  return y;
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *in2,
  const char_T *identifier))[224]
{
  real_T (*y)[224];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(in2), &thisId);
  emlrtDestroyArray(&in2);
  return y;
}
  static const mxArray *c_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m2;
  y = NULL;
  m2 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m2);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[224]
{
  real_T (*y)[224];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *d_emlrt_marshallOut(const real_T u[636])
{
  const mxArray *y;
  const mxArray *m3;
  static const int32_T iv4[2] = { 0, 0 };

  static const int32_T iv5[2] = { 6, 106 };

  y = NULL;
  m3 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m3, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m3, iv5, 2);
  emlrtAssign(&y, m3);
  return y;
}

static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *s, const
  char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = f_emlrt_marshallIn(sp, emlrtAlias(s), &thisId);
  emlrtDestroyArray(&s);
  return y;
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *in1, const
  char_T *identifier))[6]
{
  real_T (*y)[6];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(in1), &thisId);
  emlrtDestroyArray(&in1);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[636])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 106, 6 };

  y = NULL;
  m0 = emlrtCreateNumericArray(2, iv0, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, iv1, 2);
  emlrtAssign(&y, m0);
  return y;
}

static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = i_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[6]
{
  real_T (*ret)[6];
  static const int32_T dims[2] = { 1, 6 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[6])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[224]
{
  real_T (*ret)[224];
  static const int32_T dims[2] = { 1, 224 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[224])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, &dims);
  ret = *(real_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

void sprdmpF128_api(const mxArray * const prhs[3], int32_T nlhs, const mxArray
                    *plhs[8])
{
  real_T (*out1)[636];
  real_T (*out2)[6];
  real_T (*out3)[6];
  real_T (*out4)[6];
  real_T (*out6)[636];
  real_T (*out7)[636];
  real_T (*in1)[6];
  real_T (*in2)[224];
  real_T s;
  real_T out5;
  real_T out8;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  out1 = (real_T (*)[636])mxMalloc(sizeof(real_T [636]));
  out2 = (real_T (*)[6])mxMalloc(sizeof(real_T [6]));
  out3 = (real_T (*)[6])mxMalloc(sizeof(real_T [6]));
  out4 = (real_T (*)[6])mxMalloc(sizeof(real_T [6]));
  out6 = (real_T (*)[636])mxMalloc(sizeof(real_T [636]));
  out7 = (real_T (*)[636])mxMalloc(sizeof(real_T [636]));

  /* Marshall function inputs */
  in1 = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "in1");
  in2 = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "in2");
  s = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "s");

  /* Invoke the target function */
  sprdmpF128(&st, *in1, *in2, s, *out1, *out2, *out3, *out4, &out5, *out6, *out7,
             &out8);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*out1);
  if (nlhs > 1) {
    plhs[1] = b_emlrt_marshallOut(*out2);
  }

  if (nlhs > 2) {
    plhs[2] = b_emlrt_marshallOut(*out3);
  }

  if (nlhs > 3) {
    plhs[3] = b_emlrt_marshallOut(*out4);
  }

  if (nlhs > 4) {
    plhs[4] = c_emlrt_marshallOut(out5);
  }

  if (nlhs > 5) {
    plhs[5] = d_emlrt_marshallOut(*out6);
  }

  if (nlhs > 6) {
    plhs[6] = d_emlrt_marshallOut(*out7);
  }

  if (nlhs > 7) {
    plhs[7] = c_emlrt_marshallOut(out8);
  }
}

/* End of code generation (_coder_sprdmpF128_api.c) */
