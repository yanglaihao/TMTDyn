function [out1,out2,out3] = loadsF1(in1,in2,s,ds,t_sym)
%LOADSF1
%    [OUT1,OUT2,OUT3] = LOADSF1(IN1,IN2,S,DS,T_SYM)

%    This function was generated by the Symbolic Math Toolbox version 8.6.
%    26-Feb-2021 19:42:01

f_tx_ = in1(:,28);
f_ty_ = in1(:,29);
f_tz_ = in1(:,30);
l_f_ = in1(:,17);
l_s_ = in1(:,5);
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
tau_tx_ = in1(:,31);
tau_ty_ = in1(:,32);
tau_tz_ = in1(:,33);
t2 = q4.^2;
t3 = q5.^2;
t4 = q6.^2;
t5 = l_s_./3.0;
t6 = l_s_./6.0;
t7 = q4./2.0;
t8 = q5./2.0;
t9 = q4./4.0;
t10 = q6./2.0;
t11 = q5./4.0;
t12 = q6./4.0;
t13 = q9./2.0;
t14 = q10./2.0;
t15 = q11./2.0;
t16 = q10./4.0;
t17 = q12./2.0;
t18 = q11./4.0;
t19 = q13./2.0;
t20 = q12./4.0;
t21 = q14./2.0;
t22 = q15./2.0;
t23 = q16./4.0;
t24 = q17./4.0;
t25 = q18./4.0;
t76 = q5.*q10.*(-1.0./2.0);
t77 = q4.*q12.*(-1.0./2.0);
t78 = q5.*q10.*(-1.0./4.0);
t79 = q6.*q11.*(-1.0./2.0);
t80 = q4.*q12.*(-1.0./4.0);
t81 = q4.*q13.*(-1.0./4.0);
t82 = q6.*q11.*(-1.0./4.0);
t83 = (q4.*q10)./8.0;
t84 = q4.*q14.*(-1.0./4.0);
t85 = q5.*q13.*(-1.0./4.0);
t86 = (q4.*q11)./8.0;
t87 = (q5.*q10)./8.0;
t88 = q5.*q14.*(-1.0./4.0);
t89 = q6.*q13.*(-1.0./4.0);
t90 = (q4.*q12)./8.0;
t91 = (q5.*q11)./8.0;
t92 = (q6.*q10)./8.0;
t93 = (q5.*q12)./8.0;
t94 = (q6.*q11)./8.0;
t95 = (q6.*q12)./8.0;
t96 = (q4.*q16)./8.0;
t97 = q11.*q13.*(-1.0./4.0);
t98 = (q4.*q17)./8.0;
t99 = (q5.*q16)./8.0;
t100 = (q4.*q18)./8.0;
t101 = (q5.*q17)./8.0;
t102 = (q6.*q16)./8.0;
t103 = q12.*q14.*(-1.0./4.0);
t104 = (q5.*q18)./8.0;
t105 = (q6.*q17)./8.0;
t106 = (q6.*q18)./8.0;
t107 = (q10.*q16)./8.0;
t108 = (q10.*q17)./8.0;
t109 = (q11.*q16)./8.0;
t110 = (q10.*q18)./8.0;
t111 = (q11.*q17)./8.0;
t112 = (q12.*q16)./8.0;
t113 = (q11.*q18)./8.0;
t114 = (q12.*q17)./8.0;
t115 = (q12.*q18)./8.0;
t26 = q5.*t7;
t27 = q6.*t7;
t28 = q7.*t7;
t29 = q6.*t8;
t30 = q8.*t7;
t31 = q7.*t8;
t32 = q8.*t8;
t33 = q7.*t10;
t34 = q10.*t7;
t35 = q8.*t10;
t36 = q11.*t7;
t37 = q10.*t8;
t38 = q10.*t9;
t39 = q12.*t7;
t40 = q11.*t8;
t41 = q10.*t10;
t42 = q11.*t9;
t43 = q10.*t11;
t44 = q12.*t8;
t45 = q11.*t10;
t46 = q12.*t9;
t47 = q11.*t11;
t48 = q10.*t12;
t49 = q12.*t10;
t50 = q13.*t9;
t51 = q12.*t11;
t52 = q11.*t12;
t53 = q14.*t9;
t54 = q13.*t11;
t55 = q12.*t12;
t56 = q14.*t11;
t57 = q13.*t12;
t58 = q14.*t12;
t59 = q13.*t16;
t60 = q14.*t16;
t61 = q13.*t18;
t62 = q14.*t18;
t63 = q13.*t20;
t64 = q14.*t20;
t65 = -t9;
t66 = -t11;
t67 = -t12;
t68 = -t19;
t69 = -t21;
t70 = -t23;
t71 = -t24;
t72 = -t25;
t73 = t2./4.0;
t74 = t3./4.0;
t75 = t4./4.0;
t116 = q9+t5;
t117 = q15+t5;
t121 = -t87;
t122 = -t90;
t123 = -t94;
t124 = -t96;
t125 = -t98;
t126 = -t101;
t127 = -t102;
t128 = -t104;
t129 = -t106;
t130 = -t109;
t131 = -t110;
t132 = -t114;
t133 = t6+t13;
t165 = t6+t22+t84+t85;
t175 = t83+t91+t95-1.0./2.0;
t179 = t107+t111+t115-1.0./2.0;
t118 = -t73;
t119 = -t74;
t120 = -t75;
t134 = t9.*t116;
t135 = t11.*t116;
t136 = t12.*t116;
t137 = t9.*t117;
t138 = t11.*t117;
t139 = t12.*t117;
t140 = t16.*t117;
t141 = t18.*t117;
t142 = t20.*t117;
t143 = q5.*t117.*(-1.0./4.0);
t144 = q6.*t117.*(-1.0./4.0);
t145 = q10.*t117.*(-1.0./4.0);
t146 = t7.*t133;
t147 = t8.*t133;
t148 = t10.*t133;
t149 = t38+t47+t55-1.0;
t150 = t6+t22+t53+t54;
t157 = t6+t22+t54+t84;
t158 = t6+t22+t60+t97;
t159 = t7+t14+t51+t82;
t160 = t8+t15+t48+t80;
t161 = t10+t17+t42+t78;
t176 = t101+t106+t124+1.0./2.0;
t177 = t96+t106+t126+1.0./2.0;
t178 = t96+t101+t129+1.0./2.0;
t198 = t9+t16+t93+t123;
t199 = t11+t18+t92+t122;
t200 = t12+t20+t86+t121;
t201 = t23+t65+t104+t105;
t202 = t9+t70+t104+t105;
t203 = t9+t23+t105+t128;
t204 = t24+t66+t100+t102;
t205 = t11+t71+t100+t102;
t206 = t11+t24+t100+t127;
t207 = t25+t67+t98+t99;
t208 = t12+t72+t98+t99;
t209 = t12+t25+t99+t125;
t210 = t16+t23+t113+t132;
t211 = t18+t24+t112+t131;
t212 = t20+t25+t108+t130;
t151 = t149.^2;
t152 = q13.*t149;
t153 = q14.*t149;
t154 = q16.*t149;
t155 = q17.*t149;
t156 = q18.*t149;
t162 = t21+t57+t137;
t163 = t19+t58+t138;
t164 = t59+t62+t142;
t166 = t57+t69+t137;
t167 = t21+t89+t137;
t168 = t58+t68+t138;
t169 = t19+t58+t143;
t170 = t21+t63+t145;
t171 = t19+t103+t141;
t180 = t56+t81+t139;
t181 = t50+t88+t139;
t182 = t50+t56+t144;
t183 = q13.*t159;
t184 = q13.*t160;
t185 = q13.*t161;
t186 = q14.*t159;
t187 = q14.*t160;
t188 = q14.*t161;
t189 = q16.*t159;
t190 = q16.*t160;
t191 = q16.*t161;
t192 = q17.*t159;
t193 = q17.*t160;
t194 = q17.*t161;
t195 = q18.*t159;
t196 = q18.*t160;
t197 = q18.*t161;
t213 = t159.^2;
t214 = t160.^2;
t215 = t161.^2;
t216 = t19.*t149;
t217 = t21.*t149;
t231 = t117.*t149;
t235 = t19.*t159;
t236 = t19.*t160;
t237 = t19.*t161;
t238 = t21.*t159;
t239 = t21.*t160;
t240 = t21.*t161;
t258 = t117.*t159;
t259 = t117.*t160;
t260 = t117.*t161;
t268 = t149.*t158;
t269 = t149.*t159.*2.0;
t270 = t149.*t160.*2.0;
t271 = t149.*t161.*2.0;
t275 = t158.*t159;
t276 = t158.*t160;
t277 = t158.*t161;
t281 = t159.*t160.*2.0;
t282 = t159.*t161.*2.0;
t283 = t160.*t161.*2.0;
t172 = -t154;
t173 = -t155;
t174 = -t156;
t218 = t154./2.0;
t219 = t155./2.0;
t220 = t156./2.0;
t221 = t152.*(-1.0./2.0);
t222 = t153.*(-1.0./2.0);
t226 = -t185;
t227 = -t186;
t228 = -t190;
t229 = -t194;
t230 = -t195;
t232 = -t213;
t233 = -t214;
t234 = -t215;
t241 = t189./2.0;
t242 = t190./2.0;
t243 = t191./2.0;
t244 = t192./2.0;
t245 = t193./2.0;
t246 = t194./2.0;
t247 = t195./2.0;
t248 = t196./2.0;
t249 = t197./2.0;
t250 = t184.*(-1.0./2.0);
t251 = t185.*(-1.0./2.0);
t252 = t186.*(-1.0./2.0);
t253 = t188.*(-1.0./2.0);
t257 = t231./2.0;
t262 = -t259;
t263 = t258./2.0;
t264 = t259./2.0;
t265 = t260./2.0;
t272 = t149.*t170;
t273 = t149.*t171;
t274 = t149.*t164;
t278 = t159.*t164;
t279 = t160.*t164;
t280 = t161.*t164;
t284 = t159.*t170;
t285 = t160.*t170;
t286 = t161.*t170;
t287 = t159.*t171;
t288 = t160.*t171;
t289 = t161.*t171;
t293 = t183+t187+t260;
t324 = t34+t40+t49+t189+t193+t197-2.0;
t223 = -t218;
t224 = -t219;
t225 = -t220;
t254 = -t242;
t255 = -t246;
t256 = -t247;
t261 = -t257;
t266 = -t263;
t267 = -t264;
t290 = t184+t227+t231;
t291 = t152+t188+t262;
t292 = t153+t226+t258;
t312 = t9.*t293;
t313 = t11.*t293;
t314 = t12.*t293;
t315 = t16.*t293;
t316 = t18.*t293;
t317 = t20.*t293;
t321 = q4+q10+t44+t79+t172+t196+t229;
t322 = q5+q11+t41+t77+t173+t191+t230;
t323 = q6+q12+t36+t76+t174+t192+t228;
t325 = t149+t241+t245+t249;
t371 = t198.*t324;
t372 = t199.*t324;
t373 = t200.*t324;
t374 = t210.*t324;
t375 = t211.*t324;
t376 = t212.*t324;
t377 = t175.*t324;
t378 = t179.*t324;
t294 = t9.*t290;
t295 = t9.*t291;
t296 = t9.*t292;
t297 = t11.*t290;
t298 = t11.*t291;
t299 = t11.*t292;
t300 = t12.*t290;
t301 = t12.*t291;
t302 = t12.*t292;
t303 = t16.*t290;
t304 = t16.*t291;
t305 = t16.*t292;
t306 = t18.*t290;
t307 = t18.*t291;
t308 = t18.*t292;
t309 = t20.*t290;
t310 = t20.*t291;
t311 = t20.*t292;
t318 = q4.*t291.*(-1.0./4.0);
t319 = q5.*t292.*(-1.0./4.0);
t320 = q6.*t290.*(-1.0./4.0);
t326 = t159+t223+t248+t255;
t327 = t160+t224+t243+t256;
t328 = t161+t225+t244+t254;
t329 = t325.*tau_tx_;
t330 = t325.*tau_ty_;
t331 = t325.*tau_tz_;
t344 = t198.*t321;
t345 = t198.*t322;
t346 = t198.*t323;
t347 = t199.*t321;
t348 = t199.*t322;
t349 = t199.*t323;
t350 = t200.*t321;
t351 = t200.*t322;
t352 = t200.*t323;
t353 = t210.*t321;
t354 = t210.*t322;
t355 = t210.*t323;
t356 = t211.*t321;
t357 = t211.*t322;
t358 = t211.*t323;
t359 = t212.*t321;
t360 = t212.*t322;
t361 = t212.*t323;
t362 = t175.*t321;
t363 = t175.*t322;
t364 = t175.*t323;
t365 = t179.*t321;
t366 = t179.*t322;
t367 = t179.*t323;
t379 = l_f_.*t175.*t325.*2.0;
t380 = l_f_.*t179.*t325.*2.0;
t381 = l_f_.*t198.*t325.*2.0;
t382 = l_f_.*t199.*t325.*2.0;
t383 = l_f_.*t200.*t325.*2.0;
t384 = l_f_.*t210.*t325.*2.0;
t385 = l_f_.*t211.*t325.*2.0;
t386 = l_f_.*t212.*t325.*2.0;
t394 = l_s_.*t175.*t325.*(2.0./3.0);
t395 = l_s_.*t179.*t325.*(2.0./3.0);
t414 = l_s_.*t198.*t325.*(2.0./3.0);
t415 = l_s_.*t199.*t325.*(2.0./3.0);
t416 = l_s_.*t200.*t325.*(2.0./3.0);
t417 = l_s_.*t210.*t325.*(2.0./3.0);
t418 = l_s_.*t211.*t325.*(2.0./3.0);
t419 = l_s_.*t212.*t325.*(2.0./3.0);
t332 = t326.*tau_tx_;
t333 = t327.*tau_tx_;
t334 = t328.*tau_tx_;
t335 = t326.*tau_ty_;
t336 = t327.*tau_ty_;
t337 = t328.*tau_ty_;
t338 = t326.*tau_tz_;
t339 = t327.*tau_tz_;
t340 = t328.*tau_tz_;
t368 = -t353;
t369 = -t357;
t370 = -t361;
t387 = -t383;
t388 = l_f_.*t175.*t326.*2.0;
t389 = l_f_.*t175.*t327.*2.0;
t390 = l_f_.*t175.*t328.*2.0;
t391 = l_f_.*t179.*t326.*2.0;
t392 = l_f_.*t179.*t327.*2.0;
t393 = l_f_.*t179.*t328.*2.0;
t396 = l_f_.*t198.*t326.*2.0;
t397 = l_f_.*t198.*t327.*2.0;
t398 = l_f_.*t198.*t328.*2.0;
t399 = l_f_.*t199.*t326.*2.0;
t400 = l_f_.*t199.*t327.*2.0;
t401 = l_f_.*t199.*t328.*2.0;
t402 = l_f_.*t200.*t326.*2.0;
t403 = l_f_.*t200.*t327.*2.0;
t404 = l_f_.*t200.*t328.*2.0;
t405 = l_f_.*t210.*t326.*2.0;
t406 = l_f_.*t210.*t327.*2.0;
t407 = l_f_.*t210.*t328.*2.0;
t408 = l_f_.*t211.*t326.*2.0;
t409 = l_f_.*t211.*t327.*2.0;
t410 = l_f_.*t211.*t328.*2.0;
t411 = l_f_.*t212.*t326.*2.0;
t412 = l_f_.*t212.*t327.*2.0;
t413 = l_f_.*t212.*t328.*2.0;
t426 = -t416;
t427 = l_s_.*t175.*t326.*(2.0./3.0);
t428 = l_s_.*t175.*t327.*(2.0./3.0);
t429 = l_s_.*t175.*t328.*(2.0./3.0);
t430 = l_s_.*t179.*t326.*(2.0./3.0);
t431 = l_s_.*t179.*t327.*(2.0./3.0);
t432 = l_s_.*t179.*t328.*(2.0./3.0);
t433 = l_s_.*t198.*t326.*(2.0./3.0);
t434 = l_s_.*t198.*t327.*(2.0./3.0);
t435 = l_s_.*t198.*t328.*(2.0./3.0);
t436 = l_s_.*t199.*t326.*(2.0./3.0);
t437 = l_s_.*t199.*t327.*(2.0./3.0);
t438 = l_s_.*t199.*t328.*(2.0./3.0);
t439 = l_s_.*t200.*t326.*(2.0./3.0);
t440 = l_s_.*t200.*t327.*(2.0./3.0);
t441 = l_s_.*t200.*t328.*(2.0./3.0);
t442 = l_s_.*t210.*t326.*(2.0./3.0);
t443 = l_s_.*t210.*t327.*(2.0./3.0);
t444 = l_s_.*t210.*t328.*(2.0./3.0);
t445 = l_s_.*t211.*t326.*(2.0./3.0);
t446 = l_s_.*t211.*t327.*(2.0./3.0);
t447 = l_s_.*t211.*t328.*(2.0./3.0);
t448 = l_s_.*t212.*t326.*(2.0./3.0);
t449 = l_s_.*t212.*t327.*(2.0./3.0);
t450 = l_s_.*t212.*t328.*(2.0./3.0);
t461 = t344+t348+t352+t377;
t341 = -t333;
t342 = -t337;
t343 = -t338;
t420 = -t390;
t421 = -t393;
t422 = -t399;
t423 = -t400;
t424 = -t403;
t425 = -t406;
t451 = -t429;
t452 = -t432;
t453 = -t436;
t454 = -t437;
t455 = -t440;
t456 = -t443;
t457 = t332+t336+t340;
t458 = t330+t334+t343;
t459 = t329+t339+t342;
t460 = t331+t335+t341;
t462 = t28+t32+t136+t148+t235+t239+t265+t274+t277+t285+t287+t304+t308+t309+t386+t408+t419+t421+t425+t445+t452+t456;
out1 = reshape([1.0,0.0,0.0,t462,t30+t116+t238+t250+t261-t268+t280+t284-t288+t307+t317+t380+t395-t405-t409+t413-t442-t446+t450-(q5.*q7)./2.0-(q10.*t292)./4.0,-q8+t134+t146+t217+t251+t263+t272+t275-t279-t289+t310-t384-t391-t410-t412-t417-t430-t447-t449-(q6.*q7)./2.0-(q10.*t290)./4.0-(q11.*t293)./4.0,t73+t119+t120+1.0,-q6+t26,q5+t27,t235+t239+t265+t295+t319+t320+t150.*t161-t160.*t166+t159.*t169-t149.*t180+l_f_.*t176.*t328.*2.0-l_f_.*t203.*t327.*2.0-l_f_.*t205.*t326.*2.0+l_f_.*t207.*t325.*2.0+l_s_.*t176.*t328.*(2.0./3.0)-l_s_.*t203.*t327.*(2.0./3.0)-l_s_.*t205.*t326.*(2.0./3.0)+l_s_.*t207.*t325.*(2.0./3.0),t238+t250+t261+t296+t298-(q6.*t293)./4.0-t149.*t165-t160.*t163+t159.*t167-t161.*t181-l_f_.*t177.*t325.*2.0-l_f_.*t201.*t326.*2.0-l_f_.*t206.*t327.*2.0-l_f_.*t208.*t328.*2.0-l_s_.*t177.*t325.*(2.0./3.0)-l_s_.*t201.*t326.*(2.0./3.0)-l_s_.*t206.*t327.*(2.0./3.0)-l_s_.*t208.*t328.*(2.0./3.0),t217+t251+t263+t294+t301+t313+t149.*t162+t157.*t159+t161.*t168+t160.*t182+l_f_.*t178.*t326.*2.0+l_f_.*t202.*t325.*2.0-l_f_.*t204.*t328.*2.0-l_f_.*t209.*t327.*2.0+l_s_.*t178.*t326.*(2.0./3.0)+l_s_.*t202.*t325.*(2.0./3.0)-l_s_.*t204.*t328.*(2.0./3.0)-l_s_.*t209.*t327.*(2.0./3.0),t151+t213+t233+t234,t271+t281,-t270+t282,t387-t397+t420+t422+t426-t434+t451+t453,t379+t394+t396-t404+t423+t433-t441+t454,t381-t388+t401+t414+t424-t427+t438+t455,0.0,1.0,0.0,t31-t116+t236+t252+t257+t268-t280-t284+t288+t305-t380-t395+t405+t409-t413+t442+t446-t450-(q4.*q8)./2.0-(q11.*t291)./4.0-(q12.*t293)./4.0,t462,q7+t135+t147+t221+t253+t264-t273+t276+t278-t286+t311+t315-t385-t392+t407+t411-t418-t431+t444+t448-(q6.*q8)./2.0-(q11.*t290)./4.0,q6+t26,t74+t118+t120+1.0,-q4+t29,t236+t252+t257+t296+t298+t314+t149.*t150+t159.*t166+t160.*t169+t161.*t180+l_f_.*t176.*t325.*2.0+l_f_.*t203.*t326.*2.0-l_f_.*t205.*t327.*2.0-l_f_.*t207.*t328.*2.0+l_s_.*t176.*t325.*(2.0./3.0)+l_s_.*t203.*t326.*(2.0./3.0)-l_s_.*t205.*t327.*(2.0./3.0)-l_s_.*t207.*t328.*(2.0./3.0),t235+t239+t265+t299+t318+t320+t159.*t163+t161.*t165+t160.*t167-t149.*t181+l_f_.*t177.*t328.*2.0-l_f_.*t201.*t327.*2.0+l_f_.*t206.*t326.*2.0-l_f_.*t208.*t325.*2.0+l_s_.*t177.*t328.*(2.0./3.0)-l_s_.*t201.*t327.*(2.0./3.0)+l_s_.*t206.*t326.*(2.0./3.0)-l_s_.*t208.*t325.*(2.0./3.0),t221+t253+t264+t297+t302-(q4.*t293)./4.0+t149.*t168+t157.*t160-t161.*t162-t159.*t182+l_f_.*t178.*t327.*2.0-l_f_.*t204.*t325.*2.0-l_f_.*t202.*t328.*2.0+l_f_.*t209.*t326.*2.0+l_s_.*t178.*t327.*(2.0./3.0)-l_s_.*t204.*t325.*(2.0./3.0)-l_s_.*t202.*t328.*(2.0./3.0)+l_s_.*t209.*t326.*(2.0./3.0),-t271+t281,t151+t214+t232+t234,t269+t283,-t379-t394+t396+t404+t423+t433+t441+t454,t387+t397+t399+t420+t426+t434+t436+t451,t382-t389-t398+t402+t415-t428-t435+t439,0.0,0.0,1.0,q8+t33+t222+t237+t266-t272-t275+t279+t289+t303+t316+t384+t391+t410+t412+t417+t430+t447+t449-(q4.*t116)./4.0-(q4.*t133)./2.0-(q12.*t291)./4.0,-q7+t35+t216+t240+t267+t273-t276-t278+t286+t306+t385+t392-t407-t411+t418+t431-t444-t448-(q5.*t116)./4.0-(q5.*t133)./2.0-(q10.*t293)./4.0-(q12.*t292)./4.0,t462,-q5+t27,q4+t29,t75+t118+t119+1.0,t222+t237+t266+t294+t301-(q5.*t293)./4.0-t150.*t159+t149.*t166+t161.*t169-t160.*t180-l_f_.*t176.*t326.*2.0+l_f_.*t203.*t325.*2.0-l_f_.*t205.*t328.*2.0+l_f_.*t207.*t327.*2.0-l_s_.*t176.*t326.*(2.0./3.0)+l_s_.*t203.*t325.*(2.0./3.0)-l_s_.*t205.*t328.*(2.0./3.0)+l_s_.*t207.*t327.*(2.0./3.0),t216+t240+t267+t297+t302+t312+t149.*t163-t160.*t165+t161.*t167+t159.*t181-l_f_.*t177.*t327.*2.0-l_f_.*t201.*t328.*2.0+l_f_.*t206.*t325.*2.0+l_f_.*t208.*t326.*2.0-l_s_.*t177.*t327.*(2.0./3.0)-l_s_.*t201.*t328.*(2.0./3.0)+l_s_.*t206.*t325.*(2.0./3.0)+l_s_.*t208.*t326.*(2.0./3.0),t235+t239+t265+t300+t318+t319+t157.*t161+t160.*t162-t159.*t168-t149.*t182+l_f_.*t178.*t328.*2.0+l_f_.*t202.*t327.*2.0+l_f_.*t204.*t326.*2.0+l_f_.*t209.*t325.*2.0+l_s_.*t178.*t328.*(2.0./3.0)+l_s_.*t202.*t327.*(2.0./3.0)+l_s_.*t204.*t326.*(2.0./3.0)+l_s_.*t209.*t325.*(2.0./3.0),t270+t282,-t269+t283,t151+t215+t232+t233,t381+t388-t401+t414+t424+t427-t438+t455,t382+t389+t398+t402+t415+t428+t435+t439,t383+t397+t416+t420+t422+t434+t451+t453,0.0,0.0,0.0,t353+t369+t370+t378,t354+t356-t367-t376,t355+t359+t366+t375,0.0,0.0,0.0,-t176.*t324+t203.*t321+t205.*t322-t207.*t323,t177.*t323+t201.*t322+t206.*t321+t208.*t324,-t178.*t322-t202.*t323+t204.*t324+t209.*t321,0.0,0.0,0.0,t461,-t345+t347-t364+t373,-t346+t350+t363-t372,0.0,0.0,0.0,t354+t356+t367+t376,t357+t368+t370+t378,t358+t360-t365-t374,0.0,0.0,0.0,-t176.*t323+t203.*t322-t205.*t321+t207.*t324,-t177.*t324-t201.*t321+t206.*t322+t208.*t323,t178.*t321+t202.*t324+t204.*t323+t209.*t322,0.0,0.0,0.0,t345-t347+t364-t373,t461,-t349+t351-t362+t371,0.0,0.0,0.0,t355+t359-t366-t375,t358+t360+t365+t374,t361+t368+t369+t378,0.0,0.0,0.0,t176.*t322+t203.*t323+t207.*t321+t205.*t324,-t177.*t321+t201.*t324+t206.*t323-t208.*t322,-t178.*t324+t202.*t321-t204.*t322+t209.*t323,0.0,0.0,0.0,t346-t350-t363+t372,t349-t351+t362-t371,t461],[18,6]);
if nargout > 1
    out2 = [f_tx_;f_ty_;f_tz_;t326.*t457+t325.*t459-t328.*t458+t327.*t460;t325.*t458+t327.*t457-t326.*t460+t328.*t459;t326.*t458+t325.*t460+t328.*t457-t327.*t459];
end
if nargout > 2
    out3 = zeros(0,0);
end
