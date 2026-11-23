#include "..\script_component.hpp"
/*
 * Author: Andx
 * Collects the localized TTT field manual entries from CfgHints for the handbook page.
 *
 * Arguments:
 * None
 *
 * Return Value:
 * Handbook title, close label, last opened topic and chapters with their topics <HASHMAP>
 *
 * Example:
 * call ttt_fieldmanual_fnc_getHandbookData
 *
 * Public: No
 */

private _categoryCondition = format ["getText (_x >> 'category') == '%1'", QGVAR(category)];
private _chapters = [];

{
    private _topics = "isText (_x >> 'description')" configClasses _x;
    if (_topics isEqualTo []) then { continue };

    _topics = [_topics, [], {getNumber (_x >> "logicalOrder")}] call BIS_fnc_sortBy;

    _chapters pushBack createHashMapFromArray [
        ["title", getText (_x >> "displayName")],
        ["topics", _topics apply {
            createHashMapFromArray [
                ["id", configName _x],
                ["title", getText (_x >> "displayName")],
                ["description", getText (_x >> "description")]
            ]
        }]
    ];
} forEach (_categoryCondition configClasses (configFile >> "CfgHints"));

createHashMapFromArray [
    ["title", getText (configFile >> "CfgHintCategories" >> QGVAR(category) >> "displayName")],
    ["closeLabel", LLSTRING(handbook_close)],
    ["lastTopic", uiNamespace getVariable [QGVAR(handbookLastTopic), ""]],
    ["chapters", _chapters]
]
