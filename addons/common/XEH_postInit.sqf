#include "script_component.hpp"

if (isServer) then {
    
    //Add a new Chat Channel for Ground to Air Communications
    GVAR(chatChannel) = radioChannelCreate [[0.9,0.1,0.1,1], "Ground-To-Air", "G2A", [], true];
    publicVariable QGVAR(chatChannel);
};