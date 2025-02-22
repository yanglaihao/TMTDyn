function [out1,out2,out3,out4,out5,out6] = sprdmpF2(in1,in2,s,ds,t_sym)
%SPRDMPF2
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6] = SPRDMPF2(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    26-Feb-2021 18:56:14

E_s_ = in1(:,2);
gamma_ = in1(:,21);
l_s_ = in1(:,5);
lambda_ = in1(:,34);
mu_y_ = in1(:,7);
mu_pow_ = in1(:,12);
q2 = in2(2,:);
r_p1_ = in1(:,19);
r_s1_ = in1(:,3);
r_s2_ = in1(:,4);
u2 = in2(14,:);
out1 = [0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t2 = 1.0./lambda_;
    out2 = (E_s_.*q2.*t2.*pi.*(t2.*(r_s1_.^2-r_s2_.^2)-r_p1_.^2.*1.0./sin(gamma_).^2.*(1.0./t2.^2.*cos(gamma_).^2-1.0).*6.0).*(2.0./3.0))./l_s_;
end
if nargout > 2
    out3 = -mu_y_.*u2.*abs(u2).^(mu_pow_-1.0);
end
if nargout > 3
    out4 = 0.0;
end
if nargout > 4
    out5 = zeros(0,0);
end
if nargout > 5
    out6 = 1.0;
end
