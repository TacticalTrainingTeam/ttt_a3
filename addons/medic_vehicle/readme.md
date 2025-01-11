## TTT Medizinisches Fahrzeug

Fügt bestimmten Fahrzeugen die Möglichekeit hinzu ein Objekt, wie z.B. ein Zelt über eine ACE-Fremdinteraktion aufzubauen.
Dies ist dann eine medizinische Einrichtung ("ace_medical_isMedicalFacility").
Jedes zugelassene Fahrzeug welches derzeit keine Einrichtung transportiert, kann diese dann aufnehmen indem an der Einrichtung die ACE-Fremdinteraktion zum aufladen verwendet wird.

# Hinweis

Jedes zugelassene Fahrzeug hat standardmäßig eine Einrichtung geladen. Sollte dies nicht gewünscht sein, muss auf dem Fahrzeug die Variable "ttt_medic_vehicle_hasTent" auf false gesetzt werden.
Am einfachsten passiert das in der init des Objekts mittels:
```c++
this setVariable ["ttt_medic_vehicle_hasTent", false, true];
```

## Beispiel CBA-Einstellungen

```c++
force ttt_medic_vehicle_enable = true;
force ttt_medic_vehicle_supportedVehicles = '["B_Truck_01_medical_F","B_T_Truck_01_medical_F","rsr_wisent_medical_tropentarn"]';
force ttt_medic_vehicle_facitlityObject = "Land_MedicalTent_01_NATO_tropic_generic_open_F";
force ttt_medic_vehicle_buildTime = 4;
force ttt_medic_vehicle_useAnimation = true;
force ttt_medic_vehicle_buildAnimation = "Acts_carFixingWheel";
```

## Instandhalter

- Andx
- EinStein
