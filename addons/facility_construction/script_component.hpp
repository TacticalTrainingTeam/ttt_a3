#define COMPONENT facility_construction
#define COMPONENT_BEAUTIFIED Facility Construction

#include "\z\ttt\addons\main\script_mod.hpp"
#include "\z\ttt\addons\main\script_macros.hpp"

// Gap left between the vehicle's and the facility's bounding boxes so they don't visually clip.
#define FACILITY_PLACEMENT_CLEARANCE 2
// Used only for the pre-construction space check, before the facility object (and its real
// bounding box) exists yet - a generous stand-in for "half the length of a typical facility".
#define FACILITY_ESTIMATED_HALF_LENGTH 3
