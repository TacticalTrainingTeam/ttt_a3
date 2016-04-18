[] execVM "a3\functions_f\Debug\fn_camera.sqf";

_log = format ["NSS_AC_Log: (%1, %2) started free cam mode", name player, getplayerUID player];

[_log,"NSS_AC_fnc_Logger",false,false] spawn BIS_fnc_MP;