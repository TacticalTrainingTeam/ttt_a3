---
tags:
  - Feature
---

# TTT Reparaturstation Fahrzeug

Fügt bestimmten Fahrzeugen die Möglichekeit hinzu ein Objekt, wie z.B. einen Cargokran über eine ACE-Fremdinteraktion aufzubauen.
Dies ist dann eine reparatur Einrichtung ("ACE_isRepairFacility").
Jedes zugelassene Fahrzeug welches derzeit keine Einrichtung transportiert, kann diese dann aufnehmen indem an der Einrichtung die ACE-Fremdinteraktion zum aufladen verwendet wird.

## Hinweis

Jedes zugelassene Fahrzeug hat standardmäßig eine Einrichtung geladen. Sollte dies nicht gewünscht sein, muss auf dem Fahrzeug die Variable "ttt_repair_vehicle_hasWorkshop" auf false gesetzt werden.
Am einfachsten passiert das in der Init des Objekts mittels:

``` cpp
this setVariable ["ttt_repair_vehicle_hasWorkshop", false, true];
```

## CBA-Einstellungen

``` cpp
force ttt_repair_vehicle_enable = true;                                   //default: false;
force ttt_repair_vehicle_supportedvehicles ='["B_Truck_01_Repair_F"]';    //default: [];
force ttt_repair_vehicle_facitlityObject = "Land_RepairDepot_01_green_F"; //default: "Land_RepairDepot_01_green_F";
force ttt_repair_vehicle_buildTime = 4;                                   //default: 30;
force ttt_repair_vehicle_useAnimation = true;                             //default: true;
force ttt_repair_vehicle_buildAnimation = "Acts_carFixingWheel";          //default: "Acts_carFixingWheel";
```

## Maintainer

- Andx
- EinStein
