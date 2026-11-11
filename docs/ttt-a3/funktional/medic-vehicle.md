---
title: TTT Medizinisches Fahrzeug
description: >-
  Fügt bestimmten Fahrzeugen die Möglichkeit hinzu ein Objekt, wie z.B. ein
  Zelt, über eine ACE-Fremdinteraktion aufzubauen.
published: true
date: '2026-11-11T13:03:05.218Z'
tags:
  - arma3
  - sanitaet
  - referenz
  - pruefung-noetig
  - ace
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

Fügt bestimmten Fahrzeugen die Möglichkeit hinzu, ein Objekt, wie z.B. ein Zelt, über eine ACE-Fremdinteraktion aufzubauen.
Dies ist dann eine medizinische Einrichtung (`ace_medical_isMedicalFacility`).
Jedes zugelassene Fahrzeug, welches derzeit keine Einrichtung transportiert, kann diese dann aufnehmen, indem an der Einrichtung die ACE-Fremdinteraktion zum Aufladen verwendet wird.

> [!NOTE]
> Jedes zugelassene Fahrzeug hat standardmäßig eine Einrichtung geladen. Sollte dies nicht gewünscht sein, muss auf dem Fahrzeug die Variable `ttt_medic_vehicle_hasFacility` auf `false` gesetzt werden.
> Am einfachsten passiert das in der Init des Objekts mittels:
>
> ``` c++
> this setVariable ["ttt_medic_vehicle_hasFacility", false, true];
> ```
>
> Der alte Variablenname `ttt_medic_vehicle_hasTent` funktioniert zur Abwärtskompatibilität weiterhin, sollte in neuen Missionen aber nicht mehr verwendet werden.

## CBA-Einstellungen

``` c++
force ttt_medic_vehicle_enable = true;                                                     //default: false;
force ttt_medic_vehicle_supportedVehicles = '["B_Truck_01_medical_F"]';                    //default: [];
force ttt_medic_vehicle_facilityObject = "Land_MedicalTent_01_NATO_tropic_generic_open_F"; //default "Land_MedicalTent_01_NATO_generic_open_F";
force ttt_medic_vehicle_buildTime = 4;                                                     //default: 30;
force ttt_medic_vehicle_useAnimation = true;                                               //default: true;
force ttt_medic_vehicle_buildAnimation = "Acts_carFixingWheel";                            //default: "Acts_carFixingWheel";
```

## Maintainer

- Andx
- EinStein
