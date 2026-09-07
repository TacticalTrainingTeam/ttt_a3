#define COMPONENT coin_check
#define COMPONENT_BEAUTIFIED Coin Check

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Fixed instead of configurable: keeps every client's join/range checks consistent with the
// server-authoritative check state without having to broadcast or sync these values.
#define RESPONSE_RADIUS 10
#define RESPONSE_TIME 30
