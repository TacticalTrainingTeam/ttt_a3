# TTT Drohnen Plane

Eine Drohnen Plane ist eine Möglichkeit einen Landeplatz für eine Drohne zu markieren.
Mit dieser Erweiterung können bestimmte Rucksäcke eine Plane transportieren, die der Spieler dann auf und abbauen kann.
Die Plane ist dabei nicht an den Spieler gebunden. Der abbauende Spieler muss nur den richtigen Rucksack nutzen und derzeit nicht schon eine Plane transportieren.

!!! info
    Jeder zugelassene Rucksack hat standardmäßig eine Plane geladen. Sollte dies nicht gewünscht sein, muss auf dem Rucksack die Variable `ttt_dronepanel_hasTarp` auf `false` gesetzt werden.
    Am einfachsten passiert das in der `loadout.sqf` des Spielers mittels:

    ``` c++
    (unitBackpack player) setVariable ["ttt_dronepanel_hasTarp", false];
    ```

## CBA-Einstellungen

``` c++
force ttt_dronepanel_enable = true;                                                                    //default: false;
force ttt_dronepanel_supportedBackpacks = '["B_kitbag_rgr"]';                                          //default: '[]';
force ttt_dronepanel_buildTime = 6;                                                                    //default: 6;
```

## Maintainer

- Andx
- EinStein
