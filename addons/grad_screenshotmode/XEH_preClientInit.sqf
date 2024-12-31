#include "script_component.hpp"

private _title = LSTRING(enable_subCategory);
private _helpText = LSTRING(enable_helpTexts);
[_title,_helpText] call EFUNC(ui,addHelpRecord);
