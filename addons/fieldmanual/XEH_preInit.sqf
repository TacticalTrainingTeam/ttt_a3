#include "script_component.hpp"

ADDON = false;

PREP_RECOMPILE_START;
#include "XEH_PREP.hpp"
PREP_RECOMPILE_END;

// HEMTT cannot parse ctrlWebBrowserAction yet, so the command stays inside a compiled string
GVAR(browserAction) = compileFinal "params ['_control', '_action']; _control ctrlWebBrowserAction _action";

ADDON = true;
