function out1 = rjtipF(in1,in2,s,ds,t_sym)
%RJTIPF
%    OUT1 = RJTIPF(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    26-Feb-2021 21:20:53

l_f_ = in1(:,17);
q1 = in2(1,:);
q2 = in2(2,:);
q3 = in2(3,:);
q4 = in2(4,:);
q5 = in2(5,:);
q6 = in2(6,:);
q7 = in2(7,:);
q8 = in2(8,:);
q9 = in2(9,:);
q10 = in2(10,:);
q11 = in2(11,:);
q12 = in2(12,:);
q13 = in2(13,:);
q14 = in2(14,:);
q15 = in2(15,:);
q16 = in2(16,:);
q17 = in2(17,:);
q18 = in2(18,:);
q19 = in2(19,:);
q20 = in2(20,:);
q21 = in2(21,:);
q22 = in2(22,:);
q23 = in2(23,:);
q24 = in2(24,:);
r_f_ = in1(:,18);
t2 = q4.^2;
t3 = q5.^2;
t4 = q6.^2;
t5 = q10.^2;
t6 = q11.^2;
t7 = q12.^2;
t8 = q16.^2;
t9 = q17.^2;
t10 = q18.^2;
t11 = q22.^2;
t12 = q23.^2;
t13 = q24.^2;
t14 = -t2;
t15 = -t3;
t16 = -t4;
t17 = -t5;
t18 = -t6;
t19 = -t7;
t20 = -t8;
t21 = -t9;
t22 = -t10;
t23 = -t11;
t24 = -t12;
t25 = -t13;
t26 = t14+t15+t16+1.0;
t27 = t17+t18+t19+1.0;
t28 = t20+t21+t22+1.0;
t29 = t23+t24+t25+1.0;
t30 = sqrt(t26);
t31 = sqrt(t27);
t32 = sqrt(t28);
t33 = sqrt(t29);
out1 = reshape([q1,q7,q13,q19,q19,q2,q8,q14,q20,q20,q3,q9,q15,q21,q21,q1,q7,q13,q19,q19+l_f_.*q22.*q24.*2.0+l_f_.*q23.*t33.*2.0,q2,q8,q14,q20,q20+l_f_.*q23.*q24.*2.0-l_f_.*q22.*t33.*2.0,q3,q9,q15,q21,q21+l_f_.*t13+l_f_.*t23+l_f_.*t24-l_f_.*(t11+t12+t13-1.0),t30,t31,t32,t33,t33,q4,q10,q16,q22,q22,q5,q11,q17,q23,q23,q6,q12,q18,q24,q24,t30,t31,t32,t33,t33,q4,q10,q16,q22,q22,q5,q11,q17,q23,q23,q6,q12,q18,q24,q24,1.0./1.0e+3,1.0./1.0e+3,1.0./1.0e+3,1.0./1.0e+3,r_f_],[5,15]);
