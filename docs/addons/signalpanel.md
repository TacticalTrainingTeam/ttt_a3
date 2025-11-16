# TTT Signalplane

Eine Signalplane ist eine Möglichkeit einem Hubschrauber auch aus größerer Distanz optisch eine Landezone zu markieren.
Mit dieser Erweiterung können bestimmte Rucksäcke eine große farbige Plane transportieren, die der Spieler dann auf und abbauen kann.
Die Plane ist dabei nicht an den Spieler gebunden. Der abbauende Spieler muss nur den richtigen Rucksack nutzen und derzeit nicht schon eine Plane transportieren.

!!! info
    Jeder zugelassene Rucksack hat standardmäßig eine Plane geladen. Sollte dies nicht gewünscht sein, muss auf dem Rucksack die Variable `ttt_signalpanel_hasTarp` auf `false` gesetzt werden.
    Am einfachsten passiert das in der `loadout.cpp` des Spielers mittels:
    
    ```c++
    (unitBackpack player) setVariable ["ttt_signalpanel_hasTarp", false];
    ```

## CBA-Einstellungen

```c++
force ttt_signalpanel_enable = true;                                                                    //default: false;
force ttt_signalpanel_supportedBackpacks = '["B_kitbag_rgr", "B_AssaultPack_blk", "B_Carryall_khk"]';   //default: '[]';
force ttt_signalpanel_buildTime = 6;                                                                    //default: 6;
```

## Beispielbild

![Eine ttt_signalplane in Aktion.](https://i.imgur.com/HzgONyi.jpeg)

## Maintainer

- Andx
