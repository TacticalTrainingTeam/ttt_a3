---
title: Tagging2Map
description: >-
  Erstellt automatisch einen Marker auf der Karte, wenn ein Gebäude mit einem X
  per ACE-Sprühflasche oder Kreide markiert wurde.
published: true
date: '2026-11-11T12:55:24.095Z'
tags:
  - arma3
  - referenz
  - pruefung-noetig
  - ace
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

Erstellt automatisch einen Marker auf der Karte, wenn ein Gebäude mit einem **X** per ACE-Sprühflasche oder Kreide markiert wurde. Alle Farben werden unterstützt. Andere Formen (Pfeile, Kreis, Kreuz, Diamant, Quadrat, Dreieck) erzeugen keinen Kartenmarker.

Zusätzlich wird beim Platzieren einer **orangenen ACE-Markierungsfahne** (z.B. zur IED-Markierung) automatisch ein orangener Kartenmarker erstellt.

> [!NOTE]
> Eine neuere Markierung überschreibt den Kartenmarker einer älteren Markierung am selben Gebäude.

## Unterstützte Sprühfarben (nur X-Form)

| Sprühfarbe | Kartenmarker-Farbe |
| ---------- | ------------------ |
| Rot        | Rot                |
| Grün       | Grün               |
| Blau       | Blau               |
| Schwarz    | Schwarz            |
| Gelb       | Gelb               |
| Weiß       | Weiß               |

## Markierungsfahnen

| Fahne         | Kartenmarker-Farbe | Verwendungszweck |
| ------------- | ------------------ | ---------------- |
| Orange (ACE)  | Orange             | IED-Markierung   |

## CBA-Einstellungen

``` c++
force ttt_tagging2map_enabled = false; //default: true - ACE-Tagging-Markierungen aktivieren
```

## Maintainer

- Andx
