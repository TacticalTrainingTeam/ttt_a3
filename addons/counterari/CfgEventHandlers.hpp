class Extended_PreStart_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers {
    class ADDON {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

//ToDo
// der Eventhandler muss allen freundlichen hinzugefügt werden, wie?
// die Variablennamen enemyAri_1,enemyAri_2,enemyAri_3,enemyAri_4 der Feinde müssen irgendwie angegeben werden
// this addeventhandler ["fired",
//     {
//         [_this select 0,
//         _this select 5,
//         100,
//         selectRandom [3,4,5],
//         true,
//         [enemyAri_1,enemyAri_2,enemyAri_3,enemyAri_4],[],0] remoteExec ["Redd_fnc_AriCounterFire",2]
//     }
// ]; this call lambs_wp_fnc_taskReset;
