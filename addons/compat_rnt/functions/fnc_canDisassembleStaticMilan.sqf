#include "..\script_component.hpp"
/**
 *  Author: Timi007
 *  Source: PzGrenBtl402 addons/Redd_Milan/CfgVehicles.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), condition of the Disassemble user action, also requires a free backpack slot
 *
 *  Description:
 *      Checks if the player can disassemble the dismounted Milan: it is unloaded and unmanned, and the player
 *      does not wear a backpack, because the tripod is handed over as backpack.
 *
 *  Parameter(s):
 *      0: OBJECT - Milan
 *      1: OBJECT - Player
 *
 *  Returns:
 *      BOOLEAN - Can disassemble
 *
 *  Example:
 *      [cursorObject, player] call ttt_compat_rnt_fnc_canDisassembleStaticMilan
 *
 * Public: NO
 */

params ["_milan", "_player"];

alive _milan &&
{crew _milan isEqualTo []} &&
{backpack _player isEqualTo ""} &&
{!STATIC_MILAN_LOADED(_milan)}
