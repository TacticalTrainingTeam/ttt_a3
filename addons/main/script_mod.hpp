// COMPONENT should be defined in the script_component.hpp and included BEFORE this hpp

#define MAINPREFIX z
#define PREFIX ttt

// MINIMAL required version for the Mod. Components can specify others..
#define REQUIRED_VERSION 1.60
#define REQUIRED_CBA_VERSION {3,18,0}

#ifndef COMPONENT_BEAUTIFIED
    #define COMPONENT_BEAUTIFIED COMPONENT
#endif
#ifdef SUBCOMPONENT_BEAUTIFIED
    #define COMPONENT_NAME QUOTE(TTT - COMPONENT_BEAUTIFIED - SUBCOMPONENT_BEAUTIFIED)
#else
    #define COMPONENT_NAME QUOTE(TTT - COMPONENT_BEAUTIFIED)
#endif