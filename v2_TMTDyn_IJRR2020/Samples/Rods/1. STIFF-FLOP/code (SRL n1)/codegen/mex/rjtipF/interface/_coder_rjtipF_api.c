/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_rjtipF_api.c
 *
 * Code generation for function '_coder_rjtipF_api'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "rjtipF.h"
#include "_coder_rjtipF_api.h"
#include "rjtipF_data.h"

/* Function Declarations */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[34];
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *in2,
  const char_T *identifier))[12];
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[12];
static real_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *s, const
  char_T *identifier);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *in1, const
  char_T *identifier))[34];
static const mxArray *emlrt_marshallOut(const real_T u[12]);
static real_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[34];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[12];
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);

/* Function Definitions */
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[34]
{
  real_T (*y)[34];
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *in2,
  const char_T *identifier))[12]
{
  real_T (*y)[12];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(in2), &thisId);
  emlrtDestroyArray(&in2);
  return y;
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[12]
{
  real_T (*y)[12];
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
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
  char_T *identifier))[34]
{
  real_T (*y)[34];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(in1), &thisId);
  emlrtDestroyArray(&in1);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u[12])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv0[2] = { 0, 0 };

  static const int32_T iv1[2] = { 2, 6 };

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
  const emlrtMsgIdentifier *msgId))[34]
{
  real_T (*ret)[34];
  static const int32_T dims[2] = { 1, 34 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[34])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[12]
{
  real_T (*ret)[12];
  static const int32_T dims[2] = { 1, 12 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, dims);
  ret = (real_T (*)[12])emlrtMxGetData(src);
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

void rjtipF_api(const mxArray * const prhs[3], const mxArray *plhs[1])
{
  real_T (*r_jtip)[12];
  real_T (*in1)[34];
  real_T (*in2)[12];
  real_T s;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  r_jtip = (real_T (*)[12])mxMalloc(sizeof(real_T [12]));

  /* Marshall function inputs */
  in1 = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "in1");
  in2 = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "in2");
  s = e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "s");

  /* Invoke the target function */
  rjtipF(&st, *in1, *in2, s, *r_jtip);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*r_jtip);
}

/* End of code generation (_coder_rjtipF_api.c) */
