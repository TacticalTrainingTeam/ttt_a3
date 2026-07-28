# TTT Medizinisches Tarp

Fügt jedem Spieler, der einen der medizinischen Tarp-Gegenstände (schwarz/grün/rot/gelb) in seinem Inventar trägt, die Möglichkeit hinzu, ein medizinisches Einrichtungsobjekt über eine ACE-Eigeninteraktion aufzubauen; der Gegenstand wird dabei verbraucht.
Dies ist dann eine medizinische Einrichtung (`ace_medical_isMedicalFacility`).
Über eine ACE-Fremdinteraktion kann die aufgebaute Einrichtung wieder eingepackt werden, der Gegenstand wird dann zurückgegeben.

## CBA-Einstellungen

``` c++
force ttt_medic_tarp_additionalItems = '["Land_FirstAidKit_01_open_F","Land_Defibrillator_F"]'; //default: [];
force ttt_medic_tarp_buildTime = 4;                                                             //default: 6;
force ttt_medic_tarp_useAnimation = true;                                                       //default: true;
force ttt_medic_tarp_buildAnimation = "Acts_carFixingWheel";                                    //default: "Acts_carFixingWheel";
```

## Beispielbild

![Eine VSS mit ttt_medic_tarp in Aktion.](https://i.imgur.com/3xIppv9.jpeg)

## Maintainer

- Andx
- EinStein
