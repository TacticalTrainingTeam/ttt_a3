# TTT Medizinischer Rucksack

Fügt einem Spieler mit dem korrekten Rucksacktypen die Möglichekeit hinzu ein Objekt, wie z.B. eine Plane über eine ACE-Eigeninteraktion aufzubauen.
Dies ist dann eine medizinische Einrichtung ("ace_medical_isMedicalFacility").
Jeder Spieler dessen Rucksack einem zugelassenem Typen entspricht und derzeit keine Einrichtung transportiert, kann diese über eine ACE-Fremdinteraktion abbauen und woanders wieder aufbauen.

!!! info
    Jeder zugelassene Rucksack hat standardmäßig eine Einrichtung geladen. Sollte dies nicht gewünscht sein, muss auf dem Rucksack die Variable "ttt_medic_backpack_hasTent" auf false gesetzt werden.
    Am einfachsten passiert das in der `Loadout.sqf` des Spielers mittels:

    ``` cpp
    (unitBackpack player) setVariable ["ttt_medic_backpack_hasTent", false];
    ```

## CBA-Einstellungen

``` cpp
force ttt_medic_backpack_enable = true;                                        //default: false;
force ttt_medic_backpack_supportedBackpacks = '["B_Kitbag_rgr"]';              //default: [];
force ttt_medic_backpack_facilityObject = "Land_MedicalTent_01_floor_dark_F"; //default: "Land_MedicalTent_01_floor_dark_F";
force ttt_medic_backpack_additionalItems = '["Land_FirstAidKit_01_open_F","Land_Defibrillator_F"]';  //default: [];
force ttt_medic_backpack_buildTime = 4;                                        //default: 20;
force ttt_medic_backpack_useAnimation = true;                                  //default: true;
force ttt_medic_backpack_buildAnimation = "Acts_carFixingWheel";               //default: "Acts_carFixingWheel";
```

## Beispielbild

![Eine VSS mit ttt_medic_backpack in Aktion.](https://i.imgur.com/3xIppv9.jpeg)

## Maintainer

- Andx
- EinStein
