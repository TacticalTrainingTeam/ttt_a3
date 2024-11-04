[
    QGVAR(enable), 
    "CHECKBOX",
    ["Enable EinStein Plane", ""],
    ["Tactical Training Team", "EinStein Plane"],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(supportedBackpacks), 
    "EDITBOX",
    ["Erlaubte Rucksäcke", ""],
    ["Tactical Training Team", "EinStein Plane"],
    "[]"
] call CBA_fnc_addSetting;