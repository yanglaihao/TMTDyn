function save_mex( q , u , lambda , dlambda , s , par , ...
    mass , sprdmp , cnst , loads , ...
    nq , nlambda , q0 , n_m , n_sd , n_cn , n_ex , ...
    M , T , fj_k , fj_vd , fj_in , fj_sdi , fj_k_mat , fj_vd_mat , ...
    fgv , Dd , ref , rcn , Ttef , ftau_ef , Tcn , Dcn , r_jtip , w_sdi , ...
    w_k , w_vd , w_k_mat , w_vd_mat , w_in , r_ks , k_mat , vd_mat , rom )
fprintf( 'save mex files... \n' )
par.elapsed_time = [ par.elapsed_time toc( par.timer ) ] ;
toc( par.timer )

% matlabpool('open', 4);
opv = par.opv ;
vars = { par.sym , [ q lambda u ] , s } ;
vars_mex = '{ zeros( 1 , numel( par.sym ) ) , zeros( 1 , numel( [ q lambda u dlambda ] ) ) , 0 }' ;
vars_mex_num = { zeros( 1 , numel( par.sym ) ) , zeros( 1 , numel( [ q lambda u dlambda ] ) ) , 0 } ;

if par.derive_mex && par.derive_collect == 3
    save_select = 1 : 22 ;
else
    save_select = [ 14 , 20 ] ; % , 3 , 4 , 5 , 6  ] ; % dof.s and Animation only
end

cd eom
if par.derive_mex
    
    switch par.derive_collect
        case 1 % unified structures
            
            if n_m ~= 0
                for i = 1 : n_m
                    eval( [ 'codegen ' sprintf('massF%i', i) ' -args ' vars_mex ] ) ;
                end
            end
            if n_sd ~= 0
                for i = 1 : n_sd
                    eval( [ 'codegen ' sprintf('sprdmpF%i', i) ' -args ' vars_mex ] ) ;
                end
            end
            if n_cn ~= 0
                for i = 1 : n_cn
                    eval( [ 'codegen ' sprintf('cnstF%i', i) ' -args ' vars_mex ] ) ;
                end
            end
            if n_ex ~= 0
                for i = 1 : n_ex
                    eval( [ 'codegen ' sprintf('loadsF%i', i) ' -args ' vars_mex ] ) ;
                end
            end
            
        case 3 % collect for Matlab
            save_select = 1 : 22 ; % matlab func.s
            
    end
    
end

for i = 1 : numel( save_select )
    switch save_select(i)
        % matlab functions
        case 1
            codegen MF -args vars_mex_num ;
            
        case 2
            codegen TF -args vars_mex_num ;
            
        case 3
            codegen fj_kF -args vars_mex_num ;
            
        case 4
            codegen fj_vdF -args vars_mex_num ;
            
        case 5
            codegen fj_inF -args vars_mex_num ;
            
        case 6
            codegen fj_k_matF -args vars_mex_num ;
            codegen fj_vd_matF -args vars_mex_num ;
            
        case 7
            codegen fgvF -args vars_mex_num ;
            
        case 8
            codegen DdF -args vars_mex_num ;
              
        case 9
            codegen refF -args vars_mex_num ;
            
        case 10
            codegen rcnF -args vars_mex_num ;
            
        case 11
            codegen TtefF -args vars_mex_num ;
            
        case 12
            codegen TcnF -args vars_mex_num ;
            
        case 13
            codegen DcnF -args vars_mex_num ;
            
        case 14
            codegen rjtipF -args vars_mex_num ;
            
        case 15
            codegen ftau_efF -args vars_mex_num ;
            
        case 16
            codegen w_sdiF -args vars_mex_num ;
            
        case 17
            codegen w_kF -args vars_mex_num ;
            
        case 18
            codegen w_vdF -args vars_mex_num ;
            
        case 19
            codegen w_inF -args vars_mex_num ;
              
        case 20
            codegen rksF -args vars_mex_num ;
               
        case 21
            codegen k_matF -args vars_mex_num ;
            codegen vd_matF -args vars_mex_num ;
            
        case 22
            codegen fj_sdiF -args vars_mex_num ;
            
    end    
end
cd ..
