// isGlobal = false: personal per-client setting, so each player can opt out for themselves
[
    QGVAR(enabled),
    "CHECKBOX",
    [LSTRING(enabled_displayName), LSTRING(enabled_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    false,
    2
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
    1
] call CBA_fnc_addSetting;

// isGlobal = false: personal per-client setting, so each player picks what they themselves have
// to do when they lose a coin check.
[
    QGVAR(punishment),
    "LIST",
    [LSTRING(punishment_displayName), LSTRING(punishment_description)],
    [ELSTRING(main,TacticalTrainingTeam), LSTRING(subCategory)],
    [
        [0, 1, 2],
        [LSTRING(punishment_random), LSTRING(punishment_kneeBends), LSTRING(punishment_pushups)],
        0
    ],
    2
] call CBA_fnc_addSetting;
