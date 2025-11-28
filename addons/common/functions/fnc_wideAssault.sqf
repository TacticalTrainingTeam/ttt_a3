// Make infantry assault in a wide formation
// arguments
//      group               <group>
//      destination         <object, marker, position>
//      space between units <number>, default 30m
//
// how to:
// Run on unit init or waypoint init.
//
// example:
// [this, destination1] spawn "fn_wideAssault.sqf";
//
// by nkenny

params [
    ["_group", grpNull, [objNull, grpNull]],
    ["_pos", [0, 0, 0]],
    ["_range", 30, [0]]
];

_group = _group call CBA_fnc_getGroup;
_pos = _pos call CBA_fnc_getPos;

// group settings
_group setFormation "ECH RIGHT";
_group setCombatBehaviour "AWARE";
_group setBehaviourStrong "AWARE";
_group enableAttack false;
_group allowFleeing 0;
_group setSpeedMode "FULL";

// units
private _units = units _group;

// unit settings
{
    _x disableAI "FSM";
    _x disableAI "SUPPRESSION";
    _x disableAI "TARGET";
    _x disableAI "WEAPONAIM";
    _x setUnitPos "UP";

    // dismount
    if (isNull objectParent _x || ((assignedVehicleRole _x) select 0) isEqualTo "cargo") then {[_x] allowGetIn false;};

    // fired EH
    private _firedEH = _x addEventHandler ["Fired", {
        params ["_unit"];
        _unit forceSpeed 2;
    }];

    // dodge hits
    private _hitEH = _x addEventHandler ["Hit", {
        params ["_unit", "", "", "_shooter"];
        private _unitPos = unitPos _unit;

        // tune stance
        if (_unitPos isEqualTo "Down") exitWith {};
        if (_unitPos isEqualTo "Middle" && {_unit distance2D _shooter > 30}) exitWith {_unit setUnitPos "DOWN";};
        _unit setUnitPos "MIDDLE";
    }];

    // variables
    _x setVariable ["lambs_wp_eventhandlers", [["Fired", _firedEH], ["Hit", _hitEH]]];

} forEach _units;

// the magic loop
waitUntil {

    private _leader = leader _group;
    private _movePos = _leader getPos [50 min (_leader distance2D _pos), _leader getDir _pos];
    private _offset = (_leader getDir _pos) + 90;

    // units
    _units = _units select {alive _x};

    // execute move
    {
        private _adjustPos = _movePos getPos [_range * _forEachIndex, _offset];
        _x forceSpeed ([3, 24] select (_x distance2D _adjustPos > 55));
        _x doMove _adjustPos;
    } forEach _units;

    // cycle
    sleep 5;

    // exit condition
    if (_leader distance2D _pos < 20) then {_units = [];};
    _units isEqualTo []

};

// reset units
{
    _x enableAI "FSM";
    _x enableAI "SUPPRESSION";
    _x enableAI "TARGET";
    _x enableAI "WEAPONAIM";
    _x setUnitPos "AUTO";
} forEach (units _group);

// debug
//systemChat "DONE";

// end
true
