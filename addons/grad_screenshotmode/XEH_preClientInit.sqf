#include "script_component.hpp"

private _title = LSTRING(displayName);
private _helpText = LSTRING(helpTexts);
[_title,_helpText] call EFUNC(ui,addHelpRecord);
