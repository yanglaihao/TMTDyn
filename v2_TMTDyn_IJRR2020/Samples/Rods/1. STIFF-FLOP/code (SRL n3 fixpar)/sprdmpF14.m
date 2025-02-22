function [out1,out2,out3,out4,out5,out6,out7,out8] = sprdmpF14(in1,in2,s)
%SPRDMPF14
%    [OUT1,OUT2,OUT3,OUT4,OUT5,OUT6,OUT7,OUT8] = SPRDMPF14(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.0.
%    21-Feb-2019 08:54:00

lambda_sym = in1(:,34);
q14 = in2(:,14);
u14 = in2(:,32);
out1 = [0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;0.0;1.0;0.0;0.0;0.0;0.0];
if nargout > 1
    t2 = 1.0./lambda_sym;
    t3 = t2.*1.36e-4;
    t4 = lambda_sym.^2;
    t5 = t4.*1.672238728974578e-7;
    t6 = t3+t5-3.766722387289746e-5;
    out2 = q14.*t2.*t6.*pi.*(-4.1e6);
end
if nargout > 2
    out3 = u14.*abs(u14).*(-1.0./1.0e1);
end
if nargout > 3
    out4 = 0.0;
end
if nargout > 4
    out5 = q14;
end
if nargout > 5
    out6 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t2.*t6.*pi.*4.1e6,0.0,0.0,0.0,0.0];
end
if nargout > 6
    out7 = [0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,u14.*(-1.0./1.0e1),0.0,0.0,0.0,0.0];
end
if nargout > 7
    out8 = 1.0;
end
