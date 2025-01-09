with uiNamespace do
{
	disableSerialization;

	_mode = _this select 0;
	_params = _this select 1;
	_class = _this select 2;

	_display = _params select 0;
	RscDisplayLoading_display = _display;
	// Initial loading - maintain visual style of RscDisplayStart
	if !(uiNamespace getVariable ["BIS_initGame", false]) exitWith {};

	// Hide start loading screen
	_ctrlLoadingStart = _display displayCtrl IDC_LOADINGSTART_LOADINGSTART;
	_ctrlLoadingStart ctrlSetFade 1;
	_ctrlLoadingStart ctrlCommit 0;
	_pictureShot = "";

	//Map
	if (worldName != "") then {
		_ctrlMap = _display displayCtrl IDC_LOADING_MAP;	//idc 999
		_ctrlMapName = _display displayCtrl IDC_LOADING_MAPNAME;
		_ctrlMapAuthor = _display displayCtrl IDC_LOADING_MAPAUTHOR;
		_ctrlMapDescription = _display displayCtrl IDC_LOADING_MAPDESCRIPTION;
		_ctrlMissionDescriptionEngine = _display displayCtrl IDC_LOAD_MISSION_NAME;		//101
		_ctrlMissionAuthor = _display displayCtrl IDC_LOADING_MISSIONAUTHOR;

		_cfgWorld = configFile >> "cfgworlds" >> worldName;

		_pictureMap = "";
		_worldName = "";
		_loadingText = "";
		_author = "";
		// Mission check
		_ctrlMission = _display displayCtrl IDC_LOADING_MISSION;
		if (!(isNull _ctrlMission)) then {

			_author = getText (missionConfigFile >> "author");
			_pictureMap = getText (missionConfigFile >> "loadScreen");
			//Fallback falls Mission kein Bild definiert hat
			if (_pictureMap == "") then {_pictureMap = getText (missionConfigFile >> "overviewPicture");};

			_worldName = getText (missionConfigFile >> "briefingName");
			if (_worldName == "") then {_worldName = getText (missionConfigFile >> "onLoadName");};
			_loadingName = _worldName call (uiNamespace getVariable "bis_fnc_localize");

			_loadingTextConfig = getText (missionConfigFile >> "onLoadMission");
			_loadingText = _loadingTextConfig;
			if (_loadingText == "") then {_loadingText = ctrlText _ctrlMissionDescriptionEngine;}; //--- Use overview data
			if (_loadingText == "") then {_loadingText = getText (missionConfigFile >> "overviewText");};
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

		// Randomized map Y coordinate
		_worldType = uiNamespace getVariable ["RscDisplayLoading_worldType", ""];
		_ran = uiNamespace getVariable ["RscDisplayLoading_ran", random 1];
		if (worldName != _worldType) then {
			_ran = random 1;
			uiNamespace setVariable ["RscDisplayLoading_ran", _ran];
			uiNamespace setVariable ["RscDisplayLoading_worldType", worldName];
		};
		
		_ctrlMap ctrlSetText _pictureMap;
		_ctrlMap ctrlSetPosition [safeZoneX, safeZoneY, safeZoneW, safeZoneH];
		_ctrlMap ctrlCommit 0;
		_ctrlMapName ctrlSetText toUpper _worldName;
		_ctrlMapAuthor ctrlSetText toUpper _author;
		_ctrlMapDescription ctrlSetStructuredText parseText _loadingText;

		if (!(isNull _ctrlMission)) then {
			[missionConfigFile, _ctrlMissionAuthor] call bis_fnc_overviewauthor;
		} else {
			[_cfgWorld, _ctrlMapAuthor] call bis_fnc_overviewauthor;
		};
	};

	// Mission
	_fnc_loadMission = {

		disableSerialization;
		_display = _this select 0;
		_isMultiplayer = serverTime > 0;


		_ctrlMission = _display displayCtrl IDC_LOADING_MISSION;						//2300
		_ctrlMissionProgress = _display displayCtrl IDC_LOADING_PROGRESSMISSION;		//1013
		_ctrlMissionType = _display displayCtrl IDC_LOADING_MISSIONGAMETYPE;			//1012
		_ctrlMissionName = _display displayCtrl IDC_LOADING_MISSIONNAME;				//1006
		_ctrlMissionAuthor = _display displayCtrl IDC_LOADING_MISSIONAUTHOR;			//1007
		_ctrlMissionPicture = _display displayCtrl IDC_LOAD_MISSION_PICTURE;			//105
		_ctrlMissionDescription = _display displayCtrl IDC_LOADING_MISSIONDESCRIPTION;	//1100
		_ctrlMissionDescriptionEngine = _display displayCtrl IDC_LOAD_MISSION_NAME;		//101

		//Controls to move to bottom right
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
		_typePos params ["_mainX", "_mainY", "_mainW"];	// Get position of mission type, because it's the highest control
		_descriptionPos = (ctrlPosition _ctrlMissionDescription);
		_descriptionPos params ["_descX", "_descY", "_descW", "_descH"];	// Get position of the description, because it's the lowest control
		_mainY= (ctrlPosition _ctrlMissionDescriptionEngine) select 1;	// Highest point in dialog
		_mainH = (_descY + _descH) - _mainY;	// Calculate the difference of the lowest point of description and highest point of type (the total height)
		_mainPos = [_mainX, _mainY, _mainW, _mainH];	//main pos as array

		//Find bottom bar height
		_mapBackBottom = _display displayCtrl 1003;	// bottom bar
		_backBottomPos = ctrlPosition _mapBackBottom;	//x,y,w,h
		_backBottomH = _backBottomPos param [3];	// Get height of bottom
		_tempX = (safeZoneX + safeZoneW) - _mainW;	// Find position Width away from right side
		_tempY = (safeZoneY + safeZoneH) - (_mainH + _backBottomH);	// Find position Height away from bottom
		_ctrlMission ctrlSetPosition [_tempX+3, _tempY+3]; // Removes the whole block completely
		_ctrlMission ctrlCommit 0;
		// Move the mission bar1013
		_ctrlMissionProgress ctrlSetPosition [_tempX+3, _tempY+3]; // Removes the whole block completely
		_ctrlMission ctrlCommit 0;

		_nul = {
			_control = _x;
			_pos = ctrlPosition _control;	//x,y,w,h
			_pos params ["_moveX", "_moveY", "_moveW", "_moveH"];
			_newX = _moveX + 10;
			_newY = _moveY + 10;
			_control ctrlSetPosition [_newX, _newY, _moveW, _moveH];
			_control ctrlCommit 0;
			false
		} count _toMove;

		//Picture
		_loadingPicture = getText (missionConfigFile >> "loadScreen");
		if (_loadingPicture == "") then {_loadingPicture = getText (missionConfigFile >> "overviewPicture");}; //--- Use overview data

		// Mission name
		_loadingName = getText (missionConfigFile >> "onLoadName");

		// Description
		_loadingTextConfig = if (false) then {getText (missionConfigFile >> "onLoadIntro")} else {getText (missionConfigFile >> "onLoadMission")};
		_loadingText = ctrlText _ctrlMissionDescriptionEngine;
		if (_loadingText == "") then {_loadingText = _loadingTextConfig;}; //--- Use overview data
		if (_loadingText in ["", localize "str_load_world"]) then {_loadingText = getText (missionConfigFile >> "overviewText");};

		// MP type
		_gameType = getText (missionConfigFile >> "Header" >> "gameType");
		_gameTypeName = getText (configFile >> "CfgMPGameTypes" >> _gameType >> "name");
		if (_gameTypeName == "") then {_gameTypeName = getText (configFile >> "CfgMPGameTypes" >> "Unknown" >> "name");};

		// When loading a different terrain, current mission is sometimes still available. Check if it belongs to the terrain.
		_last = uiNamespace getVariable ["RscDisplayLoading_last", [worldName, missionName]];
		_lastWorld = _last select 0;
		_lastMission = _last select 1;
		_showMission = if (missionName == _lastMission) then {worldName == _lastWorld} else {true};
		uiNamespace setVariable ["RscDisplayLoading_last", [worldName, missionName]];

		// Get loading bars
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

			// Set heigh/*t based on text
			_ctrlMissionDescriptionPos = ctrlPosition _ctrlMissionDescription;
			_ctrlMissionDescriptionPos set [3, ctrlTextHeight _ctrlMissionDescription + 0.01];
			if (_loadingText == "") then {_ctrlMissionDescriptionPos set [3, 0];};
			_ctrlMissionDescription ctrlSetPosition _ctrlMissionDescriptionPos;
			_ctrlMissionDescription ctrlCommit 0;

			[missionConfigFile, _ctrlMissionAuthor] call bis_fnc_overviewauthor;


			// DLC notification
			_missionDLCs = [];
			{
				_appId = getNumber(configFile >> "CfgMods" >> _x >> "appId");
				_missionDLCs = _missionDLCs + [_appId];
			} forEach (getMissionDLCs); //Take all not owned DLCs and check whether they were released already. If yes, count them as not owned

			_notOwnedDLCs = [];
			_showDLCLoading = false;

			{
				if((isDLCAvailable _x) && (_x in _missionDLCs)) then
				{
					_notOwnedDLCs = _notOwnedDLCs + [_x];
					_showDLCLoading = true;
				};
			} forEach (getDLCs 2); //Take all not owned DLCs and check whether they were released already. If yes, count them as not owned

			if(_showDLCLoading) then
			{
				_selectedDLCAppId = uiNamespace getVariable ['BIS_RscDisplayLoading_SelectedDLCAppId', 0];

				if(_selectedDLCAppId == 0) then
				{
					//_notOwnedDLCs is non-empty => add DLC Bundle
					_notOwnedDLCs = _notOwnedDLCs + [getNumber(configFile >> "CfgMods" >> "DLCBundle" >> "appId")];
					//Randomly select one of the non-owned DLCs and read info from it
					_selectedDLC = floor(random (count _notOwnedDLCs));
					_selectedDLCAppId = _notOwnedDLCs select _selectedDLC;
					uiNamespace setVariable ["BIS_RscDisplayLoading_SelectedDLCAppId", _selectedDLCAppId];
				};

				{ //For each class from cfgMods
					if(getNumber(_x >> "appId") == _selectedDLCAppId) then
					{
						_dlcColor = getArray(_x >> "dlcColor");

						if(count _dlcColor != 4) then
						{
							_dlcColor = [
								(profileNamespace getVariable ['GUI_BCG_RGB_R', 0.77]),
								(profileNamespace getVariable ['GUI_BCG_RGB_G', 0.51]),
								(profileNamespace getVariable ['GUI_BCG_RGB_B', 0.08]),
								1];
						};

						//name
						_ctrl = _display displayCtrl IDC_LOADING_DLCNAME;
						_ctrl ctrlSetText getText(_x >> "name");
						_ctrl ctrlSetTextColor _dlcColor;
						//author
						_ctrl = _display displayCtrl IDC_LOADING_DLCAUTHOR;
						_ctrl ctrlSetText (format [localize "STR_FORMAT_AUTHOR_SCRIPTED", getText(_x >> "author")]);
						_ctrl ctrlSetTextColor _dlcColor;
						//stripe
						_ctrl = _display displayCtrl IDC_LOADING_DLCSTRIPE;
						_ctrl ctrlSetTextColor _dlcColor;
						//logo
						_ctrl = _display displayCtrl IDC_LOADING_DLCICON;
						_ctrl ctrlSetText getText(_x >> "logo");
						//picture background
						_ctrl = _display displayCtrl IDC_LOADING_DLCPICTUREBACK;
						_ctrl ctrlSetBackgroundColor _dlcColor;
						//picture
						_ctrl = _display displayCtrl IDC_LOADING_DLCPICTURE;
						_ctrl ctrlSetText getText(_x >> "overviewPicture");
						//description
						_ctrl = _display displayCtrl IDC_LOADING_DLCDESCRIPTION;
						_ctrl ctrlSetStructuredText (parseText getText(_x >> "overviewText"));
					};
				} forEach ((configFile >> "CfgMods") call bis_fnc_returnChildren);
			};

			//--- Set height of description based on text
			_ctrlDLCDescription = _display displayCtrl IDC_LOADING_DLCDESCRIPTION;
			_ctrlDLCDescriptionPos = ctrlPosition _ctrlDLCDescription;
			_ctrlDLCDescriptionPos set [3, (ctrlTextHeight _ctrlDLCDescription) + 0.01]; //TODO-add proper grid
			_ctrlDLCDescription ctrlSetPosition _ctrlDLCDescriptionPos;
			_ctrlDLCDescription ctrlCommit 0;

			//Show/hide DLC part of loading screen
			{
				(_display displayCtrl _x) ctrlShow _showDLCLoading;
			}
			forEach
			[
				IDC_LOADING_DLCPICTUREBACK,
				IDC_LOADING_DLCPICTURE,
				IDC_LOADING_DLCDESCRIPTION,
				IDC_LOADING_DLCNAME,
				IDC_LOADING_DLCAUTHOR,
				IDC_LOADING_DLCSTRIPE,
				IDC_LOADING_DLCICON
			];

			//DLC notification
			//--- Mission loading bar
			_progressMapPos = ctrlPosition _progressMap;
			_progressMissionPos = ctrlPosition _progressMission;
			if (missionNamespace getVariable ["RscDisplayLoading_progressMission", false]) then {

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
				_limit = [1, 2] select _isMultiplayer;
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
	};

	_ctrlMission = _display displayCtrl IDC_LOADING_MISSION;
	if (!(isNull _ctrlMission)) then {
		[_display, 0] call _fnc_loadMission;
	};

	// Moved here to prevent showing Lite Disclaimer when starting/shutting down the game
	if (getNumber (configFile >> "CfgMods" >> "gamma") == 1) then
	{
		_ctrlDisclaimer = _display displayCtrl IDC_LOADING_DISCLAIMER;
		_ctrlDisclaimerName = _display displayCtrl IDC_LOADING_DISCLAIMERNAME;
		_ctrlDisclaimerDescription = _display displayCtrl IDC_LOADING_DISCLAIMERDESCRIPTION;
		_productVersionArray = productVersion;
		_versionNr = ctrlText ((findDisplay 0) displayCtrl 118);

		if (_productVersionArray select 4 == "Development") then
		{
			_disclaimerName = format ["%1 - %2", localize "STR_A3_RSCDISPLAY_LOADING_DEV", _versionNr];

			if(_productVersionArray select 5) then
			{
				//Modded dev
				_disclaimerName = _disclaimerName + "<img image='A3\Ui_f\data\GUI\RscCommon\RscTrafficLight\TrafficLight_ca.paa'/>";
			};

			_ctrlDisclaimerName ctrlSetStructuredText parseText _disclaimerName;
			_ctrlDisclaimerDescription ctrlSetStructuredText parseText localize "STR_A3_RSCDISPLAY_LOADING_DEVINFO";
			_ctrlDisclaimerDescription ctrlSetTextColor [1, 1, 1, 1];
			[_ctrlDisclaimerDescription, 0.01] call bis_fnc_ctrlFitToTextHeight;
			_ctrlDisclaimer ctrlShow true;
		}
		else
		{
			if(_productVersionArray select 5) then
			{
				//Modded stable
				_ctrlDisclaimerName ctrlSetStructuredText parseText format ["%1 - %2%3", localize "STR_A3_RSCDISPLAY_LOADING_STABLE",
													  _versionNr,
													  "<img image='A3\Ui_f\data\GUI\RscCommon\RscTrafficLight\TrafficLight_ca.paa'/>"];

				_ctrlDisclaimerDescription ctrlSetStructuredText parseText localize "STR_A3_RSCDISPLAY_LOADING_MODDEDINFO";
				_ctrlDisclaimerDescription ctrlSetTextColor [1, 1, 1, 1];
				[_ctrlDisclaimerDescription, 0.01] call bis_fnc_ctrlFitToTextHeight;
				_ctrlDisclaimer ctrlShow true;
			}
			else
			{
				_ctrlDisclaimer ctrlShow false;
			};
		};
	};
};
