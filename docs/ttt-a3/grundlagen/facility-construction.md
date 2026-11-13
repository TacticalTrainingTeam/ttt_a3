---
title: Facility Construction
description: >-
  Interne Grundlage für Addons, mit denen sich in der Nähe eines Fahrzeugs ein
  Objekt (z.B. ein Sanitätszelt oder eine Werkstatt) auf- und wieder abbauen
  lässt.
published: true
date: '2026-11-12T12:40:17.734Z'
tags:
  - arma3
  - referenz
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Facility Construction"}
```yaml
Ansprechpartner: "Andx (Discord: andx), EinStein"
```
::

Grundlage für Addons, mit denen ein Fahrzeug ein Objekt wie ein Sanitätszelt oder eine Werkstatt auf- und wieder abbaut.

# Benutzung

Für Missionsbauer gibt es hier nichts einzustellen. Alles Nötige steht bei den Addons, die darauf aufbauen:

- [TTT Medizinisches Fahrzeug](/de/ttt-a3/funktional/medic-vehicle)
- [TTT Reparaturstation Fahrzeug](/de/ttt-a3/funktional/repair-vehicle)

# Funktionen

## `ttt_facility_construction_fnc_addActions`

Für Addon-Entwickler: Registriert die ACE-Interaktionen zum Auf- und Abbauen für ein eigenes Addon. Wird jedes Mal aufgerufen, wenn sich dessen Einstellungen ändern.

```sqf
[_context] call ttt_facility_construction_fnc_addActions;
```

`_context` ist eine HashMap mit diesen Schlüsseln:

| Schlüssel | Typ | Beschreibung |
| --- | --- | --- |
| `varPrefix` | STRING | Präfix für alle Objektvariablen, z.B. `"ttt_medic_vehicle"` |
| `legacyHasFacilityVar` | STRING | Optional: alter Variablenname für "hat Einrichtung geladen" |
| `enable` | BOOL | `false` entfernt die Aktionen nur |
| `supportedVehicles` | ARRAY | Klassennamen der Fahrzeuge |
| `facilityObject` | STRING | Klassenname des Objekts, das aufgebaut wird |
| `buildTime` | NUMBER | Sekunden für den Fortschrittsbalken |
| `useAnimation` | BOOL | Animation abspielen |
| `buildAnimation` | STRING | Animation |
| `facilityMarkerVar` | STRING | Variable, die auf dem Objekt `true` gesetzt wird, z.B. `"ace_medical_isMedicalFacility"` |
| `actionIdConstruct` | STRING | Eindeutige ID der Aufbau-Aktion |
| `actionIdDeconstruct` | STRING | Eindeutige ID der Abbau-Aktion |
| `strings` | HASHMAP | Texte: `actionConstruct`, `actionDeconstruct`, `abort`, `hintErrorNoSpace`, `hintLoaded` |
| `extraConstructFx` | CODE | Optional: wird nach dem Aufbau mit `[_facility]` aufgerufen |

Rückgabewert: keiner
