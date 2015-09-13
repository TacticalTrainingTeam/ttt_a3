class CfgPatches 
{
	class NSS_Admin_Console
	{
		units[] = {};
		weapons[] = {};
		worlds[] = {};
		requiredAddons[] = {};
		requiredVersion = 0.1;
		author[] = {"MAD T"};
		authorUrl = "NSS-Gamers.com";
	};
};

#include "Dialogs\define.hpp"
#include "Dialogs\main.hpp"
#include "Dialogs\execute.hpp"
#include "Dialogs\commands.hpp"
#include "Dialogs\spectator.hpp"


class CfgFunctions
{	
	class NSS
	{
		class AC
		{
			class Init
			{
				postInit = 1;
				file = "ttt_a3\ttt_nss\AC_init.sqf";
			};
		};
	};
	
	class TTT
	{
		class AP
		{
			class Init
			{
				preInit = 1;
				file = "ttt_a3\ttt_nss\preinit.sqf";
			};
		};
	};
};