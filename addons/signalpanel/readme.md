# TTT Signalplane

Eine Signalplane ist eine Möglichkeit einem Hubschrauber auch aus größerer Distanz optisch eine Landezone zu markieren.
Mit dieser Erweiterung können bestimmte Rucksäcke eine große farbige Plane transportieren, die der Spieler dann auf und abbauen kann.
Die Plane ist dabei weder an edn Spieler noch den Rucksacktypen gebunden. Der abbauende Spieler muss nur den richtigen Rucksack nutzen und derzeit nicht schon eine Plane transportieren.

## Hinweis

Jeder zugelassene Rucksack hat standardmäßig eine Plane geladen. Sollte dies nicht gewünscht sein, muss auf dem Rucksack die Variable "ttt_signalpanel_hasTarp" auf false gesetzt werden.
Am einfachsten passiert das in der Loadout.sqf des Spielers mittels:

```c++
(unitBackpack player) setVariable ["ttt_signalpanel_hasTarp", false];
```

## Beispiel CBA-Einstellungen

```c++
force ttt_signalpanel_enable = true;                                                //default: false;
force ttt_signalpanel_allowedBackpacks = '["B_kitbag_rgr", "B_AssaultPack_rgr"]';   //default: [];
```

## Beispielbild

![Eine ttt_signalplane in Aktion.](https://i.imgur.com/HzgONyi.jpeg)

## Maintainer

- Andx
