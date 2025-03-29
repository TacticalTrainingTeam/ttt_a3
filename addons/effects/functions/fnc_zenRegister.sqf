#include "..\script_component.hpp"
/*
* Author: EinStein
*
* Description:
* Adds custom Zeus Modules via Zeus Enhanced.
* https://zen-mod.github.io/ZEN/#/
* 
* Arguments:
* None
* 
* Return Value:
* None
*
* Public: No
*/

[CSTRING(category_effects), CSTRING(condensedBreathModule_displayName), {
    [[], ttt_effects_fnc_condensedBreath] remoteExec ["call", ([0, -2] select isDedicated), true];
}, "\a3\Modules_F_Curator\Data\portraitSmoke_ca.paa"] call zen_custom_modules_fnc_register;

[CSTRING(category_environment), CSTRING(snowModule_displayName), {
    [
        CSTRING(snowModule_displayName),
        [
            [
                "SLIDER",
                [CSTRING(snowModule_intensity_displayName), CSTRING(snowModule_intensity_tooltip)],
                [0, 100, 50, 0, [0, 0, 0], [0, 0, 0, 0]]
            ]
        ],
        {
            params ["_returnValues", "_functionArguments"];
            _returnValues params ["_intensity"];
            [[_intensity], ttt_effects_fnc_snow] remoteExec ["call", ([0, -2] select isDedicated), true];
        }
    ] call zen_dialog_fnc_create;
}, "\a3\Modules_F_Curator\Data\portraitFlare_ca.paa"] call zen_custom_modules_fnc_register;

[CSTRING(category_environment), CSTRING(stormModule_displayName), {
    [
        CSTRING(stormModule_displayName),
        [
            [
                "SLIDER",
                [CSTRING(stormModule_duration_displayName), CSTRING(stormModule_duration_tooltip)],
                [60, 900, 300, 0, [0, 0, 0], [0, 0, 0, 0]]
            ],
            [
                "CHECKBOX",
                [CSTRING(stormModule_effect_displayName), CSTRING(stormModule_effect_tooltip)],
                [false]
            ],
            [
                "TOOLBOX",
                [CSTRING(stormModule_stormType_displayName), CSTRING(stormModule_stormType_tooltip)],
                [0, 1, 2, [CSTRING(stormModule_stormType_sandstorm),CSTRING(stormModule_stormType_snowstorm)]]
            ],
            [
                "CHECKBOX",
                [CSTRING(stormModule_walk_displayName), CSTRING(stormModule_walk_tooltip)],
                [true]
            ],
            [
                "SLIDER",
                [CSTRING(stormModule_direction_displayName), CSTRING(stormModule_direction_tooltip)],
                [0, 360, 45, 0, [0, 0, 0], [0, 0, 0, 0]]
            ]
        ],
        {
            params ["_returnValues", "_functionArguments"];
            _returnValues params ["_duration", "_effect", "_stormType", "_walk", "_direction"];
            [[_duration, _effect, _stormType, _walk, _direction], ttt_effects_fnc_stormInit] remoteExec ["call", 0, true];
        }
    ] call zen_dialog_fnc_create;
}, "\a3\Modules_F_Curator\Data\portraitWeather_ca.paa"] call zen_custom_modules_fnc_register;