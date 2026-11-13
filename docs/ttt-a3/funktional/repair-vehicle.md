---
title: TTT Reparaturstation Fahrzeug
description: >-
  Bestimmte Fahrzeuge können eine Werkstatt aufbauen, die in ACE als
  Reparatureinrichtung zählt.
published: true
tags:
  - arma3
  - referenz
  - ace
  - ttt-mod
  - missionsbauer
  - logistik
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="TTT Reparaturstation Fahrzeug"}
```yaml
Ansprechpartner: "Andx (Discord: andx), EinStein"
```
::

Bestimmte Fahrzeuge können eine Werkstatt aufbauen, die in ACE als Reparatureinrichtung zählt (`ACE_isRepairFacility`).

# Benutzung

- **Aufbauen:** Am Fahrzeug die ACE-Interaktion **Errichte Reparaturstation** wählen. Die Werkstatt entsteht hinter dem Fahrzeug.
- **Abbauen:** An der Werkstatt die ACE-Interaktion **Verlade Reparaturstation in Fahrzeug** wählen. Die Werkstatt kommt zurück in das Fahrzeug, aus dem sie aufgebaut wurde. Ein Hinweis zeigt Richtung und Entfernung zu diesem Fahrzeug.

Jedes zugelassene Fahrzeug hat zu Beginn eine Werkstatt geladen. Soll ein Fahrzeug keine haben, in seine Init schreiben:

```sqf
this setVariable ["ttt_repair_vehicle_hasFacility", false, true];
```

Der alte Variablenname `ttt_repair_vehicle_hasWorkshop` funktioniert weiter, sollte in neuen Missionen aber nicht mehr verwendet werden.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_repair_vehicle_enable` | `false` | Funktion aktivieren |
| `ttt_repair_vehicle_supportedVehicles` | `"[]"` | Klassennamen der Fahrzeuge, z.B. `'["B_Truck_01_Repair_F"]'` |
| `ttt_repair_vehicle_facilityObject` | `"Land_RepairDepot_01_green_F"` | Objekt, das aufgebaut wird |
| `ttt_repair_vehicle_buildTime` | `30` | Sekunden für Auf- und Abbau (2 bis 60) |
| `ttt_repair_vehicle_useAnimation` | `true` | Beim Aufbauen eine Animation abspielen |
| `ttt_repair_vehicle_buildAnimation` | `"Acts_carFixingWheel"` | Animation beim Aufbauen |
