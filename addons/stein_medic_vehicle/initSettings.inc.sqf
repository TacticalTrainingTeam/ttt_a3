[
    QGVAR(enable), 
    "CHECKBOX",
    [LSTRING(settingEnable_name), LSTRING(settingEnable_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    true,
    true
] call CBA_fnc_addSetting;

[
    QGVAR(supportedVehicles), 
    "EDITBOX",
    ["Erlaubte Fahrzeuge", "Classnames der Fahrzeuge die medizinische Objekte haben."],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    "[""B_Truck_01_medical_F""]",
    true
] call CBA_fnc_addSetting;

[
    QGVAR(supportedObject), 
    "EDITBOX",
    ["Objekt", "Classname des Objekts das eine medizinische Einrichtung sein soll."],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(SubCategory)],
    "Land_MedicalTent_01_NATO_generic_open_F",
    true
] call CBA_fnc_addSetting;