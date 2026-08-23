#include "../script_component.hpp"
/*
 * Author: Andx
 * Reacts to CBA registering a new setting (CBA_settings_refreshSetting,
 * fired at the end of CBA_fnc_addSetting). If it's one of this addon's
 * forced overrides, applies it right away - this is what lets an override
 * land inside the owning addon's own preInit, before that addon's postInit
 * ever gets a chance to read and cache the stale compiled default.
 *
 * Arguments:
 * 0: Setting name <STRING>
 *
 * Return Value:
 * None
 */

private _setting = _this;

[toLower _setting] call FUNC(applyOverride);
