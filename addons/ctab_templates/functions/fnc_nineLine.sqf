[
    "maps.plan-ops.fr#168",
    0,
    "CAS 9-Liner",
    "CAS 9-Liner",
    "https://maps.plan-ops.fr/MessageTemplates/Details/168?t=n7eHqCToB9pG_9cOMXorpjeVLR8CUZ07OYWhIHfF9IA",
    [
        [
            "Line 0",
            "CAS Identificator",
            [
                [
                    "ID ",
                    "0",
                    1
                ]
            ]
        ],
        [
            "Line 1",
            "Initial Point & Battle Point",
            [
                [
                    "Grid ",
                    "Koordianten",
                    7
                ],
                [
                    "IP/BP ",
                    "Name der IP/BP",
                    0
                ]
            ]
        ],
        [
            "Line 2",
            "Heading",
            [
                [
                    "Bearing ",
                    "360°",
                    1
                ],
                [
                    "Cardinal ",
                    "NOSW",
                    0
                ]
            ]
        ],
        [
            "Line 3",
            "Distance",
            [
                [
                    "Distance ",
                    "1000",
                    1
                ],
                [
                    "Unit ",
                    "meters",
                    0
                ]
            ]
        ],
        [
            "Line 4",
            "Elevation",
            [
                [
                    "Elevation in Meter ",
                    "1000",
                    1
                ],
                [
                    "MSL",
                    "Sea Level",
                    6
                ],
                [
                    "AGL",
                    "Ground Level",
                    6
                ]
            ]
        ],
        [
            "Line 5",
            "Description",
            [
                [
                    "Text ",
                    "...",
                    8
                ],
                [
                    "INF ",
                    "",
                    6
                ],
                [
                    "ARMOR",
                    "",
                    6
                ],
                [
                    "MECH",
                    "",
                    6
                ]
            ]
        ],
        [
            "Line 6 ",
            "Location",
            [
                [
                    "Marker ",
                    "Marker Name",
                    0
                ],
                [
                    "Grid ",
                    "Target Grid",
                    5
                ]
            ]
        ],
        [
            "Line 7",
            "Type Mark",
            [
                [
                    "Smoke & Flare",
                    "",
                    6
                ],
                [
                    "Talk & Sensor",
                    "",
                    6
                ],
                [
                    "Laser",
                    "Code",
                    6
                ],
                [
                    "Remarks & Vectoring ",
                    "Beschreibung",
                    8
                ],
                [
                    "No Mark",
                    "",
                    6
                ],
                [
                    "BOT ",
                    "Bomb on Target",
                    7
                ],
                [
                    "BOC ",
                    "Bomb on Coordinates",
                    7
                ]
            ]
        ],
        [
            "Line 8",
            "Friendlies",
            [
                [
                    "No Factor ",
                    "",
                    6
                ],
                [
                    "Danger Close ",
                    "Grid",
                    7
                ],
                [
                    "Distance ",
                    "in Meter",
                    1
                ],
                [
                    "Heading ",
                    "NOSW",
                    0
                ]
            ]
        ],
        [
            "Line 9",
            "Egress",
            [
                [
                    "Bearing ",
                    "360°",
                    1
                ],
                [
                    "Cardinal ",
                    "NOSW",
                    0
                ],
                [
                    "Remarks ",
                    "Enemies, AA etc.",
                    8
                ],
                [
                    "Scramble & Out",
                    "",
                    6
                ]
            ]
        ],
        [
            "Remarks ",
            "Hinweise",
            [
                [
                    "Remarks ",
                    "Zusatzinformation",
                    8
                ]
            ]
        ],
        [
            "Type ",
            "CAS Type",
            [
                [
                    "Type 1",
                    "Air AND Ground Visual",
                    6
                ],
                [
                    "Type 2",
                    "Air OR Ground Visual",
                    6
                ],
                [
                    "Type 3",
                    "Pilot Execution",
                    6
                ]
            ]
        ]
    ]
] call ctab_fnc_registerMessageTemplate;
