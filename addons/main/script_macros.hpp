#include "\x\cba\addons\main\script_macros_common.hpp"
#include "\x\cba\addons\xeh\script_xeh.hpp"
#include "\z\ace\addons\main\script_macros.hpp"

// - 402 macros ---------------------------------------------------------------
#define CREATE_MAGAZINE_GROUP(ammo) class ammo { ammo = 1; }

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