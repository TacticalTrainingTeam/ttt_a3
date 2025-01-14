#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

// AFM macros
#define IS_MOD_LOADED(modclass)     (isClass (configFile >> "CfgPatches" >> #modclass))

// ACE3 reference macros
#define ACE_PREFIX ace

#define ACEGVAR(module,var)         TRIPLES(ACE_PREFIX,module,var)
#define QACEGVAR(module,var)        QUOTE(ACEGVAR(module,var))

#define ACEFUNC(module,function)    TRIPLES(DOUBLES(ACE_PREFIX,module),fnc,function)
#define QACEFUNC(module,function)   QUOTE(ACEFUNC(module,function))

#define ACELSTRING(module,string)   QUOTE(TRIPLES(STR,DOUBLES(ACE_PREFIX,module),string))
#define ACECSTRING(module,string)   QUOTE(TRIPLES($STR,DOUBLES(ACE_PREFIX,module),string))

// - UI macros ----------------------------------------------------------------
#define MIDX (SafeZoneX + (SafeZoneW / 2))
#define MIDY (SafeZoneY + (SafeZoneH / 2))

#define DOTW (0.01 * 3/4)
#define DOTH 0.01
#define DOTX(x,y) (SafeZoneX + x * DOTW)
#define DOTY(x,y) (SafeZoneY + Y * DOTH)

#define CELLW (5 * DOTW)
#define CELLH (5 * DOTH)
#define CELLX(x,y) (SafeZoneX + x * CELLW)
#define CELLY(x,y) (SafeZoneY + y * CELLH)

#define SIZEEX (0.75 * CELLH)

#define QQPATHTOF(var1) QUOTE(QPATHTOF(var1))

#include "script_debug.hpp"