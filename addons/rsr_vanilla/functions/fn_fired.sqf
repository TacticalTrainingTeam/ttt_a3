    _veh = _this select 0;
    _weap = _this select 1;
    
    if (_weap == "SmokeLauncher") then 
    {
        
        [_veh] call BIS_fnc_effectFiredSmokeLauncher;
        
    };