---
title: Konterartillerie
description: Lässt feindliche Artillerie auf das Feuer der eigenen Artillerie reagieren.
published: true
tags:
  - arma3
  - missionsbauer
  - referenz
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

::block-infobox{name="Konterartillerie"}
```yaml
Ansprechpartner: "Andx (Discord: andx), EinStein"
Kompatibilität: "Arma 3 ✅ · Reforger ❌"
```
::

Feindliche [Artillerie](/de/handbuch/kampfunterstützungskräfte/artillerie) antwortet automatisch mit Gegenfeuer, sobald die eigene Artillerie schießt.

# Benutzung

## Module

Beide Module liegen im Editor unter **Module > Unterstützung**.

::block-steps
1. **Konterartillerie - Feindl. [Artillerie](/de/handbuch/kampfunterstützungskräfte/artillerie)** platzieren und mit den feindlichen Geschützen synchronisieren.
2. **Konterartillerie - Freundl. Artillerie** platzieren und mit den eigenen Geschützen synchronisieren.
3. Beide Module miteinander synchronisieren. Damit ist festgelegt, welche feindliche Gruppe auf welche eigene Gruppe antwortet.
::

Es können beliebig viele solcher Paare auf einer Karte stehen, jedes Paar arbeitet für sich.

Attribute des Moduls **Freundl. Artillerie**:

| Attribut | Standard | Beschreibung |
| --- | --- | --- |
| Radius | 100 | Streuradius des Gegenfeuers in Metern |
| Schüsse | 5 | Schüsse pro feindlichem Geschütz |
| Radius verkleinern | an | Jeder weitere Schuss liegt näher am Ziel |
| Verzögerung | 5 | Sekunden nach dem ersten eigenen Schuss, bis das Gegenfeuer beginnt |

## Ohne Module

Eigene Geschütze lassen sich auch ohne Modul anmelden, z.B. Artillerie, die erst während der Mission entsteht. Dafür gibt es [`ttt_counterari_fnc_addFriendlyArtillery`](#tttcounterarifncaddfriendlyartillery).

In der Init-Zeile des eigenen Geschützes:

```sqf
[this, [feindAri_1, feindAri_2], 100, 5, true, 5] call ttt_counterari_fnc_addFriendlyArtillery;
```

Für ein Geschütz, das per Skript erstellt wird, muss die Anmeldung auf allen Rechnern laufen, auch bei später beitretenden Spielern. Dafür gibt es das Event `ttt_counterari_addFriendlyArtillery` mit denselben Argumenten:

```sqf
["ttt_counterari_addFriendlyArtillery", [_geschuetz, [feindAri_1, feindAri_2], 100, 5, true, 5]] call CBA_fnc_globalEventJIP;
```

> [!WARNING] Veraltet
>
> Das Event `ttt_counterari_counterFire` in einem eigenen `Fired`-Eventhandler funktioniert noch, wird aber in einer späteren Version entfernt. Es schickt bei jedem Schuss alle Einstellungen an den Server. Bitte stattdessen `ttt_counterari_fnc_addFriendlyArtillery` verwenden.

# Funktionen

`ttt_counterari_fnc_addFriendlyArtillery` läuft auf jedem Rechner, alle anderen Funktionen nur auf dem Server.

## `ttt_counterari_fnc_addFriendlyArtillery`

Meldet ein eigenes Geschütz an, damit die angegebenen feindlichen Geschütze bei jedem Artillerieschuss zurückfeuern. Schüsse aus anderen Waffen des Fahrzeugs, z.B. einem MG, lösen kein Gegenfeuer aus. Ein erneuter Aufruf für dasselbe Geschütz ersetzt die alten Einstellungen.

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Eigenes Geschütz | OBJECT | Nein | - |
| 1 | Feindliche Geschütze | ARRAY | Nein | - |
| 2 | Radius in Metern | NUMBER | Ja | `100` |
| 3 | Schüsse pro Geschütz | NUMBER | Ja | `5` |
| 4 | Radius verkleinern | BOOL | Ja | `true` |
| 5 | Verzögerung in Sekunden | NUMBER | Ja | `5` |

Rückgabewert: BOOL, `true` wenn das Geschütz angemeldet wurde.

## `ttt_counterari_fnc_counterFire`

Lässt feindliche Geschütze einmalig auf die Position eines eigenen Geschützes feuern. Für Gegenfeuer bei jedem Schuss ist [`ttt_counterari_fnc_addFriendlyArtillery`](#tttcounterarifncaddfriendlyartillery) gedacht.

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Eigenes Geschütz, das geschossen hat | OBJECT | Nein | - |
| 1 | Magazin des Schusses | STRING | Nein | - |
| 2 | Feindliche Geschütze | ARRAY | Nein | - |
| 3 | Radius in Metern | NUMBER | Ja | `100` |
| 4 | Schüsse pro Geschütz | NUMBER | Ja | zufällig 3 bis 5 |
| 5 | Radius verkleinern | BOOL | Ja | `true` |
| 6 | Verzögerung in Sekunden | NUMBER | Ja | `0` |

Rückgabewert: BOOL, `true` wenn das Feuer ausgelöst wurde.

## `ttt_counterari_fnc_positionFire`

Lässt Geschütze auf einen beliebigen Punkt feuern, z.B. aus einem Trigger mit **Nur Server**.

```sqf
[thisTrigger, 100, 4, true, [feindAri_1, feindAri_2]] call ttt_counterari_fnc_positionFire;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Ziel (Objekt oder Trigger) | OBJECT | Nein | - |
| 1 | Radius in Metern | NUMBER | Nein | - |
| 2 | Schüsse pro Geschütz | NUMBER | Nein | - |
| 3 | Radius verkleinern | BOOL | Nein | - |
| 4 | Geschütze, die feuern sollen | ARRAY | Nein | - |

Rückgabewert: BOOL, `true` wenn das Feuer ausgelöst wurde.
