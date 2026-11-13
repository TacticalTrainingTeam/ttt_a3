---
title: FPV-Drohnenbau
description: >-
  Spieler können an einem Materialfahrzeug aus Einzelteilen FPV-Drohnen
  zusammenbauen.
published: true
date: '2026-11-12T19:58:43.504Z'
tags:
  - arma3
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

::block-infobox{name="FPV-Drohnenbau"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Spieler bauen an einem Materialfahrzeug aus Einzelteilen FPV-Drohnen zusammen.

# Voraussetzungen

- [RHS: AFRF](https://steamcommunity.com/sharedfiles/filedetails/?id=843425103) - Erforderlich
- [Ukraine FPV Drone](https://steamcommunity.com/sharedfiles/filedetails/?id=3475006113) - Erforderlich

Fehlt eine der beiden Mods, gibt es den Drohnenbau samt Modul nicht, ohne Fehlermeldung.

# Benutzung

## Für Spieler

Wer höchstens 7 m von einem Materialfahrzeug entfernt zu Fuß ist, findet in der ACE-Eigeninteraktion **FPV-Drohnenbau**. Hinter jeder [Drohne](/de/handbuch/kampfunterstützungskräfte/drohnen) steht, wie viele sich aus dem Material im Fahrzeug noch bauen lassen.

Nach 5 Sekunden Montage liegt die Drohne im Rucksack, sonst im Materialfahrzeug. Ist nirgends Platz, wird nichts verbraucht. Wer sich während der Montage zu weit entfernt, bricht ab.

| Drohne | Rahmen | Kabelbinder | Seil (6 m) | Sprengkopf |
| --- | --- | --- | --- | --- |
| AP-Drohne | 1 | 2 | - | OG-7V |
| HE-Drohne | 1 | 2 | - | TBG-7V |
| AT-Drohne | 1 | 2 | - | PG-7VL |
| LWL-Aufklärungsdrohne | 1 | 2 | 1 | - |
| LWL-AT-Drohne | 1 | 2 | 1 | PG-7VL |

Es zählt nur Material, das direkt im Laderaum des Fahrzeugs liegt, nicht im eigenen Inventar oder in Rucksäcken im Fahrzeug.

## Im Editor

Modul **Drohnen-Materialfahrzeug** (Kategorie **Tactical Training Team**) platzieren und mit einem oder mehreren Fahrzeugen oder Kisten synchronisieren.

Mit **Startbestand laden** (Standard: an) wird der Laderaum bei Missionsstart geleert und mit dem Startbestand gefüllt. Das Material belegt dann 75 % des Laderaums, der Rest bleibt für fertige Drohnen frei. Ohne Häkchen bleibt das Inventar aus dem Editor.

## In Zeus

Ist Zeus Enhanced geladen, gibt es per Rechtsklick auf ein Fahrzeug oder eine Kiste das Untermenü **TTT - FPV-Drohnenbau**:

| Aktion | Wirkung |
| --- | --- |
| Als Materialfahrzeug festlegen (Startbestand laden) | Wie das Modul mit Startbestand |
| Als Materialfahrzeug festlegen (Inventar behalten) | Inventar bleibt, wie es ist |
| Auf Startbestand auffüllen | Ergänzt, was zum Startbestand fehlt, ohne etwas zu leeren |
| Materialfahrzeug-Markierung entfernen | Fahrzeug ist kein Materialfahrzeug mehr, Inventar bleibt |

> [!WARNING]
> Missionen mit den alten Skripten `serverDroneCrafting.sqf` und `playerDroneCrafting.sqf` sollten diese samt `CfgRemoteExec`-Einträgen entfernen und das Modul nutzen. Sonst gibt es den Drohnenbau doppelt.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team > FPV-Drohnenbau**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_drone_crafting_craftTime` | `5` | Sekunden pro [Drohne](/de/handbuch/kampfunterstützungskräfte/drohnen) (1 bis 60) |
| `ttt_drone_crafting_maxDistance` | `7` | Meter zum Materialfahrzeug (2 bis 30) |
| `ttt_drone_crafting_reserveCapacity` | `0.25` | Freier Laderaum nach dem Startbestand (0 bis 0.9) |
| `ttt_drone_crafting_stock` | siehe unten | Startbestand als Liste aus `[Klassenname, Anzahl]` |

Standard-Startbestand:

```sqf
force ttt_drone_crafting_stock = '[["ACE_CableTie", 50], ["ACE_rope6", 10], ["UA_Item_EMPTY", 20], ["rhs_rpg7_OG7V_mag", 15], ["rhs_rpg7_PG7VL_mag", 15], ["rhs_rpg7_TBG7V_mag", 10]]';
```

Im Startbestand darf auch andere Ausrüstung stehen, z.B. ein RPG-7 (`rhs_weap_rpg7`). Unbekannte Klassennamen werden übersprungen. Ist die Liste fehlerhaft, bleibt der Laderaum unverändert. Änderungen wirken beim nächsten Befüllen.

# Funktionen

Alle Funktionen sind auf jedem Rechner aufrufbar, z.B. in der `initServer.sqf`.

## `ttt_drone_crafting_fnc_setVehicle`

Macht ein Fahrzeug oder eine Kiste zum Materialfahrzeug.

```sqf
[myTruck] call ttt_drone_crafting_fnc_setVehicle;        // mit Startbestand
[myTruck, false] call ttt_drone_crafting_fnc_setVehicle; // Inventar behalten
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Fahrzeug | OBJECT | Nein | - |
| 1 | Laderaum durch Startbestand ersetzen | BOOL | Ja | `true` |

Rückgabewert: keiner

## `ttt_drone_crafting_fnc_restock`

Füllt ein Materialfahrzeug auf den Startbestand auf, ohne etwas zu leeren.

```sqf
[myTruck] call ttt_drone_crafting_fnc_restock;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Materialfahrzeug | OBJECT | Nein | - |

Rückgabewert: keiner

## `ttt_drone_crafting_fnc_removeVehicle`

Entfernt die Markierung als Materialfahrzeug. Das Inventar bleibt.

```sqf
[myTruck] call ttt_drone_crafting_fnc_removeVehicle;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Fahrzeug | OBJECT | Nein | - |

Rückgabewert: keiner
