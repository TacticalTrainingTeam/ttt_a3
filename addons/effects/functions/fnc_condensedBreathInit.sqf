#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Creates condensed breath particels for every unit locally for the player who executes the script.
* 
* Arguments:
* None
*
* Return Value:
* None
*
* Example (used locally e.g.: initPlayerLocal.sqf):
*	[] call ttt_effects_fnc_condensedBreathInit;
*
* Public: Yes
*/

if (isDedicated || !hasInterface) exitWith {};

{
	private _unit = _x;
	[_unit] call ttt_effects_fnc_condensedBreathEffects;
	
	// add EHs if not already existing
	if (_unit getVariable ["ttt_effects_breathParticleEventsNeeded", true]) then {
		_unit setVariable ["ttt_effects_breathParticleEventsNeeded", false, false];

		_unit addEventHandler ["Deleted", {
			params ["_entity"];
			deleteVehicle (_entity getVariable "ttt_effects_breathParticle");
		}];

		_unit addMPEventHandler ["MPKilled", {																			// EH will trigger globally only once per client
			params ["_unit", "", "", ""];
			deleteVehicle (_unit getVariable "ttt_effects_breathParticle");												// delete effect for every player
			_unit setVariable ["ttt_effects_breathParticle", nil, false];
		}];

		player addMPEventHandler ["MPRespawn", {																		// Only triggered where the unit is local
			params ["_unit", ""];
			[[_unit], ttt_effects_fnc_condensedBreathEffects] remoteExec ["call", ([0, -2] select isDedicated), true];	// re-add effect for every player
		}];

		_XEHid = ["featureCamera", {
			params ["_entity", "_cameraMode"];																			// Playing: "", Zeus: "curator", Spectator: "nexus"
			if ((_cameraMode == "") && !(isObjectHidden _entity)) then {
				[_entity] call ttt_effects_fnc_condensedBreathEffects;													// re-add effect for self if not hidden
			} else {
				deleteVehicle (_entity getVariable "ttt_effects_breathParticle");										// delete effect when in Zeus (can't detect visibility triggered)
				_entity setVariable ["ttt_effects_breathParticle", nil, false];
			};
		}] call CBA_fnc_addPlayerEventHandler;
	}
} forEach allUnits;