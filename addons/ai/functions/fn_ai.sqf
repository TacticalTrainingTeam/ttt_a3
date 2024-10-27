// any player that goes unconscious is set captive, so the AI wont shoot it anymore
// ToDo: confirm its not needed anymore

["ace_unconscious", {
    (_this select 0) setCaptive (_this select 1);
}] call CBA_fnc_addEventHandler;

player addEventHandler ["Respawn", {(_this select 0) setCaptive false}];