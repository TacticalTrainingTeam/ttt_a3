#include "script_component.hpp"

// Create Channel and add all Players (and JIP)
if (isServer) then {
        private _channelName = "Ground-To-Air";
        private _color = ["Map", "Civilian"] call BIS_fnc_displayColorGet;
        GVAR(g2aChannel) = radioChannelCreate [_color, "Ground-To-Air", "G2A", [allPlayers], true];
        publicVariable QGVAR(chatChannel);
            
        //from BI Wiki https://community.bistudio.com/wiki/radioChannelCreate
        if (_channelID == 0) exitWith {
           INFO_1("Custom channel '%1' creation failed!", _channelName);
            };
        [GVAR(g2aChannel), {_this radioChannelAdd [player]}] remoteExec ["call", [0, -2] select isDedicated, _channelName]; //Handles JIP
    };

// Players are remvoved on respawn, so we add them again
if (hasInterface) then  {
        [
            "CAManBase",
            "Respawn",
            {
                GVAR(g2aChannel) radioChannelAdd [player];
            }
        ] call CBA_fnc_addClassEventHandler;
    };