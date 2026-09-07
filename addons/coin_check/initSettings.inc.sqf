// isGlobal = false: personal per-client setting, so each player can opt out for themselves
[
    QGVAR(enabled),
    "CHECKBOX",
    [LSTRING(enabled_displayName), LSTRING(enabled_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true,
    false
] call CBA_fnc_addSetting;

// isGlobal = true: mission-wide setting for mission makers, not overridable per client. Disabling
// it stops coins from ever being handed out, which is also how to disable the feature entirely -
// with nobody carrying a coin, the self-action never has anything to check.
[
    QGVAR(distributionEnabled),
    "CHECKBOX",
    [LSTRING(distributionEnabled_displayName), LSTRING(distributionEnabled_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    true,
    true
] call CBA_fnc_addSetting;
