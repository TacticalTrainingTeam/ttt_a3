---
title: TTT Medizinisches Fahrzeug
description: >-
  Bestimmte Fahrzeuge können ein Sanitätszelt aufbauen, das in ACE als
  medizinische Einrichtung zählt.
published: true
date: '2026-11-12T12:15:11.697Z'
tags:
  - arma3
  - sanitaet
  - referenz
  - ace
  - ttt-mod
  - missionsbauer
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="TTT Medizinisches Fahrzeug"}
```yaml
Ansprechpartner: "Andx (Discord: andx), EinStein"
```
::

Bestimmte Fahrzeuge können ein Sanitätszelt aufbauen, das in ACE als medizinische Einrichtung zählt (`ace_medical_isMedicalFacility`).

# Benutzung

- **Aufbauen:** Am Fahrzeug die ACE-Interaktion **Errichte medizinische Einrichtung** wählen. Das Zelt entsteht hinter dem Fahrzeug.
- **Abbauen:** Am Zelt die ACE-Interaktion **Verlade medizinische Einrichtung in Fahrzeug** wählen. Das Zelt kommt zurück in das Fahrzeug, aus dem es aufgebaut wurde. Ein Hinweis zeigt Richtung und Entfernung zu diesem Fahrzeug.

Jedes zugelassene Fahrzeug hat zu Beginn ein Zelt geladen. Soll ein Fahrzeug keines haben, in seine Init schreiben:

```sqf
this setVariable ["ttt_medic_vehicle_hasFacility", false, true];
```

Der alte Variablenname `ttt_medic_vehicle_hasTent` funktioniert weiter, sollte in neuen Missionen aber nicht mehr verwendet werden.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_medic_vehicle_enable` | `false` | Funktion aktivieren |
| `ttt_medic_vehicle_supportedVehicles` | `"[]"` | Klassennamen der Fahrzeuge, z.B. `'["B_Truck_01_medical_F"]'` |
| `ttt_medic_vehicle_facilityObject` | `"Land_MedicalTent_01_NATO_generic_open_F"` | Objekt, das aufgebaut wird |
| `ttt_medic_vehicle_buildTime` | `30` | Sekunden für Auf- und Abbau (2 bis 60) |
| `ttt_medic_vehicle_useAnimation` | `true` | Beim Aufbauen eine Animation abspielen |
| `ttt_medic_vehicle_buildAnimation` | `"Acts_carFixingWheel"` | Animation beim Aufbauen |
