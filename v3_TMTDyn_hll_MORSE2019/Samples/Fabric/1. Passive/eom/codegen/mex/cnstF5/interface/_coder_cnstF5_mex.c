/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_cnstF5_mex.c
 *
 * Code generation for function '_coder_cnstF5_mex'
 *
 */

/* Include files */
#include "cnstF5.h"
#include "_coder_cnstF5_mex.h"
#include "cnstF5_terminate.h"
#include "_coder_cnstF5_api.h"
#include "cnstF5_initialize.h"
#include "cnstF5_data.h"

/* Function Declarations */
static void cnstF5_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs,
  const mxArray *prhs[3]);

/* Function Definitions */
static void cnstF5_mexFunction(int32_T nlhs, mxArray *plhs[3], int32_T nrhs,
  const mxArray *prhs[3])
{
  const mxArray *outputs[3];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 3, 4, 6,
                        "cnstF5");
  }

  if (nlhs > 3) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 6,
                        "cnstF5");
  }

  /* Call the function. */
  cnstF5_api(prhs, nlhs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);
}

void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  mexAtExit(cnstF5_atexit);

  /* Module initialization. */
  cnstF5_initialize();

  /* Dispatch the entry-point. */
  cnstF5_mexFunction(nlhs, plhs, nrhs, prhs);

  /* Module termination. */
  cnstF5_terminate();
}

emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/* End of code generation (_coder_cnstF5_mex.c) */
