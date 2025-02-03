#include "script_component.hpp"

[] call FUNC(createTeleporter);

/***************************************************************************/
/** everything that only player controlled machines need, goes below this **/
/***************************************************************************/
if !(hasInterface) exitWith {};

//move player to respawm marker if they jipped - teleport should be at the respawn marker
if (didJIP) then {
    [ACE_player] call FUNC(moveToRespawn);
};
