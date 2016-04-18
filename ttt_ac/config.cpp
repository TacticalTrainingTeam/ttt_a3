class CfgPatches 
{
	class TTT_Admin_Console
	{
		units[] = {};
		weapons[] = {};
		worlds[] = {};
		requiredAddons[] = {};
		requiredVersion = 0.1;
		author[] = {"MAD T, modified by TTT"};
		authorUrl = "http://steamcommunity.com/id/MAD_T/";
	};
};

#include "Dialogs\define.hpp"
#include "Dialogs\login.hpp"
#include "Dialogs\main.hpp"
#include "Dialogs\execute.hpp"
#include "Dialogs\commands.hpp"
#include "Dialogs\spectator.hpp"
#include "Dialogs\confirmBox.hpp"
#include "Dialogs\curator.hpp"

/*
idd = -1;
controlsBackground[] = {};
objects[] = {};
controls[] = {};
*/

class RscDisplayDebug {};
class RscDebugConsole {};
class RscDisplayDebugPublic {};

class CfgFunctions
{
	class NSS_AC
	{
		class Functions
		{
			file = "ttt_a3\ttt_ac\Functions";

			class Init {postInit = 1;};

			class curatorInit {};
			class curatorInitDone {};
			class curatorCreateModuleSP {};
			class curatorCreateModuleMP {};
			class curatorOpen {};
			class curatorSaveInit {};
			class curatorSaveDone {};
			class curatorLoad {};
			class curatorDelete {};
			class curatorExport {};
			class curatorAddObjectstToModule {};
			class curatorGetObjects {};
			class curatorJIP {};

			class keyPressed {};
			class openMain {};
			class openCode {};
			class openSpectator {};
			class variableMonitorStart {};
			class freeCam {};
			class execScript {};
			
			class execCodeServer {};
			class execCodeGlobal {};
			class execCodePlayer {};
			class execCodeLocal {};
			
			class loadCode {};
			class saveCode {};
			class deleteCode {};
			
			class switchSpectatorView {};
			class teleportToPlayer {};
			class setCaptive {};
			
			class Invulnerability {};
			class mapTeleport {};
			
			class Logger {};
			
			class execute;
			
			class openFunctionsViewer {};
			class openConfigsViewer {};
			
			class freezePlayer {};
			
			class setVehicleVarName {};
		};
	};
};

/*
class CfgRemoteExec
{
	class Functions
	{
		// State of remoteExec: 
		// 0-turned off, 
		// 1-turned on, taking whitelist into account, 
		// 2-turned on, however, ignoring whitelists (default because of backward compatibility)

		mode = 2;

		class NSS_AC_fnc_curatorCreateModuleMP {allowedTargets=2};

		class YourFunction2 { allowedTargets=1; }; // can target only clients
		class YourFunction3 { allowedTargets=2; }; // can target only the server
	};
};
*/