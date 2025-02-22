function [out1,out2] = loadsF1(in1,in2,s)
%LOADSF1
%    [OUT1,OUT2] = LOADSF1(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    16-Jan-2019 11:57:00

f_tx_sym = in1(:,28);
f_ty_sym = in1(:,29);
f_tz_sym = in1(:,30);
l_f_sym = in1(:,17);
q4 = in2(:,4);
q5 = in2(:,5);
q6 = in2(:,6);
tau_tx_sym = in1(:,31);
tau_ty_sym = in1(:,32);
tau_tz_sym = in1(:,33);
t2 = q6.*(1.0./2.0);
t3 = q4.*(1.0./2.0);
t4 = q5.*(1.0./2.0);
t5 = cos(t4);
t6 = cos(t2);
t7 = sin(t3);
t8 = cos(t3);
t9 = sin(t4);
t10 = sin(t2);
t11 = t5.*t8.*t10;
t12 = t6.*t7.*t9;
t13 = t11+t12;
t14 = t5.*t6.*t8.*(1.0./2.0);
t15 = t5.*t6.*t7;
t16 = t8.*t9.*t10;
t17 = t15+t16;
t18 = t5.*t7.*t10.*(1.0./2.0);
t29 = t6.*t8.*t9.*(1.0./2.0);
t19 = t18-t29;
t20 = t5.*t7.*t10;
t21 = t5.*t6.*t7.*(1.0./2.0);
t22 = t8.*t9.*t10.*(1.0./2.0);
t23 = t21+t22;
t30 = t6.*t8.*t9;
t24 = t20-t30;
t25 = t5.*t6.*t8;
t26 = t5.*t8.*t10.*(1.0./2.0);
t27 = t6.*t7.*t9.*(1.0./2.0);
t28 = t26+t27;
t33 = t7.*t9.*t10;
t31 = t25-t33;
t34 = t7.*t9.*t10.*(1.0./2.0);
t32 = t14-t34;
t35 = t26-t27;
t36 = t21-t22;
t37 = t18+t29;
t38 = t14+t34;
t39 = l_f_sym.*t13.*t32.*2.0;
t40 = l_f_sym.*t28.*t31.*2.0;
t41 = t17.*t23.*2.0;
t42 = (t14-t34).*(t25-t33).*2.0;
t43 = t13.*t23.*2.0;
t44 = t17.*t28.*2.0;
out1 = reshape([1.0,0.0,0.0,l_f_sym.*t13.*t23.*-2.0-l_f_sym.*t17.*t28.*2.0-l_f_sym.*t19.*t31.*2.0-l_f_sym.*t24.*t32.*2.0,l_f_sym.*t13.*t37.*-2.0+l_f_sym.*t17.*t38.*2.0-l_f_sym.*t24.*t35.*2.0+l_f_sym.*t36.*(t25-t33).*2.0,l_f_sym.*(t18-t29).*(t20-t30).*2.0+l_f_sym.*(t14-t34).*(t25-t33).*2.0-l_f_sym.*t17.*t23.*2.0-l_f_sym.*t13.*t28.*2.0,0.0,1.0,0.0,t39+t40-l_f_sym.*t17.*t19.*2.0-l_f_sym.*t23.*t24.*2.0,l_f_sym.*t13.*t35.*2.0+l_f_sym.*t17.*t36.*2.0-l_f_sym.*t24.*t37.*2.0-l_f_sym.*t31.*t38.*2.0,l_f_sym.*t13.*t19.*-2.0-l_f_sym.*t24.*t28.*2.0+l_f_sym.*t17.*(t14-t34).*2.0+l_f_sym.*t23.*(t25-t33).*2.0,0.0,0.0,1.0,l_f_sym.*t17.*t32.*2.0-l_f_sym.*t24.*t28.*2.0-l_f_sym.*t23.*t31.*2.0+l_f_sym.*t13.*(t18-t29).*2.0,l_f_sym.*t13.*t36.*-2.0+l_f_sym.*t17.*t35.*2.0-l_f_sym.*t31.*t37.*2.0+l_f_sym.*t38.*(t20-t30).*2.0,-t39-t40-l_f_sym.*t17.*t19.*2.0-l_f_sym.*t23.*t24.*2.0,0.0,0.0,0.0,t17.*t19.*-2.0-t13.*t32.*2.0-t23.*t24.*2.0-t28.*t31.*2.0,t13.*t35.*-2.0+t17.*t36.*2.0-t24.*t37.*2.0+t38.*(t25-t33).*2.0,t24.*t28.*-2.0-t23.*t31.*2.0+t13.*(t18-t29).*2.0+t17.*(t14-t34).*2.0,0.0,0.0,0.0,t43+t44-t19.*t31.*2.0-t24.*t32.*2.0,t13.*t37.*2.0-t17.*t38.*2.0-t24.*t35.*2.0+t36.*(t25-t33).*2.0,t41+t42+t13.*t28.*2.0+(t18-t29).*(t20-t30).*2.0,0.0,0.0,0.0,t41+t42-t13.*t28.*2.0-t19.*t24.*2.0,t13.*t38.*2.0+t17.*t37.*2.0+t36.*(t20-t30).*2.0+t35.*(t25-t33).*2.0,-t43+t44-t19.*t31.*2.0+(t14-t34).*(t20-t30).*2.0],[6,6]);
if nargout > 1
    t45 = -t20+t30;
    t46 = -t25+t33;
    t47 = t45.*tau_tx_sym;
    t48 = t13.*tau_ty_sym;
    t49 = t17.*tau_tz_sym;
    t50 = t47+t48+t49;
    t51 = t46.*tau_tx_sym;
    t52 = t13.*tau_tz_sym;
    t56 = t17.*tau_ty_sym;
    t53 = t51+t52-t56;
    t54 = t13.*tau_tx_sym;
    t55 = t45.*tau_tz_sym;
    t57 = t17.*tau_tx_sym;
    t58 = t46.*tau_ty_sym;
    t59 = -t55+t57+t58;
    t60 = t45.*tau_ty_sym;
    t61 = t46.*tau_tz_sym;
    t62 = -t54+t60+t61;
    out2 = [f_tx_sym;f_ty_sym;f_tz_sym;t17.*(t55-t17.*tau_tx_sym+t31.*tau_ty_sym)-t13.*(t54+t31.*tau_tz_sym-t45.*tau_ty_sym)+t45.*t50+t46.*t53;t13.*t50+t17.*t53+t46.*t59-t45.*t62;-t13.*t53+t17.*t50+t45.*t59+t46.*t62];
end
