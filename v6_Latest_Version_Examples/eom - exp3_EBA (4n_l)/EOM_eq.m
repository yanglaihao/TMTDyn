function res = EOM_eq ( z )
global par_mex
t = par_mex.t_equil_i;
z = [ z 0*z ]' ;

u = z( 25 : end ) ;
uq = u( 1 : 24 ) ;

[ z , par_mex ] = static_mid_step( t , z , par_mex ) ;

fj_k = fj_kF( par_mex.var , z , 0 , 0 , t ) ; 
fj_in = fj_inF( par_mex.var , z , 0 , 0 , t ) ;
Tj_u = Tj_uF( par_mex.var , z , 0 , 0 , t ) ;

TMT = zeros(24,24) ; TMfd = zeros(24,1) ;
w_vd_j = zeros(24,1) ; w_sd = zeros(24,1) ; w_in = zeros(24,1) ;
w_f = zeros(24,1) ;
Tc = [] ; Tct = Tj_u ; dc = [] ;


[ M , T , Dd , fg ] = massF1( par_mex.var , z , 0 , 0 , t ) ;
Tt = T' ;
TMT = TMT + Tt * M * T ;
TMfd = TMfd + Tt * M * ( - Dd * uq + fg ) ;

[ M , T , Dd , fg ] = massF2( par_mex.var , z , 0 , 0 , t ) ;
Tt = T' ;
TMT = TMT + Tt * M * T ;
TMfd = TMfd + Tt * M * ( - Dd * uq + fg ) ;

[ M , T , Dd , fg ] = massF3( par_mex.var , z , 0 , 0 , t ) ;
Tt = T' ;
TMT = TMT + Tt * M * T ;
TMfd = TMfd + Tt * M * ( - Dd * uq + fg ) ;

[ M , T , Dd , fg ] = massF4( par_mex.var , z , 0 , 0 , t ) ;
Tt = T' ;
TMT = TMT + Tt * M * T ;
TMfd = TMfd + Tt * M * ( - Dd * uq + fg ) ;

[ M , T , Dd , fg ] = massF5( par_mex.var , z , 0 , 0 , t ) ;
Tt = T' ;
TMT = TMT + Tt * M * T ;
TMfd = TMfd + Tt * M * ( - Dd * uq + fg ) ;

[ Tt , kx , vd , in , ~ , dir ] = sprdmpF25( par_mex.var , z , 0 , 0 , t ) ;
w_vd_j = w_vd_j + dir * Tt * vd ;
w_sd = w_sd + dir * Tt * kx ;
w_in = w_in + dir * Tt * in ;

[ Tt , kx , vd , in , ~ , dir ] = sprdmpF26( par_mex.var , z , 0 , 0 , t ) ;
w_vd_j = w_vd_j + dir * Tt * vd ;
w_sd = w_sd + dir * Tt * kx ;
w_in = w_in + dir * Tt * in ;

[ Tt , kx , vd , in , ~ , dir ] = sprdmpF27( par_mex.var , z , 0 , 0 , t ) ;
w_vd_j = w_vd_j + dir * Tt * vd ;
w_sd = w_sd + dir * Tt * kx ;
w_in = w_in + dir * Tt * in ;

[ Tt , kx , vd , in , ~ , dir ] = sprdmpF28( par_mex.var , z , 0 , 0 , t ) ;
w_vd_j = w_vd_j + dir * Tt * vd ;
w_sd = w_sd + dir * Tt * kx ;
w_in = w_in + dir * Tt * in ;


[ Ttf , ftau_ex , Tto ] = loadsF1( par_mex.var , z , 0 , t ) ;
w_f = w_f + Ttf * ftau_ex ;
Tct = [ Tct , Tto ] ;

% EOM
res = [ ( TMfd + fj_k + fj_in + w_sd + w_in + w_f ) ; dc ] ;

flag = 0;
new_data = [];