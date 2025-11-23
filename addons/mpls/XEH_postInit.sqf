#include "script_component.hpp"

if (isServer) then {
    [
        {
            // start the save Loop
            call FUNC(initSave);
        },
        [],
        TIME_SAVE_START
    ] call CBA_fnc_waitAndExecute;
};

// Below this line only for player machines
if (!hasInterface) exitWith {};

// If the _first Loadout does not exist, create it
[
    {
        params ["_player"];

        if (GVAR(loadoutNamespace) getVariable [([getPlayerUID _player, "_first"] joinString ""), []] isEqualTo []) then {
            GVAR(loadoutNamespace) setVariable [[getPlayerUID _player, "_first"] joinString "", [_player] call CBA_fnc_getLoadout, true]; //saves the very first loadout to the DB
        };

        if (GVAR(loadoutNamespace) getVariable [([getPlayerUID _player, "_slot"] joinString ""), ""] isEqualTo "") then {
            GVAR(loadoutNamespace) setVariable [[getPlayerUID _player, "_slot"] joinString "", typeOf _player];
        };
    },
    [ace_player],
    TIME_SAVE_FIRST
] call CBA_fnc_waitAndExecute;

// If player is JIP
if (didJIP) then {
     // add addAction to the teleporter object
    if (!isNil QEGVAR(teleport,teleporter)) then {
        EGVAR(teleport,teleporter) addAction [LLSTRING(startLoadout), {

            params ["", "_caller"];

            if ((GVAR(loadoutNamespace) getVariable [([getPlayerUID _caller, "_first"] joinString ""), []]) isNotEqualTo []) then {
                [_caller, GVAR(loadoutNamespace) getVariable ([getPlayerUID _caller, "_first"] joinString "")] call CBA_fnc_setLoadout;
            };

        }, [], 0, false, true];
    };

    // apply the last saved loadout to the player if he is in the same slot
    // wait TIME_AFTER_RESPAWN seconds to account for any delay with loadouts assigned through onPlayerRespawn.sqf
    [
        {
            params ["_player"];

            private _currentSlot = typeOf _player;
            private _oldSlot = GVAR(loadoutNamespace) getVariable [([getPlayerUID _player, "_slot"] joinString ""), ""];

            if (_currentSlot isEqualTo _oldSlot) then {
                _player call FUNC(applyLoadout);
            };
        },
        [ace_player],
        TIME_AFTER_RESPAWN
    ] call CBA_fnc_waitAndExecute;
};
