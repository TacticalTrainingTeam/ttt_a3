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

// - Magazine macros ------------------------------------------------------------
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_24(a) a, a, a, a, a, a, a, a, a, a, a, a,a, a, a, a, a, a, a, a, a, a, a, a

#include "script_debug.hpp"
