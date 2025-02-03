class CfgWeapons {
    
    class ace_flags_white;
    class ttt_signs_carrier_logo: ace_flags_white {
        displayName = CSTRING(flag_logo_displayName);
        picture = QPATHTOF(data\pictures\logo_item.paa);

        GVAR(texture) = QPATHTOEF(common,data\ttt_logo_sign_co.paa);
        GVAR(carrier) = QGVAR(carrier_logo);
    };
};