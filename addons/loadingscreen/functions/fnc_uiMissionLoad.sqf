#include "\A3\ui_f\hpp\defineResincl.inc"
#include "\A3\ui_f\hpp\defineResinclDesign.inc"
disableSerialization;
_display = _this select 0;
_isMultiplayer = serverTime > 0;


_ctrlMission = _display displayCtrl IDC_LOADING_MISSION;      //2300
_ctrlMissionProgress = _display displayCtrl IDC_LOADING_PROGRESSMISSION;  //1013
_ctrlMissionType = _display displayCtrl IDC_LOADING_MISSIONGAMETYPE;   //1012
_ctrlMissionName = _display displayCtrl IDC_LOADING_MISSIONNAME;    //1006
_ctrlMissionAuthor = _display displayCtrl IDC_LOADING_MISSIONAUTHOR;   //1007
_ctrlMissionPicture = _display displayCtrl IDC_LOAD_MISSION_PICTURE;   //105
_ctrlMissionDescription = _display displayCtrl IDC_LOADING_MISSIONDESCRIPTION; //1100
_ctrlMissionDescriptionEngine = _display displayCtrl IDC_LOAD_MISSION_NAME;  //101


//--- Controls to move to bottom right
_toMove = [
    _ctrlMission,
    _ctrlMissionType,
    _ctrlMissionProgress,
    _ctrlMissionName,
    _ctrlMissionAuthor,
    _ctrlMissionPicture,
    _ctrlMissionProgress,
    _ctrlMissionDescription,
    _ctrlMissionDescriptionEngine
];



_typePos = (ctrlPosition _ctrlMissionType);
_typePos params ["_mainX","_mainY","_mainW"]; // Get position of mission type, because it's the highest control
_descriptionPos = (ctrlPosition _ctrlMissionDescription);
_descriptionPos params ["_descX","_descY","_descW","_descH"]; //Get position of the description, because it's the lowest control
_mainY= (ctrlPosition _ctrlMissionDescriptionEngine) select 1; //Highest point in dialog
_mainH = (_descY + _descH) - _mainY; // Calculate the difference of the lowest point of description and highest point of type (the total height)
//_type [0, 2.4, 16, 1];
//_desc=  [0, 14.4, 16, 1];
//

_mainPos = [_mainX,_mainY,_mainW,_mainH]; //main pos as array


//--- Find bottom bar height
_mapBackBottom = _display displayCtrl 1003; // bottom bar
_backBottomPos = ctrlPosition _mapBackBottom; //x,y,w,h
_backBottomH = _backBottomPos param [3]; // Get height of bottom
//--- Get new position for ctrlMission
//_mainMovePos = ctrlPosition _ctrlMission; //x,y,w,h
//_mainMovePos params ["_mainX","_mainY","_mainW","_mainH"]; // Get position of main
_tempX = (safeZoneX + safeZoneW) - _mainW; // Find position Width away from right side
_tempY = (safeZoneY + safeZoneH) - (_mainH + _backBottomH); // Find position Height away from bottom
//_xDiff = _tempX - _mainX; // Find difference between mainX and tempX
//_yDiff = _tempY - _mainY; // Find difference between mainY and tempY

//_newX = _mainX + _xDiff; // Add difference to the main X
//_newY = _mainY + _yDiff; // Add difference to the main Y
//--- Move the mission control
//_ctrlMission ctrlSetPosition [_tempX, _tempY];
_ctrlMission ctrlSetPosition [_tempX+3, _tempY+3]; // Removes the whole block completely
_ctrlMission ctrlCommit 0;
//--- Move the mission bar1013
//_ctrlMissionProgress ctrlSetPosition [_tempX, _tempY];
_ctrlMissionProgress ctrlSetPosition [_tempX+3, _tempY+3]; // Removes the whole block completely
_ctrlMission ctrlCommit 0;


_nul = {
    _control = _x;
    _pos = ctrlPosition _control; //x,y,w,h
    _pos params ["_moveX","_moveY","_moveW","_moveH"];
    _newX = _moveX + 10;
    _newY = _moveY + 10;
    _control ctrlSetPosition [_newX, _newY, _moveW, _moveH];
    _control ctrlCommit 0;
    false
} count _toMove;



//--- Picture
_loadingPicture = getText (missionConfigFile >> "loadScreen");
if (_loadingPicture == "") then {_loadingPicture = getText (missionConfigFile >> "overviewPicture");}; //--- Use overview data

//--- Mission name
_loadingName = getText (missionConfigFile >> "onLoadName");

//--- Description
/* _loadingTextConfig = if (false) then {getText (missionConfigFile >> "onLoadIntro")} else {getText (missionConfigFile >> "onLoadMission")};
_loadingText = ctrlText _ctrlMissionDescriptionEngine;
if (_loadingText == "") then {_loadingText = _loadingTextConfig;}; //--- Use overview data
if (_loadingText in ["",localize "str_load_world"]) then {_loadingText = getText (missionConfigFile >> "overviewText");}; */

//--- MP type
_gameType = getText (missionConfigFile >> "Header" >> "gameType");
_gameTypeName = getText (configFile >> "CfgMPGameTypes" >> _gameType >> "name");
if (_gameTypeName == "") then {_gameTypeName = getText (configFile >> "CfgMPGameTypes" >> "Unknown" >> "name");};

//_showMission = if (false) then {missionConfigFile >> "onLoadIntroTime"} else {missionConfigFile >> "onLoadMissionTime"};
//_showMission = if (isnumber _showMission) then {getnumber _showMission > 0} else {true};
//if (_showMission && (_loadingText != "" || _loadingPicture != "")) then {

//--- When loading a different terrain, current mission is sometimes still available. Check if it belongs to the terrain.
_last = uiNamespace getVariable ["RscDisplayLoading_last",[worldName,missionName]];
_lastWorld = _last select 0;
_lastMission = _last select 1;
_showMission = if (missionName == _lastMission) then {worldName == _lastWorld} else {true};
uiNamespace setVariable ["RscDisplayLoading_last",[worldName,missionName]];

//--- Get loading bars
_progressMap = _display displayCtrl IDC_PROGRESS_PROGRESS;
if (isNull _progressMap) then {_display displayCtrl IDC_CLIENT_PROGRESS};
_progressMission = _display displayCtrl IDC_LOADING_PROGRESSMISSION;
RscDisplayLoading_progress = _progressMap;

if (str missionConfigFile != "" && _showMission) then {
    _loadingName = _loadingName call (uiNamespace getVariable "bis_fnc_localize");
    _loadingText = _loadingText call (uiNamespace getVariable "bis_fnc_localize");

    if (_loadingName == "") then {_loadingName = briefingName;};
    if (_loadingName == "") then {_loadingName = localize "STR_a3_rscdisplay_loading_noname";};
    if (_loadingPicture == "") then {_loadingPicture = _pictureShot;};

    if (_gameTypeName != "" && _isMultiplayer) then {
        _ctrlMissionType ctrlSetText toUpper _gameTypeName;
    } else {
        _ctrlMissionType ctrlShow false;
    };
    _ctrlMissionName ctrlSetText toUpper _loadingName;
    _ctrlMissionPicture ctrlSetText _loadingPicture;
    _ctrlMissionDescription ctrlSetStructuredText parseText _loadingText;

    //--- Set heigh/*t based on text
    _ctrlMissionDescriptionPos = ctrlPosition _ctrlMissionDescription;
    _ctrlMissionDescriptionPos set [3,ctrlTextHeight _ctrlMissionDescription + 0.01];
    if (_loadingText == "") then {_ctrlMissionDescriptionPos set [3,0];};
    _ctrlMissionDescription ctrlSetPosition _ctrlMissionDescriptionPos;
    _ctrlMissionDescription ctrlCommit 0;

    [missionConfigFile,_ctrlMissionAuthor] call bis_fnc_overviewauthor;

    //--- Mission loading bar
    _progressMapPos = ctrlPosition _progressMap;
    _progressMissionPos = ctrlPosition _progressMission;
    if (missionNamespace getVariable ["RscDisplayLoading_progressMission",false]) then {

        //--- Mission loading - make the terrain bar full and animate only the mission bar
        _progressMap ctrlSetPosition _progressMissionPos;
        _progressMap ctrlShow false;
        _progressMap ctrlCommit 0;
        _progressMission ctrlSetPosition _progressMapPos;
        _progressMission ctrlCommit 0;
        _progressMission progressSetPosition 0;
        _progressMission ctrlShow false;
    } else {

        //--- When loading a different map, a rogue loading screen without progress bar appears. Move the progress bar by script.
        _limit = [1,2] select _isMultiplayer;
        if (count (uiNamespace getVariable "loading_displays") > _limit) then {
            _progressMap ctrlShow false;
            _progressMission ctrlSetPosition _progressMapPos;
            _progressMission ctrlCommit 0;
            _progressMission progressSetPosition 0;
            _progressMission ctrlShow false;
        } else {
            _progressMission ctrlShow false;
        };
    };
} else {
    _ctrlMission ctrlShow false;
    _ctrlMission ctrlSetFade 1;
    _ctrlMission ctrlCommit 0;
};