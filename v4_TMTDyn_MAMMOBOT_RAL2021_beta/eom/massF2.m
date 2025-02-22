function [out1,out2,out3,out4] = massF2(in1,in2,s)
%MASSF2
%    [OUT1,OUT2,OUT3,OUT4] = MASSF2(IN1,IN2,S)

%    This function was generated by the Symbolic Math Toolbox version 8.3.
%    14-Oct-2020 02:39:06

dl1_sym = in1(:,43);
f_u1_sym = in1(:,46);
g_xsym = in1(:,34);
g_ysym = in1(:,35);
g_zsym = in1(:,36);
l_s1_sym = in1(:,40);
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
q26 = in2(26,:);
q27 = in2(27,:);
q28 = in2(28,:);
q29 = in2(29,:);
q30 = in2(30,:);
q31 = in2(31,:);
q32 = in2(32,:);
r_s11_sym = in1(:,9);
r_s12_sym = in1(:,10);
sigma_s1_sym = in1(:,1);
tau_u2_sym = in1(:,47);
t2 = dl1_sym.*2.0;
t3 = dl1_sym.^2;
t4 = dl1_sym.^3;
t5 = f_u1_sym.*2.0;
t6 = l_s1_sym.*2.0;
t7 = r_s11_sym.^2;
t8 = r_s12_sym.^2;
t9 = s.*2.0;
t10 = s.^2;
t11 = s.^3;
t19 = -dl1_sym;
t21 = -s;
t23 = sqrt(2.0);
t24 = dl1_sym.*2.0e+2;
t25 = f_u1_sym.*2.0e+2;
t26 = l_s1_sym.*2.0e+2;
t27 = s.*2.0e+2;
t28 = tau_u2_sym./2.0;
t32 = (dl1_sym.*q26)./2.0;
t33 = (q26.*s)./2.0;
t12 = q1.*t2;
t13 = q7.*t2;
t14 = q13.*t2;
t15 = q27.*t2;
t16 = q1.*t9;
t17 = q7.*t9;
t18 = q13.*t9;
t20 = -t2;
t22 = -t9;
t29 = -t3;
t30 = -t4;
t31 = -t8;
t34 = q2.*t3.*3.0;
t35 = q8.*t3.*3.0;
t36 = q14.*t3.*3.0;
t37 = q28.*t3.*3.0;
t38 = dl1_sym+t21;
t39 = q2.*t10.*3.0;
t40 = q8.*t10.*3.0;
t41 = q14.*t10.*3.0;
t42 = -t27;
t43 = f_u1_sym+l_s1_sym+t21;
t44 = t3./2.0;
t45 = t4./2.0;
t46 = t7./4.0;
t47 = t8./4.0;
t48 = f_u1_sym+l_s1_sym+t19;
t54 = (q27.*t10)./2.0;
t55 = (q28.*t11)./2.0;
t49 = -t44;
t50 = -t45;
t51 = dl1_sym.*t38;
t52 = q27.*t44;
t53 = q28.*t45;
t56 = t2+t22;
t57 = t38.^2;
t58 = t38.^3;
t59 = t48.^2;
t60 = t48.^3;
t61 = t2.*t38;
t62 = t43.^2;
t63 = t43.^3;
t64 = dl1_sym.*t48;
t65 = dl1_sym.*t43;
t66 = t7+t31;
t67 = t2.*t48;
t71 = t2.*t43;
t72 = t16+t39;
t73 = t17+t40;
t74 = t5+t6+t20;
t75 = t3.*t38.*3.0;
t76 = t5+t6+t22;
t80 = t19.*t43;
t82 = t3.*t48.*3.0;
t87 = t3.*t43.*3.0;
t91 = t18+t41+1.0;
t92 = q26+t15+t37;
t97 = t24+t42;
t112 = t3.*t38.*(3.0./2.0);
t115 = t3.*t48.*(3.0./2.0);
t118 = t3.*t43.*(3.0./2.0);
t131 = t46+t47;
t133 = t25+t26+t42;
t159 = t28+t33+t54+t55;
t68 = q3.*t56;
t69 = q9.*t56;
t70 = q15.*t56;
t77 = q4.*t57.*3.0;
t78 = q10.*t57.*3.0;
t79 = q16.*t57.*3.0;
t81 = t65.*-2.0;
t83 = q4.*t59.*3.0;
t84 = q10.*t59.*3.0;
t85 = q16.*t59.*3.0;
t86 = q30.*t59.*3.0;
t88 = q6.*t62.*3.0;
t89 = q12.*t62.*3.0;
t90 = q18.*t62.*3.0;
t93 = -t59;
t98 = -t87;
t99 = exp(t97);
t100 = q3.*t74;
t101 = q9.*t74;
t102 = q15.*t74;
t103 = q29.*t74;
t104 = sigma_s1_sym.*t66.*pi;
t105 = q5.*t76;
t106 = q11.*t76;
t107 = q17.*t76;
t108 = t72.^2;
t109 = t73.^2;
t110 = t59./2.0;
t111 = t60./2.0;
t113 = (q29.*t57)./2.0;
t114 = (q30.*t58)./2.0;
t119 = (q31.*t62)./2.0;
t120 = (q32.*t63)./2.0;
t121 = t91.^2;
t124 = -t118;
t132 = t29+t61;
t134 = t49+t51;
t136 = exp(t133);
t137 = t30+t75;
t138 = t43.*t59.*3.0;
t139 = t43.*t74;
t142 = t43.*t59.*(3.0./2.0);
t145 = t50+t112;
t148 = (t38.*t92)./2.0;
t151 = (t48.*t92)./2.0;
t157 = t44+t64+t80;
t160 = cos(t159);
t161 = sin(t159);
t94 = -t68;
t95 = -t69;
t96 = -t70;
t116 = q29.*t110;
t117 = q30.*t111;
t122 = -t110;
t123 = -t114;
t125 = -t120;
t126 = -t104;
t127 = -t105;
t128 = -t106;
t129 = -t107;
t130 = t99+1.0;
t140 = -t138;
t141 = t136+1.0;
t143 = -t142;
t144 = t139./2.0;
t149 = -t148;
t154 = t3+t67+t81;
t158 = t104.*t131;
t162 = t4+t82+t98;
t166 = t93+t139;
t171 = (s.*t161)./2.0;
t175 = (s.*t160)./2.0;
t182 = (t10.*t160)./2.0;
t183 = (t11.*t160)./2.0;
t184 = (t10.*t161)./2.0;
t185 = (t11.*t161)./2.0;
t188 = t86+t92+t103;
t191 = t45+t115+t124;
t194 = t108+t109+t121;
t135 = 1.0./t130;
t150 = 1.0./t141;
t163 = t60+t140;
t165 = t126.*t131;
out1 = reshape([t126,0.0,0.0,0.0,0.0,0.0,0.0,t126,0.0,0.0,0.0,0.0,0.0,0.0,t126,0.0,0.0,0.0,0.0,0.0,0.0,t165,0.0,0.0,0.0,0.0,0.0,0.0,t165,0.0,0.0,0.0,0.0,0.0,0.0,t126.*(t7./2.0+t8./2.0)],[6,6]);
if nargout > 1
    t173 = t12+t34+t77+t94;
    t174 = t13+t35+t78+t95;
    t178 = t14+t36+t79+t96+1.0;
    t179 = t111+t143;
    t187 = t122+t144;
    t196 = 1.0./t194.^2;
    t197 = 1.0./sqrt(t194);
    t200 = (t43.*t188)./2.0;
    t227 = t12+t34+t83+t88+t100+t127;
    t228 = t13+t35+t84+t89+t101+t128;
    t230 = t14+t36+t85+t90+t102+t129+1.0;
    t240 = t28+t32+t52+t53+t113+t123+t149;
    t146 = t10.*t135;
    t147 = t11.*t135;
    t155 = t57.*t135;
    t156 = t58.*t135;
    t167 = t57.*t150;
    t168 = t58.*t150;
    t169 = t62.*t150;
    t170 = t63.*t150;
    t176 = -t135.*(t3+t20.*t38);
    t180 = t173.^2;
    t181 = t174.^2;
    t186 = t178.^2;
    t189 = t135.*(t3+t20.*t38);
    t190 = -t135.*(t4-t75);
    t192 = t135.*(t4-t75);
    t193 = -t150.*(t3+t20.*t38);
    t195 = -t150.*(t4-t75);
    t198 = t197.^3;
    t199 = t135.*t160;
    t201 = t135.*t161;
    t202 = t9.*t197;
    t203 = -t200;
    t204 = t150.*t154;
    t207 = t10.*t197.*3.0;
    t208 = t135.*t175;
    t209 = t135.*t171;
    t212 = t150.*t162;
    t213 = t150.*t163;
    t222 = -t150.*(t59-t139);
    t223 = t150.*(t59-t139);
    t224 = t91.*t197;
    t233 = t227.^2;
    t234 = t228.^2;
    t238 = t230.^2;
    t241 = cos(t240);
    t242 = sin(t240);
    t152 = -t146;
    t153 = -t147;
    t164 = -t156;
    t172 = -t167;
    t177 = -t170;
    t205 = -t199;
    t206 = -t201;
    t210 = s.*t199.*(-1.0./2.0);
    t211 = s.*t201.*(-1.0./2.0);
    t214 = (t146.*t160)./2.0;
    t215 = (t147.*t160)./2.0;
    t216 = (t146.*t161)./2.0;
    t217 = (t147.*t161)./2.0;
    t225 = t224+1.0;
    t226 = t9.*t121.*t198;
    t229 = s.*t121.*t198.*-2.0;
    t232 = t10.*t121.*t198.*3.0;
    t245 = t135.*t241;
    t246 = t135.*t242;
    t249 = t150.*t241;
    t250 = t150.*t242;
    t257 = (t155.*t241)./2.0;
    t258 = (t156.*t241)./2.0;
    t259 = (t155.*t242)./2.0;
    t260 = (t156.*t242)./2.0;
    t265 = t180+t181+t186;
    t268 = (t167.*t241)./2.0;
    t269 = (t168.*t241)./2.0;
    t270 = (t167.*t242)./2.0;
    t271 = (t168.*t242)./2.0;
    t342 = t28+t32+t52+t53+t116+t117+t119+t125+t151+t203;
    t392 = t233+t234+t238;
    t218 = -t214;
    t219 = -t215;
    t220 = -t216;
    t221 = -t217;
    t231 = sqrt(t225);
    t237 = -t232;
    t247 = (s.*t246)./2.0;
    t248 = (s.*t245)./2.0;
    t251 = -t249;
    t252 = -t250;
    t253 = (s.*t249)./2.0;
    t254 = (s.*t250)./2.0;
    t261 = -t257;
    t262 = -t258;
    t263 = -t259;
    t264 = -t260;
    t266 = 1.0./t265.^2;
    t267 = t202+t229;
    t272 = -t245.*(t44+t19.*t38);
    t273 = -t246.*(t44+t19.*t38);
    t274 = t164+t168+t213;
    t275 = 1.0./sqrt(t265);
    t277 = t245.*(t44+t19.*t38);
    t278 = t246.*(t44+t19.*t38);
    t285 = t155+t172+t223;
    t286 = -t245.*(t45-t112);
    t287 = -t246.*(t45-t112);
    t288 = t245.*(t45-t112);
    t289 = t246.*(t45-t112);
    t332 = t10+t152+t189+t193+t204;
    t344 = cos(t342);
    t345 = sin(t342);
    t353 = t11+t153+t192+t195+t212;
    t393 = 1.0./t392.^2;
    t394 = 1.0./sqrt(t392);
    t235 = 1.0./t231;
    t239 = (t23.*t231)./2.0;
    t244 = t23.*t135.*t231.*(-1.0./2.0);
    t255 = -t253;
    t256 = -t254;
    t276 = t275.^3;
    t279 = t2.*t275;
    t280 = t207+t237;
    t282 = t3.*t275.*3.0;
    t283 = t251.*(t44+t19.*t38);
    t284 = t252.*(t44+t19.*t38);
    t290 = t56.*t275;
    t292 = t57.*t275.*3.0;
    t293 = t251.*(t45-t112);
    t294 = t252.*(t45-t112);
    t327 = t178.*t275;
    t383 = t150.*t344;
    t384 = t150.*t345;
    t395 = t394.^3;
    t396 = t2.*t394;
    t397 = t3.*t394.*3.0;
    t404 = t59.*t394.*3.0;
    t405 = t62.*t394.*3.0;
    t406 = t74.*t394;
    t407 = t76.*t394;
    t422 = t230.*t394;
    t236 = t235.^3;
    t243 = t135.*t239;
    t281 = s.*t23.*t197.*t235;
    t291 = t10.*t23.*t197.*t235.*(3.0./2.0);
    t295 = s.*t23.*t108.*t198.*t235;
    t296 = s.*t23.*t109.*t198.*t235;
    t297 = (t23.*t72.*t197.*t235)./2.0;
    t298 = (t23.*t73.*t197.*t235)./2.0;
    t299 = t21.*t23.*t108.*t198.*t235;
    t300 = t21.*t23.*t109.*t198.*t235;
    t302 = t10.*t23.*t108.*t198.*t235.*(3.0./2.0);
    t303 = t10.*t23.*t109.*t198.*t235.*(3.0./2.0);
    t306 = t21.*t23.*t135.*t197.*t235;
    t307 = s.*t23.*t72.*t73.*t198.*t235;
    t308 = t23.*t146.*t197.*t235.*(3.0./2.0);
    t309 = s.*t23.*t72.*t91.*t198.*t235;
    t310 = s.*t23.*t73.*t91.*t198.*t235;
    t316 = t10.*t23.*t72.*t73.*t198.*t235.*(3.0./2.0);
    t319 = t10.*t23.*t72.*t91.*t198.*t235.*(3.0./2.0);
    t320 = t10.*t23.*t72.*t91.*t198.*t235.*(3.0./4.0);
    t321 = t10.*t23.*t73.*t91.*t198.*t235.*(3.0./2.0);
    t322 = t10.*t23.*t73.*t91.*t198.*t235.*(3.0./4.0);
    t328 = t23.*t72.*t135.*t197.*t235.*(-1.0./2.0);
    t329 = t23.*t73.*t135.*t197.*t235.*(-1.0./2.0);
    t330 = t327+1.0;
    t333 = t23.*t108.*t146.*t198.*t235.*(3.0./2.0);
    t334 = t23.*t109.*t146.*t198.*t235.*(3.0./2.0);
    t336 = t2.*t186.*t276;
    t338 = dl1_sym.*t186.*t276.*-2.0;
    t340 = t3.*t186.*t276.*3.0;
    t351 = t56.*t186.*t276;
    t352 = t21.*t23.*t72.*t73.*t135.*t198.*t235;
    t354 = t57.*t186.*t276.*3.0;
    t355 = t21.*t23.*t72.*t91.*t135.*t198.*t235;
    t356 = t21.*t23.*t73.*t91.*t135.*t198.*t235;
    t365 = t23.*t72.*t73.*t146.*t198.*t235.*(3.0./2.0);
    t371 = t23.*t72.*t91.*t146.*t198.*t235.*(3.0./2.0);
    t372 = t23.*t72.*t91.*t146.*t198.*t235.*(3.0./4.0);
    t373 = t23.*t73.*t91.*t146.*t198.*t235.*(3.0./2.0);
    t374 = t23.*t73.*t91.*t146.*t198.*t235.*(3.0./4.0);
    t386 = (s.*t384)./2.0;
    t387 = (s.*t383)./2.0;
    t389 = (t23.*t235.*t267)./4.0;
    t391 = (t23.*t235.*t280)./4.0;
    t399 = t23.*t135.*t235.*t267.*(-1.0./4.0);
    t400 = t157.*t383;
    t401 = t157.*t384;
    t403 = t23.*t135.*t235.*t280.*(-1.0./4.0);
    t408 = t179.*t383;
    t409 = t179.*t384;
    t410 = t191.*t383;
    t411 = t191.*t384;
    t412 = -t383.*(t110-t144);
    t413 = -t384.*(t110-t144);
    t425 = t422+1.0;
    t428 = t2.*t238.*t395;
    t429 = dl1_sym.*t238.*t395.*-2.0;
    t431 = t3.*t238.*t395.*3.0;
    t436 = t59.*t238.*t395.*3.0;
    t437 = t62.*t238.*t395.*3.0;
    t441 = t74.*t238.*t395;
    t442 = t76.*t238.*t395;
    t593 = t160+t205+t245+t251+t383;
    t594 = t161+t206+t246+t252+t384;
    t301 = t135.*t281;
    t304 = -t302;
    t305 = -t303;
    t311 = -t308;
    t312 = t309./2.0;
    t313 = t310./2.0;
    t314 = (s.*t23.*t91.*t108.*t196.*t236)./2.0;
    t315 = (s.*t23.*t91.*t109.*t196.*t236)./2.0;
    t317 = t10.*t23.*t91.*t108.*t196.*t236.*(3.0./4.0);
    t318 = t10.*t23.*t91.*t109.*t196.*t236.*(3.0./4.0);
    t323 = t135.*t295;
    t324 = t135.*t296;
    t325 = t135.*t297;
    t326 = t135.*t298;
    t331 = (s.*t23.*t72.*t73.*t91.*t196.*t236)./2.0;
    t337 = t10.*t23.*t72.*t73.*t91.*t196.*t236.*(3.0./4.0);
    t341 = sqrt(t330);
    t343 = -t340;
    t348 = t135.*t307;
    t349 = t135.*t309;
    t350 = t135.*t310;
    t357 = -t351;
    t358 = -t354;
    t366 = s.*t23.*t91.*t108.*t135.*t196.*t236.*(-1.0./2.0);
    t367 = s.*t23.*t91.*t109.*t135.*t196.*t236.*(-1.0./2.0);
    t368 = t23.*t91.*t108.*t146.*t196.*t236.*(3.0./4.0);
    t369 = t23.*t91.*t109.*t146.*t196.*t236.*(3.0./4.0);
    t370 = -t365;
    t377 = -t371;
    t378 = -t372;
    t379 = -t373;
    t380 = -t374;
    t382 = t23.*t72.*t73.*t91.*t146.*t196.*t236.*(3.0./4.0);
    t398 = t135.*t389;
    t402 = t135.*t391;
    t414 = (t23.*t72.*t197.*t236.*t267)./4.0;
    t415 = (t23.*t73.*t197.*t236.*t267)./4.0;
    t416 = (t23.*t72.*t197.*t236.*t280)./4.0;
    t417 = (t23.*t73.*t197.*t236.*t280)./4.0;
    t420 = t23.*t72.*t135.*t197.*t236.*t267.*(-1.0./4.0);
    t421 = t23.*t73.*t135.*t197.*t236.*t267.*(-1.0./4.0);
    t426 = t23.*t72.*t135.*t197.*t236.*t280.*(-1.0./4.0);
    t427 = t23.*t73.*t135.*t197.*t236.*t280.*(-1.0./4.0);
    t430 = sqrt(t425);
    t434 = -t431;
    t435 = t279+t338;
    t439 = -t436;
    t440 = -t437;
    t443 = -t441;
    t444 = -t442;
    t586 = t262+t269+t408;
    t587 = t264+t271+t409;
    t588 = t263+t270+t413;
    t589 = t261+t268+t412;
    t601 = t396+t429;
    t606 = t175+t210+t248+t255+t387;
    t607 = t171+t211+t247+t256+t386;
    t618 = t182+t218+t277+t283+t400;
    t619 = t184+t220+t278+t284+t401;
    t620 = t185+t221+t289+t294+t411;
    t621 = t183+t219+t288+t293+t410;
    t335 = -t331;
    t339 = -t337;
    t346 = 1.0./t341;
    t359 = t135.*t312;
    t360 = t135.*t313;
    t361 = t135.*t314;
    t362 = t135.*t315;
    t363 = t349.*(-1.0./2.0);
    t364 = t350.*(-1.0./2.0);
    t375 = -t368;
    t376 = -t369;
    t381 = t135.*t331;
    t385 = (t23.*t135.*t341)./2.0;
    t388 = (t23.*t150.*t341)./2.0;
    t418 = t135.*t414;
    t419 = t135.*t415;
    t423 = t135.*t416;
    t424 = t135.*t417;
    t432 = 1.0./t430;
    t438 = t282+t343;
    t445 = t290+t357;
    t446 = t292+t358;
    t450 = (t23.*t150.*t430)./2.0;
    t605 = t397+t434;
    t608 = t404+t439;
    t609 = t405+t440;
    t610 = t407+t444;
    t611 = t406+t443;
    t347 = t346.^3;
    t390 = -t388;
    t433 = t432.^3;
    t447 = dl1_sym.*t23.*t135.*t275.*t346;
    t448 = t3.*t23.*t135.*t275.*t346.*(3.0./2.0);
    t449 = dl1_sym.*t23.*t150.*t275.*t346;
    t451 = t19.*t23.*t150.*t275.*t346;
    t452 = t3.*t23.*t150.*t275.*t346.*(3.0./2.0);
    t453 = (t23.*t135.*t290.*t346)./2.0;
    t454 = t23.*t155.*t275.*t346.*(3.0./2.0);
    t457 = (t23.*t150.*t290.*t346)./2.0;
    t458 = t23.*t167.*t275.*t346.*(3.0./2.0);
    t460 = dl1_sym.*t23.*t135.*t180.*t276.*t346;
    t461 = dl1_sym.*t23.*t135.*t181.*t276.*t346;
    t462 = (t23.*t135.*t173.*t275.*t346)./2.0;
    t463 = (t23.*t135.*t174.*t275.*t346)./2.0;
    t464 = t19.*t23.*t135.*t180.*t276.*t346;
    t465 = t19.*t23.*t135.*t181.*t276.*t346;
    t466 = (t23.*t150.*t173.*t275.*t346)./2.0;
    t467 = (t23.*t150.*t174.*t275.*t346)./2.0;
    t468 = t3.*t23.*t135.*t180.*t276.*t346.*(3.0./2.0);
    t469 = t3.*t23.*t135.*t181.*t276.*t346.*(3.0./2.0);
    t470 = dl1_sym.*t23.*t150.*t180.*t276.*t346;
    t471 = dl1_sym.*t23.*t150.*t181.*t276.*t346;
    t476 = t3.*t23.*t150.*t180.*t276.*t346.*(3.0./2.0);
    t477 = t3.*t23.*t150.*t181.*t276.*t346.*(3.0./2.0);
    t478 = (t23.*t56.*t135.*t180.*t276.*t346)./2.0;
    t479 = (t23.*t56.*t135.*t181.*t276.*t346)./2.0;
    t480 = t23.*t155.*t180.*t276.*t346.*(3.0./2.0);
    t481 = t23.*t155.*t181.*t276.*t346.*(3.0./2.0);
    t484 = (t23.*t56.*t150.*t180.*t276.*t346)./2.0;
    t485 = (t23.*t56.*t150.*t181.*t276.*t346)./2.0;
    t486 = t23.*t167.*t180.*t276.*t346.*(3.0./2.0);
    t487 = t23.*t167.*t181.*t276.*t346.*(3.0./2.0);
    t490 = dl1_sym.*t23.*t135.*t173.*t174.*t276.*t346;
    t491 = dl1_sym.*t23.*t135.*t173.*t178.*t276.*t346;
    t492 = dl1_sym.*t23.*t135.*t174.*t178.*t276.*t346;
    t497 = dl1_sym.*t23.*t150.*t173.*t174.*t276.*t346;
    t498 = t3.*t23.*t135.*t173.*t174.*t276.*t346.*(3.0./2.0);
    t501 = dl1_sym.*t23.*t150.*t173.*t178.*t276.*t346;
    t502 = dl1_sym.*t23.*t150.*t174.*t178.*t276.*t346;
    t503 = t3.*t23.*t135.*t173.*t178.*t276.*t346.*(3.0./2.0);
    t504 = t3.*t23.*t135.*t173.*t178.*t276.*t346.*(3.0./4.0);
    t505 = t3.*t23.*t135.*t174.*t178.*t276.*t346.*(3.0./2.0);
    t506 = t3.*t23.*t135.*t174.*t178.*t276.*t346.*(3.0./4.0);
    t507 = t19.*t23.*t150.*t173.*t174.*t276.*t346;
    t508 = t19.*t23.*t150.*t173.*t178.*t276.*t346;
    t509 = t19.*t23.*t150.*t174.*t178.*t276.*t346;
    t514 = (t23.*t56.*t135.*t173.*t174.*t276.*t346)./2.0;
    t515 = t23.*t155.*t173.*t174.*t276.*t346.*(3.0./2.0);
    t518 = t3.*t23.*t150.*t173.*t174.*t276.*t346.*(3.0./2.0);
    t521 = (t23.*t56.*t135.*t173.*t178.*t276.*t346)./2.0;
    t522 = (t23.*t56.*t135.*t173.*t178.*t276.*t346)./4.0;
    t523 = (t23.*t56.*t135.*t174.*t178.*t276.*t346)./2.0;
    t524 = (t23.*t56.*t135.*t174.*t178.*t276.*t346)./4.0;
    t525 = t23.*t155.*t173.*t178.*t276.*t346.*(3.0./2.0);
    t526 = t23.*t155.*t173.*t178.*t276.*t346.*(3.0./4.0);
    t527 = t23.*t155.*t174.*t178.*t276.*t346.*(3.0./2.0);
    t528 = t23.*t155.*t174.*t178.*t276.*t346.*(3.0./4.0);
    t534 = t3.*t23.*t150.*t173.*t178.*t276.*t346.*(3.0./2.0);
    t535 = t3.*t23.*t150.*t173.*t178.*t276.*t346.*(3.0./4.0);
    t536 = t3.*t23.*t150.*t174.*t178.*t276.*t346.*(3.0./2.0);
    t537 = t3.*t23.*t150.*t174.*t178.*t276.*t346.*(3.0./4.0);
    t552 = (t23.*t56.*t150.*t173.*t174.*t276.*t346)./2.0;
    t553 = t23.*t167.*t173.*t174.*t276.*t346.*(3.0./2.0);
    t559 = (t23.*t56.*t150.*t173.*t178.*t276.*t346)./2.0;
    t560 = (t23.*t56.*t150.*t173.*t178.*t276.*t346)./4.0;
    t561 = (t23.*t56.*t150.*t174.*t178.*t276.*t346)./2.0;
    t562 = (t23.*t56.*t150.*t174.*t178.*t276.*t346)./4.0;
    t564 = t23.*t167.*t173.*t178.*t276.*t346.*(3.0./2.0);
    t565 = t23.*t167.*t173.*t178.*t276.*t346.*(3.0./4.0);
    t566 = t23.*t167.*t174.*t178.*t276.*t346.*(3.0./2.0);
    t567 = t23.*t167.*t174.*t178.*t276.*t346.*(3.0./4.0);
    t590 = (t23.*t135.*t346.*t435)./4.0;
    t591 = (t23.*t135.*t346.*t438)./4.0;
    t592 = (t23.*t150.*t346.*t435)./4.0;
    t596 = (t23.*t150.*t346.*t438)./4.0;
    t598 = (t23.*t135.*t346.*t445)./4.0;
    t600 = (t23.*t135.*t346.*t446)./4.0;
    t602 = (t23.*t150.*t346.*t445)./4.0;
    t603 = (t23.*t150.*t346.*t446)./4.0;
    t612 = dl1_sym.*t23.*t150.*t394.*t432;
    t613 = t3.*t23.*t150.*t394.*t432.*(3.0./2.0);
    t614 = t23.*t59.*t150.*t394.*t432.*(3.0./2.0);
    t615 = t23.*t169.*t394.*t432.*(3.0./2.0);
    t616 = (t23.*t150.*t406.*t432)./2.0;
    t617 = (t23.*t150.*t407.*t432)./2.0;
    t622 = dl1_sym.*t23.*t150.*t233.*t395.*t432;
    t623 = dl1_sym.*t23.*t150.*t234.*t395.*t432;
    t624 = (t23.*t150.*t227.*t394.*t432)./2.0;
    t625 = (t23.*t150.*t228.*t394.*t432)./2.0;
    t626 = t19.*t23.*t150.*t233.*t395.*t432;
    t627 = t19.*t23.*t150.*t234.*t395.*t432;
    t628 = t3.*t23.*t150.*t233.*t395.*t432.*(3.0./2.0);
    t629 = t3.*t23.*t150.*t234.*t395.*t432.*(3.0./2.0);
    t632 = t23.*t59.*t150.*t233.*t395.*t432.*(3.0./2.0);
    t633 = t23.*t59.*t150.*t234.*t395.*t432.*(3.0./2.0);
    t634 = t23.*t169.*t233.*t395.*t432.*(3.0./2.0);
    t635 = t23.*t169.*t234.*t395.*t432.*(3.0./2.0);
    t640 = (t23.*t74.*t150.*t233.*t395.*t432)./2.0;
    t641 = (t23.*t74.*t150.*t234.*t395.*t432)./2.0;
    t642 = (t23.*t76.*t150.*t233.*t395.*t432)./2.0;
    t643 = (t23.*t76.*t150.*t234.*t395.*t432)./2.0;
    t672 = dl1_sym.*t23.*t150.*t227.*t228.*t395.*t432;
    t673 = dl1_sym.*t23.*t150.*t227.*t230.*t395.*t432;
    t674 = dl1_sym.*t23.*t150.*t228.*t230.*t395.*t432;
    t679 = t3.*t23.*t150.*t227.*t228.*t395.*t432.*(3.0./2.0);
    t682 = t3.*t23.*t150.*t227.*t230.*t395.*t432.*(3.0./2.0);
    t683 = t3.*t23.*t150.*t227.*t230.*t395.*t432.*(3.0./4.0);
    t684 = t3.*t23.*t150.*t228.*t230.*t395.*t432.*(3.0./2.0);
    t685 = t3.*t23.*t150.*t228.*t230.*t395.*t432.*(3.0./4.0);
    t686 = t23.*t59.*t150.*t227.*t228.*t395.*t432.*(3.0./2.0);
    t687 = t23.*t169.*t227.*t228.*t395.*t432.*(3.0./2.0);
    t688 = t23.*t59.*t150.*t227.*t230.*t395.*t432.*(3.0./2.0);
    t689 = t23.*t59.*t150.*t227.*t230.*t395.*t432.*(3.0./4.0);
    t690 = t23.*t59.*t150.*t228.*t230.*t395.*t432.*(3.0./2.0);
    t691 = t23.*t59.*t150.*t228.*t230.*t395.*t432.*(3.0./4.0);
    t692 = t23.*t169.*t227.*t230.*t395.*t432.*(3.0./2.0);
    t693 = t23.*t169.*t228.*t230.*t395.*t432.*(3.0./2.0);
    t698 = (t23.*t74.*t150.*t227.*t228.*t395.*t432)./2.0;
    t699 = (t23.*t76.*t150.*t227.*t228.*t395.*t432)./2.0;
    t705 = (t23.*t74.*t150.*t227.*t230.*t395.*t432)./2.0;
    t706 = (t23.*t74.*t150.*t227.*t230.*t395.*t432)./4.0;
    t707 = (t23.*t74.*t150.*t228.*t230.*t395.*t432)./2.0;
    t708 = (t23.*t74.*t150.*t228.*t230.*t395.*t432)./4.0;
    t709 = (t23.*t76.*t150.*t227.*t230.*t395.*t432)./2.0;
    t710 = (t23.*t76.*t150.*t228.*t230.*t395.*t432)./2.0;
    t722 = (t23.*t150.*t432.*t601)./4.0;
    t723 = (t23.*t150.*t432.*t605)./4.0;
    t724 = (t23.*t150.*t432.*t608)./4.0;
    t725 = (t23.*t150.*t432.*t611)./4.0;
    t455 = -t452;
    t456 = -t453;
    t459 = -t458;
    t472 = -t466;
    t473 = -t467;
    t474 = -t468;
    t475 = -t469;
    t482 = -t480;
    t483 = -t481;
    t488 = -t484;
    t489 = -t485;
    t493 = t491./2.0;
    t494 = t492./2.0;
    t495 = (dl1_sym.*t23.*t135.*t178.*t180.*t266.*t347)./2.0;
    t496 = (dl1_sym.*t23.*t135.*t178.*t181.*t266.*t347)./2.0;
    t499 = t3.*t23.*t135.*t178.*t180.*t266.*t347.*(3.0./4.0);
    t500 = t3.*t23.*t135.*t178.*t181.*t266.*t347.*(3.0./4.0);
    t510 = t501./2.0;
    t511 = t502./2.0;
    t512 = (dl1_sym.*t23.*t150.*t178.*t180.*t266.*t347)./2.0;
    t513 = (dl1_sym.*t23.*t150.*t178.*t181.*t266.*t347)./2.0;
    t529 = (t23.*t56.*t135.*t178.*t180.*t266.*t347)./4.0;
    t530 = (t23.*t56.*t135.*t178.*t181.*t266.*t347)./4.0;
    t531 = t23.*t155.*t178.*t180.*t266.*t347.*(3.0./4.0);
    t532 = t23.*t155.*t178.*t181.*t266.*t347.*(3.0./4.0);
    t533 = -t518;
    t538 = t3.*t23.*t150.*t178.*t180.*t266.*t347.*(3.0./4.0);
    t539 = t3.*t23.*t150.*t178.*t181.*t266.*t347.*(3.0./4.0);
    t540 = -t521;
    t541 = -t522;
    t542 = -t523;
    t543 = -t524;
    t546 = -t534;
    t547 = -t535;
    t548 = -t536;
    t549 = -t537;
    t554 = (t23.*t56.*t150.*t178.*t180.*t266.*t347)./4.0;
    t555 = (t23.*t56.*t150.*t178.*t181.*t266.*t347)./4.0;
    t556 = t23.*t167.*t178.*t180.*t266.*t347.*(3.0./4.0);
    t557 = t23.*t167.*t178.*t181.*t266.*t347.*(3.0./4.0);
    t558 = -t552;
    t563 = -t553;
    t570 = -t564;
    t571 = -t565;
    t572 = -t566;
    t573 = -t567;
    t574 = (dl1_sym.*t23.*t135.*t173.*t174.*t178.*t266.*t347)./2.0;
    t576 = t3.*t23.*t135.*t173.*t174.*t178.*t266.*t347.*(3.0./4.0);
    t578 = (dl1_sym.*t23.*t150.*t173.*t174.*t178.*t266.*t347)./2.0;
    t579 = t3.*t23.*t150.*t173.*t174.*t178.*t266.*t347.*(3.0./4.0);
    t580 = (t23.*t56.*t135.*t173.*t174.*t178.*t266.*t347)./4.0;
    t581 = t23.*t155.*t173.*t174.*t178.*t266.*t347.*(3.0./4.0);
    t584 = (t23.*t56.*t150.*t173.*t174.*t178.*t266.*t347)./4.0;
    t585 = t23.*t167.*t173.*t174.*t178.*t266.*t347.*(3.0./4.0);
    t595 = -t592;
    t597 = -t596;
    t599 = -t598;
    t604 = -t603;
    t630 = -t628;
    t631 = -t629;
    t636 = -t632;
    t637 = -t633;
    t638 = -t634;
    t639 = -t635;
    t644 = -t640;
    t645 = -t641;
    t646 = -t642;
    t647 = -t643;
    t648 = (t23.*t135.*t173.*t275.*t347.*t435)./4.0;
    t649 = (t23.*t135.*t174.*t275.*t347.*t435)./4.0;
    t650 = (t23.*t135.*t173.*t275.*t347.*t438)./4.0;
    t651 = (t23.*t135.*t174.*t275.*t347.*t438)./4.0;
    t652 = (t23.*t150.*t173.*t275.*t347.*t435)./4.0;
    t653 = (t23.*t150.*t174.*t275.*t347.*t435)./4.0;
    t656 = (t23.*t150.*t173.*t275.*t347.*t438)./4.0;
    t657 = (t23.*t150.*t174.*t275.*t347.*t438)./4.0;
    t660 = (t23.*t135.*t173.*t275.*t347.*t445)./4.0;
    t661 = (t23.*t135.*t174.*t275.*t347.*t445)./4.0;
    t664 = (t23.*t135.*t173.*t275.*t347.*t446)./4.0;
    t665 = (t23.*t135.*t174.*t275.*t347.*t446)./4.0;
    t666 = (t23.*t150.*t173.*t275.*t347.*t445)./4.0;
    t667 = (t23.*t150.*t174.*t275.*t347.*t445)./4.0;
    t668 = (t23.*t150.*t173.*t275.*t347.*t446)./4.0;
    t669 = (t23.*t150.*t174.*t275.*t347.*t446)./4.0;
    t675 = t673./2.0;
    t676 = t674./2.0;
    t677 = (dl1_sym.*t23.*t150.*t230.*t233.*t393.*t433)./2.0;
    t678 = (dl1_sym.*t23.*t150.*t230.*t234.*t393.*t433)./2.0;
    t680 = t3.*t23.*t150.*t230.*t233.*t393.*t433.*(3.0./4.0);
    t681 = t3.*t23.*t150.*t230.*t234.*t393.*t433.*(3.0./4.0);
    t694 = t23.*t59.*t150.*t230.*t233.*t393.*t433.*(3.0./4.0);
    t695 = t23.*t59.*t150.*t230.*t234.*t393.*t433.*(3.0./4.0);
    t696 = t23.*t169.*t230.*t233.*t393.*t433.*(3.0./4.0);
    t697 = t23.*t169.*t230.*t234.*t393.*t433.*(3.0./4.0);
    t700 = (t23.*t74.*t150.*t230.*t233.*t393.*t433)./4.0;
    t701 = (t23.*t74.*t150.*t230.*t234.*t393.*t433)./4.0;
    t702 = (t23.*t76.*t150.*t230.*t233.*t393.*t433)./4.0;
    t703 = (t23.*t76.*t150.*t230.*t234.*t393.*t433)./4.0;
    t704 = -t698;
    t711 = (dl1_sym.*t23.*t150.*t227.*t228.*t230.*t393.*t433)./2.0;
    t713 = t3.*t23.*t150.*t227.*t228.*t230.*t393.*t433.*(3.0./4.0);
    t715 = t23.*t59.*t150.*t227.*t228.*t230.*t393.*t433.*(3.0./4.0);
    t716 = t23.*t169.*t227.*t228.*t230.*t393.*t433.*(3.0./4.0);
    t719 = (t23.*t74.*t150.*t227.*t228.*t230.*t393.*t433)./4.0;
    t720 = (t23.*t76.*t150.*t227.*t228.*t230.*t393.*t433)./4.0;
    t726 = t239+t244+t385+t390+t450;
    t728 = (t23.*t150.*t227.*t394.*t433.*t601)./4.0;
    t729 = (t23.*t150.*t228.*t394.*t433.*t601)./4.0;
    t730 = (t23.*t150.*t227.*t394.*t433.*t605)./4.0;
    t731 = (t23.*t150.*t228.*t394.*t433.*t605)./4.0;
    t732 = (t23.*t150.*t227.*t394.*t433.*t608)./4.0;
    t733 = (t23.*t150.*t228.*t394.*t433.*t608)./4.0;
    t734 = (t23.*t150.*t227.*t394.*t433.*t609)./4.0;
    t735 = (t23.*t150.*t228.*t394.*t433.*t609)./4.0;
    t736 = (t23.*t150.*t227.*t394.*t433.*t611)./4.0;
    t737 = (t23.*t150.*t228.*t394.*t433.*t611)./4.0;
    t738 = (t23.*t150.*t227.*t394.*t433.*t610)./4.0;
    t739 = (t23.*t150.*t228.*t394.*t433.*t610)./4.0;
    t516 = -t510;
    t517 = -t511;
    t519 = -t512;
    t520 = -t513;
    t544 = -t529;
    t545 = -t530;
    t550 = -t538;
    t551 = -t539;
    t568 = -t556;
    t569 = -t557;
    t575 = -t574;
    t577 = -t576;
    t582 = -t580;
    t583 = -t581;
    t654 = -t652;
    t655 = -t653;
    t658 = -t656;
    t659 = -t657;
    t662 = -t660;
    t663 = -t661;
    t670 = -t668;
    t671 = -t669;
    t712 = -t711;
    t714 = -t713;
    t717 = -t715;
    t718 = -t716;
    t721 = -t720;
    t727 = t726.^2;
    t742 = t526+t571+t689;
    t743 = t528+t573+t691;
    t744 = t541+t560+t706;
    t745 = t543+t562+t708;
    t746 = t297+t328+t462+t472+t624;
    t747 = t298+t329+t463+t473+t625;
    t750 = t320+t378+t504+t547+t683;
    t751 = t322+t380+t506+t549+t685;
    t752 = t692+t734;
    t753 = t693+t735;
    t754 = t709+t738;
    t755 = t710+t739;
    t766 = t615+t638+t696;
    t767 = t615+t639+t697;
    t768 = t617+t646+t702;
    t769 = t617+t647+t703;
    t770 = t600+t604+t724;
    t771 = t599+t602+t725;
    t809 = t389+t399+t590+t595+t722;
    t810 = t391+t403+t591+t597+t723;
    t740 = t687+t718;
    t741 = t699+t721;
    t748 = t312+t363+t493+t516+t675;
    t749 = t313+t364+t494+t517+t676;
    t756 = (t169.*t344.*t746)./2.0;
    t757 = (t170.*t344.*t746)./2.0;
    t758 = (t169.*t344.*t747)./2.0;
    t759 = (t170.*t344.*t747)./2.0;
    t760 = (t169.*t345.*t746)./2.0;
    t761 = (t170.*t345.*t746)./2.0;
    t762 = (t169.*t345.*t747)./2.0;
    t763 = (t170.*t345.*t747)./2.0;
    t779 = t586.*t746;
    t780 = t586.*t747;
    t781 = t587.*t746;
    t782 = t587.*t747;
    t783 = -t746.*(t257-t268+t383.*(t110-t144));
    t784 = -t747.*(t257-t268+t383.*(t110-t144));
    t785 = -t746.*(t259-t270+t384.*(t110-t144));
    t786 = -t747.*(t259-t270+t384.*(t110-t144));
    t788 = t746.*(t259-t270+t384.*(t110-t144));
    t789 = t594.*t746.*2.0;
    t790 = t594.*t747.*2.0;
    t791 = t593.*t746.*2.0;
    t792 = t593.*t747.*2.0;
    t794 = t606.*t746;
    t795 = t606.*t747;
    t796 = t607.*t746;
    t797 = t607.*t747;
    t799 = t618.*t746;
    t800 = t618.*t747;
    t801 = t619.*t746;
    t802 = t619.*t747;
    t804 = t621.*t746;
    t805 = t621.*t747;
    t806 = t620.*t746;
    t807 = t620.*t747;
    t811 = t593.*t752;
    t812 = t593.*t753;
    t813 = t594.*t752;
    t814 = t594.*t753;
    t816 = t593.*t754;
    t817 = t593.*t755;
    t818 = t594.*t754;
    t819 = t594.*t755;
    t821 = t593.*t766;
    t822 = t593.*t767;
    t823 = t594.*t766;
    t824 = t594.*t767;
    t825 = t593.*t768;
    t826 = t593.*t769;
    t827 = t594.*t768;
    t828 = t594.*t769;
    t830 = t515+t563+t583+t585+t686+t717;
    t831 = t514+t558+t582+t584+t704+t719;
    t843 = t307+t335+t352+t381+t490+t507+t575+t578+t672+t712;
    t844 = t316+t339+t370+t382+t498+t533+t577+t579+t679+t714;
    t845 = t525+t570+t664+t670+t688+t732;
    t846 = t527+t572+t665+t671+t690+t733;
    t847 = t540+t559+t662+t666+t705+t736;
    t848 = t542+t561+t663+t667+t707+t737;
    t849 = t454+t459+t482+t486+t531+t568+t614+t636+t694;
    t850 = t454+t459+t483+t487+t532+t569+t614+t637+t695;
    t851 = t456+t457+t478+t488+t544+t554+t616+t644+t700;
    t852 = t456+t457+t479+t489+t545+t555+t616+t645+t701;
    t902 = t309+t355+t414+t420+t491+t508+t648+t654+t673+t728;
    t903 = t310+t356+t415+t421+t492+t509+t649+t655+t674+t729;
    t904 = t319+t377+t416+t426+t503+t546+t650+t658+t682+t730;
    t905 = t321+t379+t417+t427+t505+t548+t651+t659+t684+t731;
    t906 = t281+t299+t306+t314+t323+t366+t447+t451+t464+t470+t495+t519+t612+t626+t677;
    t907 = t281+t300+t306+t315+t324+t367+t447+t451+t465+t471+t496+t520+t612+t627+t678;
    t908 = t291+t304+t311+t317+t333+t375+t448+t455+t474+t476+t499+t550+t613+t630+t680;
    t909 = t291+t305+t311+t318+t334+t376+t448+t455+t475+t477+t500+t551+t613+t631+t681;
    t764 = -t760;
    t765 = -t761;
    t772 = t593.*t740;
    t773 = t594.*t740;
    t776 = t593.*t741;
    t777 = t594.*t741;
    t787 = -t781;
    t793 = -t792;
    t798 = -t796;
    t803 = -t801;
    t808 = -t806;
    t815 = -t813;
    t820 = -t818;
    t829 = -t828;
    t832 = t593.*t830;
    t833 = t594.*t830;
    t836 = t593.*t831;
    t837 = t594.*t831;
    t839 = t756+t762;
    t840 = t757+t763;
    t853 = t779+t782;
    t855 = t783+t786;
    t856 = t784+t788;
    t857 = t593.*t843;
    t858 = t594.*t843;
    t860 = t790+t791;
    t862 = t594.*t844;
    t863 = t593.*t844;
    t867 = t794+t797;
    t875 = t799+t802;
    t877 = t804+t807;
    t879 = t593.*t845;
    t880 = t593.*t846;
    t881 = t594.*t845;
    t882 = t594.*t846;
    t884 = t594.*t847;
    t885 = t594.*t848;
    t886 = t593.*t847;
    t887 = t593.*t848;
    t889 = t594.*t849;
    t890 = t594.*t850;
    t891 = t593.*t849;
    t892 = t593.*t850;
    t893 = t594.*t851;
    t894 = t594.*t852;
    t895 = t593.*t851;
    t896 = t593.*t852;
    t898 = t811+t814;
    t900 = t816+t819;
    t910 = t593.*t902;
    t911 = t593.*t903;
    t912 = t594.*t902;
    t913 = t594.*t903;
    t915 = t594.*t904;
    t916 = t594.*t905;
    t917 = t593.*t904;
    t918 = t593.*t905;
    t920 = t594.*t906;
    t921 = t594.*t907;
    t922 = t593.*t906;
    t923 = t593.*t907;
    t925 = t593.*t908;
    t926 = t593.*t909;
    t927 = t594.*t908;
    t928 = t594.*t909;
    t774 = -t772;
    t775 = -t773;
    t778 = -t777;
    t834 = -t832;
    t835 = -t833;
    t838 = -t836;
    t841 = t758+t764;
    t842 = t759+t765;
    t854 = t780+t787;
    t859 = -t857;
    t861 = t789+t793;
    t864 = -t863;
    t865 = t772+t823;
    t866 = t773+t822;
    t870 = t795+t798;
    t871 = t776+t827;
    t872 = t777+t826;
    t874 = t776+t829;
    t876 = t800+t803;
    t878 = t805+t808;
    t883 = -t881;
    t888 = -t887;
    t897 = -t896;
    t899 = t812+t815;
    t901 = t817+t820;
    t914 = -t912;
    t919 = -t918;
    t924 = -t922;
    t929 = -t925;
    t930 = t832+t889;
    t931 = t833+t892;
    t934 = t837+t895;
    t935 = t836+t894;
    t938 = t879+t882;
    t940 = t885+t886;
    t942 = t857+t920;
    t943 = t858+t923;
    t946 = t863+t927;
    t947 = t862+t926;
    t950 = t910+t913;
    t952 = t916+t917;
    t868 = t775+t821;
    t869 = t774+t824;
    t873 = t778+t825;
    t932 = t835+t891;
    t933 = t834+t890;
    t936 = t838+t893;
    t937 = t837+t897;
    t939 = t880+t883;
    t941 = t884+t888;
    t944 = t858+t924;
    t945 = t859+t921;
    t948 = t862+t929;
    t949 = t864+t928;
    t951 = t911+t914;
    t953 = t915+t919;
    out2 = reshape([t332,0.0,0.0,t593.*t748.*t861+t594.*t748.*t860+t593.*t726.*t942.*2.0-t594.*t726.*t944.*2.0,t593.*t748.*t860-t594.*t748.*t861-t594.*t726.*t942.*2.0-t593.*t726.*t944.*2.0,t860.*t942+t861.*t944,t353,0.0,0.0,t593.*t750.*t861+t594.*t750.*t860+t593.*t726.*t946.*2.0-t594.*t726.*t948.*2.0,t593.*t750.*t860-t594.*t750.*t861-t594.*t726.*t946.*2.0-t593.*t726.*t948.*2.0,t860.*t946+t861.*t948,t285,0.0,0.0,t593.*t744.*t861+t594.*t744.*t860+t594.*t726.*t934.*2.0-t593.*t726.*(t836-t893).*2.0,t593.*t744.*t860-t594.*t744.*t861+t593.*t726.*t934.*2.0+t594.*t726.*(t836-t893).*2.0,-t861.*t934-t860.*(t836-t893),t274,0.0,0.0,t593.*t742.*t861+t594.*t742.*t860+t593.*t726.*t930.*2.0-t594.*t726.*(t833-t891).*2.0,t593.*t742.*t860-t594.*t742.*t861-t594.*t726.*t930.*2.0-t593.*t726.*(t833-t891).*2.0,t860.*t930+t861.*(t833-t891),t169,0.0,0.0,t593.*t726.*t871.*-2.0+t594.*t726.*(t777-t825).*2.0-(t23.*t76.*t150.*t227.*t230.*t395.*t432.*t593.*t861)./4.0-(t23.*t76.*t150.*t227.*t230.*t395.*t432.*t594.*t860)./4.0,t594.*t726.*t871.*2.0+t593.*t726.*(t777-t825).*2.0-(t23.*t76.*t150.*t227.*t230.*t395.*t432.*t593.*t860)./4.0+(t23.*t76.*t150.*t227.*t230.*t395.*t432.*t594.*t861)./4.0,-t860.*t871-t861.*(t777-t825),t177,0.0,0.0,t593.*t726.*t865.*2.0-t594.*t726.*(t773-t821).*2.0+t23.*t169.*t227.*t230.*t395.*t432.*t593.*t861.*(3.0./4.0)+t23.*t169.*t227.*t230.*t395.*t432.*t594.*t860.*(3.0./4.0),t594.*t726.*t865.*-2.0-t593.*t726.*(t773-t821).*2.0+t23.*t169.*t227.*t230.*t395.*t432.*t593.*t860.*(3.0./4.0)-t23.*t169.*t227.*t230.*t395.*t432.*t594.*t861.*(3.0./4.0),t860.*t865+t861.*(t773-t821),0.0,t332,0.0,t593.*t749.*t861+t594.*t749.*t860-t593.*t726.*t943.*2.0-t594.*t726.*(t857-t921).*2.0,t593.*t749.*t860-t594.*t749.*t861+t594.*t726.*t943.*2.0-t593.*t726.*(t857-t921).*2.0,-t860.*t943+t861.*(t857-t921),0.0,t353,0.0,t593.*t751.*t861+t594.*t751.*t860-t593.*t726.*t947.*2.0-t594.*t726.*(t863-t928).*2.0,t593.*t751.*t860-t594.*t751.*t861+t594.*t726.*t947.*2.0-t593.*t726.*(t863-t928).*2.0,-t860.*t947+t861.*(t863-t928),0.0,t285,0.0,t593.*t745.*t861+t594.*t745.*t860+t594.*t726.*t935.*2.0+t593.*t726.*t937.*2.0,t593.*t745.*t860-t594.*t745.*t861+t593.*t726.*t935.*2.0-t594.*t726.*t937.*2.0,-t861.*t935+t860.*t937,0.0,t274,0.0,t593.*t743.*t861+t594.*t743.*t860-t593.*t726.*t931.*2.0-t594.*t726.*(t832-t890).*2.0,t593.*t743.*t860-t594.*t743.*t861+t594.*t726.*t931.*2.0-t593.*t726.*(t832-t890).*2.0,-t860.*t931+t861.*(t832-t890),0.0,t169,0.0,t593.*t726.*t872.*2.0+t594.*t726.*t874.*2.0-(t23.*t76.*t150.*t228.*t230.*t395.*t432.*t593.*t861)./4.0-(t23.*t76.*t150.*t228.*t230.*t395.*t432.*t594.*t860)./4.0,t594.*t726.*t872.*-2.0+t593.*t726.*t874.*2.0-(t23.*t76.*t150.*t228.*t230.*t395.*t432.*t593.*t860)./4.0+(t23.*t76.*t150.*t228.*t230.*t395.*t432.*t594.*t861)./4.0,t860.*t872-t861.*t874,0.0,t177,0.0,t593.*t726.*t866.*-2.0-t594.*t726.*(t772-t824).*2.0+t23.*t169.*t228.*t230.*t395.*t432.*t593.*t861.*(3.0./4.0)+t23.*t169.*t228.*t230.*t395.*t432.*t594.*t860.*(3.0./4.0),t594.*t726.*t866.*2.0-t593.*t726.*(t772-t824).*2.0+t23.*t169.*t228.*t230.*t395.*t432.*t593.*t860.*(3.0./4.0)-t23.*t169.*t228.*t230.*t395.*t432.*t594.*t861.*(3.0./4.0),-t860.*t866+t861.*(t772-t824),0.0,0.0,t332,-t593.*t809.*t861-t594.*t809.*t860+t593.*t726.*t951.*2.0-t594.*t726.*t950.*2.0,-t593.*t809.*t860+t594.*t809.*t861-t593.*t726.*t950.*2.0-t594.*t726.*t951.*2.0,t860.*t951+t861.*t950,0.0,0.0,t353,-t593.*t810.*t861-t594.*t810.*t860-t593.*t726.*t953.*2.0-t594.*t726.*t952.*2.0,-t593.*t810.*t860+t594.*t810.*t861-t593.*t726.*t952.*2.0+t594.*t726.*t953.*2.0,-t860.*t953+t861.*t952,0.0,0.0,t285,-t593.*t771.*t861-t594.*t771.*t860-t593.*t726.*t941.*2.0-t594.*t726.*t940.*2.0,-t593.*t771.*t860+t594.*t771.*t861-t593.*t726.*t940.*2.0+t594.*t726.*t941.*2.0,-t860.*t941+t861.*t940,0.0,0.0,t274,-t593.*t770.*t861-t594.*t770.*t860+t593.*t726.*t939.*2.0-t594.*t726.*t938.*2.0,-t593.*t770.*t860+t594.*t770.*t861-t593.*t726.*t938.*2.0-t594.*t726.*t939.*2.0,t860.*t939+t861.*t938,0.0,0.0,t169,t593.*t726.*t901.*-2.0+t594.*t726.*t900.*2.0+(t23.*t150.*t432.*t593.*t610.*t861)./4.0+(t23.*t150.*t432.*t594.*t610.*t860)./4.0,t593.*t726.*t900.*2.0+t594.*t726.*t901.*2.0+(t23.*t150.*t432.*t593.*t610.*t860)./4.0-(t23.*t150.*t432.*t594.*t610.*t861)./4.0,-t860.*t901-t861.*t900,0.0,0.0,t177,t593.*t726.*t899.*2.0-t594.*t726.*t898.*2.0-(t23.*t150.*t432.*t593.*t609.*t861)./4.0-(t23.*t150.*t432.*t594.*t609.*t860)./4.0,t593.*t726.*t898.*-2.0-t594.*t726.*t899.*2.0-(t23.*t150.*t432.*t593.*t609.*t860)./4.0+(t23.*t150.*t432.*t594.*t609.*t861)./4.0,t860.*t899+t861.*t898,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,t593.*t726.*t867.*2.0+t594.*t726.*t870.*2.0-t606.*t726.*t860+t607.*t726.*t861,t594.*t726.*t867.*-2.0+t593.*t726.*t870.*2.0+t606.*t726.*t861+t607.*t726.*t860,t860.*t867-t861.*t870+t593.*t606.*t727.*2.0+t594.*t607.*t727.*2.0,0.0,0.0,0.0,t593.*t726.*t875.*2.0+t594.*t726.*t876.*2.0-t618.*t726.*t860+t619.*t726.*t861,t593.*t726.*t876.*2.0-t594.*t726.*t875.*2.0+t618.*t726.*t861+t619.*t726.*t860,t860.*t875-t861.*t876+t593.*t618.*t727.*2.0+t594.*t619.*t727.*2.0,0.0,0.0,0.0,t593.*t726.*t877.*2.0+t594.*t726.*t878.*2.0+t620.*t726.*t861-t621.*t726.*t860,t593.*t726.*t878.*2.0-t594.*t726.*t877.*2.0+t620.*t726.*t860+t621.*t726.*t861,t860.*t877-t861.*t878+t593.*t621.*t727.*2.0+t594.*t620.*t727.*2.0,0.0,0.0,0.0,t594.*t726.*(t785+t747.*(t257-t268+t383.*(t110-t144))).*2.0-t726.*t860.*(t257-t268+t383.*(t110-t144))+t726.*t861.*(t259-t270+t384.*(t110-t144))+t593.*t726.*(t746.*(t257-t268+t383.*(t110-t144))+t747.*(t259-t270+t384.*(t110-t144))).*2.0,t593.*t726.*(t785+t747.*(t257-t268+t383.*(t110-t144))).*2.0+t726.*t861.*(t257-t268+t383.*(t110-t144))+t726.*t860.*(t259-t270+t384.*(t110-t144))-t594.*t726.*(t746.*(t257-t268+t383.*(t110-t144))+t747.*(t259-t270+t384.*(t110-t144))).*2.0,t860.*(t746.*(t257-t268+t383.*(t110-t144))+t747.*(t259-t270+t384.*(t110-t144)))-t861.*(t785+t747.*(t257-t268+t383.*(t110-t144)))+t593.*t727.*(t257-t268+t383.*(t110-t144)).*2.0+t594.*t727.*(t259-t270+t384.*(t110-t144)).*2.0,0.0,0.0,0.0,-t586.*t726.*t860+t593.*t726.*t853.*2.0+t587.*t726.*t861+t594.*t726.*t854.*2.0,t586.*t726.*t861+t587.*t726.*t860+t593.*t726.*t854.*2.0-t594.*t726.*t853.*2.0,t853.*t860-t854.*t861+t586.*t593.*t727.*2.0+t587.*t594.*t727.*2.0,0.0,0.0,0.0,t593.*t726.*t839.*2.0+t594.*t726.*t841.*2.0-(t169.*t344.*t726.*t860)./2.0+(t169.*t345.*t726.*t861)./2.0,t594.*t726.*t839.*-2.0+t593.*t726.*t841.*2.0+(t169.*t344.*t726.*t861)./2.0+(t169.*t345.*t726.*t860)./2.0,t839.*t860-t841.*t861+t169.*t344.*t593.*t727+t169.*t345.*t594.*t727,0.0,0.0,0.0,t593.*t726.*t840.*-2.0-t594.*t726.*t842.*2.0+(t170.*t344.*t726.*t860)./2.0-(t170.*t345.*t726.*t861)./2.0,t594.*t726.*t840.*2.0-t593.*t726.*t842.*2.0-(t170.*t344.*t726.*t861)./2.0-(t170.*t345.*t726.*t860)./2.0,-t840.*t860+t842.*t861+t177.*t344.*t593.*t727+t177.*t345.*t594.*t727],[6,32]);
end
if nargout > 2
    out3 = reshape([0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0],[6,32]);
end
if nargout > 3
    out4 = [g_xsym;g_ysym;g_zsym;0.0;0.0;0.0];
end
