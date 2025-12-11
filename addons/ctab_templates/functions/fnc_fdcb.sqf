#include "..\script_component.hpp"

[
    "maps.plan-ops.fr#166",
    2,
    "FDCB",
    "FDCB",
    "https://maps.plan-ops.fr/MessageTemplates/Details/166?t=ilKTs9LB0pq4uxiuMTiJJM6ZVu6ff8bUWTLR5jLAJ5I",
    [
        [
            "FDCB",
            "",
            []
        ],
        [
            "Line 0",
            "ID ",
            [
                [
                    "ID",
                    "Zahl",
                    1
                ]
            ]
        ],
        [
            "Line 2",
            "Typ",
            [
                [
                    "Typ 1",
                    "Feuern wenn Bereit",
                    6
                ],
                [
                    "Typ II",
                    "Feuern auf Befehl",
                    6
                ],
                [
                    "Typ 3",
                    "Einschlag auf bestimmte Uhrzeit",
                    6
                ]
            ]
        ],
        [
            "Line 1",
            "Art",
            [
                [
                    "P",
                    "Punkt",
                    6
                ],
                [
                    "L",
                    "Linie",
                    6
                ],
                [
                    "F",
                    "Fläche",
                    6
                ]
            ]
        ],
        [
            "Line 2",
            "Koordinaten",
            [
                [
                    "Start",
                    "0000",
                    7
                ],
                [
                    "Ende",
                    "0000",
                    7
                ],
                [
                    "Radius",
                    "Zahl",
                    1
                ]
            ]
        ],
        [
            "Line 3",
            "Höhe",
            [
                [
                    "m",
                    "über Meeresspiegel",
                    1
                ]
            ]
        ],
        [
            "Line 4",
            "Anzahl Geschosse",
            [
                [
                    "Geschosse",
                    "Art +Anzahl",
                    8
                ]
            ]
        ],
        [
            "Line 2",
            "Hinweise",
            [
                [
                    "",
                    "Hinweise jeglicher Art",
                    8
                ]
            ]
        ]
    ]
] call ctab_fnc_registerMessageTemplate;
