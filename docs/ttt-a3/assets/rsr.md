---
title: RsR
description: Bundeswehr-Varianten von Vanilla- und Mod-Fahrzeugen.
published: true
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

::block-infobox{name="RsR"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Bundeswehr-Varianten von Vanilla- und Mod-Fahrzeugen in Flecktarn und Tropentarn.

# Voraussetzungen

Keine. Einige Fahrzeuge gibt es nur, wenn die passende Mod geladen ist:

- [ITC Land Systems](https://steamcommunity.com/sharedfiles/filedetails/?id=1388192893) - Optional, für den Fennek als Aufklärungsfahrzeug
- [CUP Vehicles](https://steamcommunity.com/sharedfiles/filedetails/?id=541888371), [CUP Units](https://steamcommunity.com/workshop/filedetails/?id=497661914) und [CUP Weapons](https://steamcommunity.com/sharedfiles/filedetails/?id=497660133) - Optional, für Transall und Wintertarnüberzug
- [RHS: USAF](https://steamcommunity.com/sharedfiles/filedetails/?id=843577117) - Optional, für die Transall
- [BWMod](https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537) - Optional, für den [Eagle IV](/de/ttt-a3/kompatibilität/compat-bwa3#eagle-iv) San

# Benutzung

Die Fahrzeuge stehen im Editor und in Zeus bereit. Klassennamen gibt es jeweils als `_flecktarn` und `_tropentarn`:

| Fahrzeug | Klassenname | Benötigt |
| --- | --- | --- |
| Fennek (Transport, HMG, GMG) | `rsr_fennek_transport_flecktarn`, `rsr_fennek_hmg_…`, `rsr_fennek_gmg_…` | - |
| Fennek Aufklärung | `rsr_fennek_transport_RV_flecktarn`, `rsr_fennek_hmg_RV_…`, `rsr_fennek_gmg_RV_…` | ITC |
| Bergepanzer | `rsr_bergepanzer_flecktarn` | - |
| Wisent (Transport, Plane, Reparatur, Munition, Treibstoff, Sanität) | `rsr_wisent_transport_…`, `_covered_`, `_repair_`, `_ammo_`, `_fuel_`, `_medical_` | - |
| C-161 Transall 2 (auch als Fahrzeug-in-Fahrzeug) | `rsr_c_161`, `rsr_c_161_viv` | CUP oder RHS |
| [Eagle IV](/de/ttt-a3/kompatibilität/compat-bwa3#eagle-iv) San (Rotkreuz, Roter Diamant, Low Vis) | `rsr_eagle_fleck`, `_fleck_dia`, `_fleck_lowvis`, `rsr_eagle_tropen…` | BWMod |
| Wintertarn-Überzug (Uniform) | `rnt_bw_wintertarn_uniform_item` | CUP |

# Funktionen

## `ttt_rsr_fnc_removeTurretWeapon`

Blendet den Turm aus und sperrt den Schützenplatz, gedacht für den Bergepanzer. In die Init des Fahrzeugs schreiben:

```sqf
[this] call ttt_rsr_fnc_removeTurretWeapon;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Fahrzeug | OBJECT | Nein | - |

Rückgabewert: keiner
