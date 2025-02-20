#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ttt_main"};
        author = ECSTRING(main,TacticalTrainingTeam);
        authors[] = {"EinStein"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

class CfgSounds
{
	class wind_1
	{
		name = "Wind 1";						                                        // display name
		sound[] = {"a3\data_f_curator\sound\cfgsounds\wind1.wss", 1, 1, 25 };	        // file, volume, pitch, maxDistance
		titles[] = {};			                                                        // subtitles
	};
	class wind_2
	{
		name = "Wind 2";						                                        // display name
		sound[] = {"a3\data_f_curator\sound\cfgsounds\wind2.wss", 1, 1, 25 };	        // file, volume, pitch, maxDistance
		titles[] = {};			                                                        // subtitles
	};
	class wind_3
	{
		name = "Wind 3";						                                        // display name
		sound[] = {"a3\data_f_curator\sound\cfgsounds\wind3.wss", 1, 1, 25 };	        // file, volume, pitch, maxDistance
		titles[] = {};			                                                        // subtitles
	};
	class wind_4
	{
		name = "Wind 4";						                                        // display name
		sound[] = {"a3\data_f_curator\sound\cfgsounds\wind4.wss", 1, 1, 25 };	        // file, volume, pitch, maxDistance
		titles[] = {};			                                                        // subtitles
	};
	class wind_5
	{
		name = "Wind 5";						                                        // display name
		sound[] = {"a3\data_f_curator\sound\cfgsounds\wind5.wss", 1, 1, 25 };	        // file, volume, pitch, maxDistance
		titles[] = {};			                                                        // subtitles
	};
	class wind_big
	{
		name = "Wind Big";						                                        // display name
		sound[] = {"a3\missions_f_bootcamp\data\sounds\wind_big.wss", 1, 1, 25 };	    // file, volume, pitch, maxDistance
		titles[] = {};			                                                        // subtitles
	};
	class wind_normal
	{
		name = "Wind Normal";						                                    // display name
		sound[] = {"a3\missions_f_bootcamp\data\sounds\wind_normal.wss", 1, 1, 25 };	// file, volume, pitch, maxDistance
		titles[] = {};			                                                        // subtitles
	};
	class wind_small
	{
		name = "Wind Small";						                                    // display name
		sound[] = {"a3\missions_f_bootcamp\data\sounds\wind_small.wss", 1, 1, 25 };	    // file, volume, pitch, maxDistance
		titles[] = {};			                                                        // subtitles
	};
};

#include "CfgEventHandlers.hpp"