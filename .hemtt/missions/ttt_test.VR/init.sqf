//missionNamespace setVariable ["SA_TOW_SUPPORTED_VEHICLES_OVERRIDE", ["rsr_bergepanzer_flecktarn", "rsr_wisent_repair_flecktarn"]];
[
    "B_UAV_01_F",
    "init",
    {
        params ["_uav"];

        // Startet den Controller-Watcher auf allen Clients
        [_uav, 800] remoteExec ["ttt_common_fnc_addUAVControlWatcher", 0, true];
    }
] call CBA_fnc_addClassEventHandler;
