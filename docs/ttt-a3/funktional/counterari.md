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

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Konterartillerie"}
```yaml
Ansprechpartner: "Andx (Discord: andx), EinStein"
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

Für Artillerie, die erst während der Mission entsteht, lässt sich das Gegenfeuer per Event anbinden. Die Argumente sind dieselben wie bei [`ttt_counterari_fnc_counterFire`](#tttcounterarifnccounterfire).

```sqf
_geschuetz addEventHandler ["Fired", {
    ["ttt_counterari_counterFire", [_this select 0, _this select 5, [feindAri_1, feindAri_2], 100, 5, true, 5]] call CBA_fnc_serverEvent;
}];
```

# Funktionen

Beide Funktionen laufen nur auf dem Server.

## `ttt_counterari_fnc_counterFire`

Lässt feindliche Geschütze auf die Position eines eigenen Geschützes feuern. Wird normalerweise über das Event `ttt_counterari_counterFire` aufgerufen (siehe [Ohne Module](#ohne-module)).

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
