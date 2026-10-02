// cTab
force force ctab_compass_enable = false;
// realTime (1): always-live BFT tracking. ttt_bft_jamming's Drift/Mixed effect only has a
// visual impact in atSync (2) mode (cTab_fnc_drawBftMarkers ignores the reported position in
// realTime mode) - missions that want Drift/Mixed jamming must override this to 2 themselves;
// see addons/bft_jamming/readme.md. Not forced to 2 repo-wide since that would regress BFT
// tracking (stale positions for up to ctab_core_sync_time) for every mission, jammer or not.
force force ctab_core_bft_mode = 1;
force force ctab_core_drawMainMap = false;
force force ctab_core_gridPrecision = 0;
force force ctab_core_helmetcam_mode = 1;
force force ctab_core_microDagrGroupBFT = false;
force force ctab_core_sync_time = 30;
force force ctab_core_uav_mode = 1;
force force ctab_core_useAceMicroDagr = false;
force force ctab_core_useArmaMarker = true;
force force ctab_irl_connect_enabled = true;
force force ctab_irl_connect_key = "130130";
force force ctab_irl_connect_syncMap = true;
force force ctab_irl_connect_uri = "https://ctab.plan-ops.fr/hub";
