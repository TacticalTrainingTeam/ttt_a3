#define COMPONENT coin_check
#define COMPONENT_BEAUTIFIED Coin Check

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Fixed instead of configurable: keeps every client's join/range checks consistent with the
// server-authoritative check state without having to broadcast or sync these values.
#define RESPONSE_RADIUS 10
#define RESPONSE_TIME 15

// How long a punishment animation plays before control is handed back to the player.
#define PUNISHMENT_DURATION 6

#define PUNISHMENT_ANIM_KNEE_BENDS "AmovPercMstpSnonWnonDnon_exercisekneeBendA"
#define PUNISHMENT_ANIM_PUSHUPS "AmovPercMstpSnonWnonDnon_exercisePushup"
