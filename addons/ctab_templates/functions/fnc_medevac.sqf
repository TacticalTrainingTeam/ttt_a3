#include "..\script_component.hpp"

// NATO MedEvac
[
    "maps.plan-ops.fr#1",
    1,
    "MEDEVAC",
    "MEDEVAC",
    "https://maps.plan-ops.fr/MessageTemplates/Details/1?t=XwZTS19ZzRCOhHBFldStFtvfyylTuM8GebYNW6dOAwg",
    [
        [
            "MEDEVAC",
            "",
            []
        ],
        [
            "Line 1",
            "LOCATION",
            [
                [
                    "",
                    "Grid of pickup zone",
                    5
                ]
            ]
        ],
        [
            "Line 2",
            "CALL SIGN & FREQ",
            [
                [
                    "",
                    "Call sign",
                    3
                ],
                [
                    "",
                    "Frequency",
                    4
                ]
            ]
        ],
        [
            "Line 3",
            "NUMBER OF PATIENTS/PRECEDENCE",
            [
                [
                    "A",
                    "URGENT Hospital under 90 min",
                    1
                ],
                [
                    "B",
                    "PRIORITY Hospital under 4 hours",
                    1
                ],
                [
                    "C",
                    "ROUTINE Hospital within 24 hours",
                    1
                ]
            ]
        ],
        [
            "Line 4",
            "SPECIAL EQUIPMENT REQUIRED",
            [
                [
                    "A",
                    "None",
                    6
                ],
                [
                    "B",
                    "Hoist (Winch)",
                    6
                ],
                [
                    "C",
                    "Extrication",
                    6
                ],
                [
                    "D",
                    "Ventilator",
                    6
                ],
                [
                    "E",
                    "Others",
                    0
                ]
            ]
        ],
        [
            "Line 5",
            "NUMBER TO BE CARRIED LYING/SITTING",
            [
                [
                    "L",
                    "Litter (Stretcher)",
                    1
                ],
                [
                    "A",
                    "Ambulatory (Walking)",
                    1
                ],
                [
                    "E",
                    "Escorts (e.g. for child patient)",
                    1
                ]
            ]
        ],
        [
            "Line 6",
            "SECURITY AT PICKUP ZONE (PZ)",
            [
                [
                    "N",
                    "No enemy",
                    6
                ],
                [
                    "P",
                    "Possible enemy",
                    6
                ],
                [
                    "E",
                    "Enemy in area",
                    6
                ],
                [
                    "X",
                    "Hot PZ - Armed escort required",
                    6
                ]
            ]
        ],
        [
            "Line 7",
            "PICKUP ZONE (PZ) MARKING METHOD",
            [
                [
                    "A",
                    "Panels",
                    6
                ],
                [
                    "B",
                    "Pyro",
                    6
                ],
                [
                    "C",
                    "Smoke",
                    6
                ],
                [
                    "D",
                    "None",
                    6
                ],
                [
                    "E",
                    "Other",
                    0
                ]
            ]
        ],
        [
            "Line 8",
            "NATIONALITY/STATUS",
            [
                [
                    "A",
                    "Military",
                    1
                ],
                [
                    "D",
                    "Civilian",
                    1
                ],
                [
                    "E",
                    "PW / Detainee",
                    1
                ],
                [
                    "F",
                    "Child",
                    1
                ]
            ]
        ],
        [
            "Line 9",
            "PICKUP ZONE (PZ) TERRAIN/OBSTACLES",
            [
                [
                    "",
                    "Terrain / obstacles",
                    0
                ]
            ]
        ]
    ]
] call ctab_fnc_registerMessageTemplate;
