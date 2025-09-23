---
tags:
  - Feature
---

# Advanced Slingloading

Mittels Advanced Sling Load (ASL) ist es möglich Kisten per Außenlast am Hubschrauber zu transportieren. ASL ist immer aktiv.

## Einstellungen für Missionsbauer

In der `init.sqf` eurer Mission könnt ihr folgende Werte anpassen:

In das Array den Classname eines oder mehrerer Hubschrauber schreiben, damit **nur diese** slingloaden können.

```c++
ASL_Supported_Vehicles_OVERRIDE = ["UK3CB_BAF_Merlin_HC3_18_GPMG_DPMW"]; //default: ["Helicopter","VTOL_Base_F"];
```

Bestimmt was etwas slingloaden kann, statt "All" können Klassen von Fahrzeugen angegeben werden, z.B. "Tank", "Car", "Air", "Helicopter".

```c++
ASL_Sling_Rules_OVERRIDE = ["All", "CAN_SLING", "Car"]; //default: ["ALL","CAN_SLING","ALL"]
```

Aktiviert das überschreiben der maximalen Tragekapazität.

```c++
ASL_HEAVY_LIFTING_ENABLED = true; //default: false
```

Alles was schwerer als die angegebenen Masse-Einheiten ist, wird auf diese begrenzt, benötigt `ASL_HEAVY_LIFTING_ENABLED = true;`.

```c++
ASL_SET_MASS = 2000; //default: 4000
```

## Maintainer

- Andx
