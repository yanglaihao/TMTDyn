function [out1,out2,out3,out4,out5,out6,out7] = sprdmpF3(in1,in2,s,ds,t_sym)
%SPRDMPF3
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7] = SPRDMPF3(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    10-Mar-2021 20:34:41

q3 = in2(3,:);
out1 = [0.0;0.0;1.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0];
if nargout > 1
    out2 = 0.0;
end
if nargout > 2
    out3 = 0.0;
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
if nargout > 6
    out7 = q3;
end
