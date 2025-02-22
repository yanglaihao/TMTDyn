/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * cnstF3.c
 *
 * Code generation for function 'cnstF3'
 *
 */

/* Include files */
#include <string.h>
#include "mwmathutil.h"
#include "rt_nonfinite.h"
#include "cnstF3.h"

/* Function Definitions */
void cnstF3(const real_T in1[6], const real_T in2[224], real_T s, real_T out1
            [106], real_T out2[106], real_T *out3)
{
  real_T t2;
  real_T t3;
  real_T t7;
  real_T t10;
  real_T t13;
  real_T t16;
  (void)in1;
  (void)s;

  /* CNSTF3 */
  /*     [OUT1,OUT2,OUT3] = CNSTF3(IN1,IN2,S) */
  /*     This function was generated by the Symbolic Math Toolbox version 8.2. */
  /*     06-Jul-2019 09:16:40 */
  t2 = in2[105] / 2.0;
  t3 = muDoubleScalarCos(t2);
  t2 = muDoubleScalarSin(t2);
  t7 = t3 * 0.03 - t2 * 0.038;
  t10 = t3 * 0.015 - t2 * 0.019;
  t13 = t3 * 0.038 + t2 * 0.03;
  t16 = t3 * 0.019 + t2 * 0.015;
  memset(&out1[0], 0, 86U * sizeof(real_T));
  out1[86] = 1.0;
  memset(&out1[87], 0, 18U * sizeof(real_T));
  out1[105] = ((t2 * t7 * -0.5 - t2 * t10) - t3 * t13 / 2.0) - t3 * t16;
  memset(&out2[0], 0, 105U * sizeof(real_T));
  out2[105] = -in2[217] * (((((t3 * t7 / 4.0 + t3 * t10) - t2 * t13 / 4.0) - t2 *
    t16) + t3 * (t3 * 0.0075 - t2 * 0.0095)) - t2 * (t3 * 0.0095 + t2 * 0.0075));
  *out3 = 0.0;
}

/* End of code generation (cnstF3.c) */
