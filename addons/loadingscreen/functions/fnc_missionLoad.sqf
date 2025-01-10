with uiNamespace do
{
    #include "\A3\ui_f\hpp\defineResincl.inc"
    #include "\A3\ui_f\hpp\defineResinclDesign.inc"
    disableSerialization;

    _mode = _this select 0;
    _params = _this select 1;
    _class = _this select 2;

    _display = _params select 0;
    RscDisplayLoading_display = _display;
    //--- Initial loading - maintain visual style of RscDisplayStart
    if !(uiNamespace getVariable ["BIS_initGame",false]) exitWith {};

    ///////////////////////////////////////////////////////////////////////////////////////////

    //--- Hide start loading screen
    _ctrlLoadingStart = _display displayCtrl IDC_LOADINGSTART_LOADINGSTART;
    _ctrlLoadingStart ctrlSetFade 1;
    _ctrlLoadingStart ctrlCommit 0;
    _pictureShot = "";

    //--- Map
    if (worldName != "") then {
        _ctrlMap = _display displayCtrl IDC_LOADING_MAP; //idc 999
        _ctrlMapName = _display displayCtrl IDC_LOADING_MAPNAME;
        _ctrlMapAuthor = _display displayCtrl IDC_LOADING_MAPAUTHOR;
        _ctrlMapDescription = _display displayCtrl IDC_LOADING_MAPDESCRIPTION;
        _ctrlMissionDescriptionEngine = _display displayCtrl IDC_LOAD_MISSION_NAME;  //101
        _ctrlMissionAuthor = _display displayCtrl IDC_LOADING_MISSIONAUTHOR;

        _cfgWorld = configFile >> "cfgworlds" >> worldName;

        _pictureMap = "";
        _worldName = "";
        _loadingText = "";
        _author = "";
        //--- Mission check
        _ctrlMission = _display displayCtrl IDC_LOADING_MISSION;
        if (!(isNull _ctrlMission)) then {

            _author = getText (missionConfigFile >> "author");
            _pictureMap = getText (missionConfigFile >> "loadScreen");
            if (_pictureMap == "") then {_pictureMap = getText (missionConfigFile >> "overviewPicture");};

            _worldName = getText (missionConfigFile >> "briefingName");
            if (_worldName == "") then {_worldName = getText (missionConfigFile >> "onLoadName");};
            _loadingName = _worldName call (uiNamespace getVariable "bis_fnc_localize");

            _loadingTextConfig = getText (missionConfigFile >> "onLoadMission");
            _loadingText = _loadingTextConfig;
            if (_loadingText == "") then {_loadingText = ctrlText _ctrlMissionDescriptionEngine;}; //--- Use overview data
            if (_loadingText == "") then {_loadingText = getText (missionConfigFile >> "overviewText");};
            //_loadingText = _loadingText call (uiNamespace getVariable "bis_fnc_localize");
            //[missionConfigFile,_ctrlMissionAuthor] call bis_fnc_overviewauthor;
        };
        if (_pictureMap == "") then {_pictureMap = getText (_cfgWorld >> "pictureMap");};
        if (_pictureMap == "") then {_pictureMap = "#(argb,8,8,3)color(1,1,1,0.9)";};
        if (_worldName == "") then {_worldName = getText (_cfgWorld >> "description");};
        if (_loadingText == "") then {
            _loadingTexts = getArray (_cfgWorld >> "loadingTexts");
            _loadingText = if (count _loadingTexts > 0) then {
                _loadingTexts select floor (((diag_tickTime / 10) % (count _loadingTexts)));
            } else {
                ""
            };
        };
        _pictureShot = getText (_cfgWorld >> "pictureShot");
        //--- Randomized map Y coordinate
        _worldType = uiNamespace getVariable ["RscDisplayLoading_worldType",""];
        _ran = uiNamespace getVariable ["RscDisplayLoading_ran",random 1];
        if (worldName != _worldType) then {
            _ran = random 1;
            uiNamespace setVariable ["RscDisplayLoading_ran",_ran];
            uiNamespace setVariable ["RscDisplayLoading_worldType",worldName];
        };

        //--- Set texts
        _ctrlMap ctrlSetText _pictureMap;
        _ctrlMap ctrlSetPosition [safeZoneX, safeZoneY, safeZoneW, safeZoneH];
        _ctrlMap ctrlCommit 0;
        _ctrlMapName ctrlSetText toUpper _worldName;
        _ctrlMapAuthor ctrlSetText toUpper _author;
        /* _ctrlMapDescription ctrlSetStructuredText parseText _loadingText; */

        if (!(isNull _ctrlMission)) then {
            [missionConfigFile,_ctrlMissionAuthor] call bis_fnc_overviewauthor;
        } else {
            [_cfgWorld,_ctrlMapAuthor] call bis_fnc_overviewauthor;
        };
    };

    //--- Mission
    _ctrlMission = _display displayCtrl IDC_LOADING_MISSION;
    if (!(isNull _ctrlMission)) then {
        [_display,0] call ttt_loadingscreen_fnc_uiMissionLoad;
    };
};