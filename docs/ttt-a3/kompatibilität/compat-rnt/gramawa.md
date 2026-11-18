---
title: GraMaWa – Bedienung
description: >-
  Bedienungsanleitung für die Granatmaschinenwaffe (GraMaWa): Aufbauen, Laden
  mit Gurten, Höhe und Richtung verstellen.
published: true
tags:
  - arma3
  - ace
  - anleitung
  - ttt-mod
editor: markdown
dateCreated: '2026-11-18T15:00:00.000Z'
---

::block-infobox{name="GraMaWa – Bedienung"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
Kompatibilität: "Arma 3 ✅ · Reforger ❌"
```
::

Diese Seite erklärt, wie man die Granatmaschinenwaffe (GraMaWa, GMW) aus Redd'n'Tank im TTT-Mod aufbaut und bedient. Eine Übersicht aller Änderungen an Redd'n'Tank gibt es unter [Compat Redd'n'Tank](/de/ttt-a3/kompatibilität/compat-rnt).

# Aufbauen

Die GraMaWa ist auf zwei Rucksäcke verteilt: **GMW für Lafette** und **Lafette für GMW**.

1. Ein Soldat legt die Lafette ab oder trägt sie.
2. Ein zweiter Soldat mit der Waffe baut die GraMaWa im Aktionsmenü (Mausrad) auf.

Abgebaut wird sie ebenfalls über das Aktionsmenü, dann liegen wieder beide Rucksäcke bereit.

Die aufgebaute GraMaWa kann nicht zerstört werden.

# Schießen

Der Schütze steigt wie gewohnt ein und sitzt dabei in der Hocke hinter der Waffe.

# Laden

Ein Gurt hat 32 Schuss. Geladen und entladen wird über die ACE-Interaktion an der Waffe:

- **[CSW] 40mm GMW-Gurt** – im Arsenal erhältlich
- **GMW 32 Schuss Gurt** aus Redd'n'Tank – passt genauso

Das Laden dauert 10 Sekunden, das Entladen 8 Sekunden.

Wer einen **GMW Gurtkasten** aus Redd'n'Tank im Rucksack hat, kann die leere GraMaWa auch mit der ACE-Interaktion **Nachladen** laden.

# Höhe und Richtung verstellen

Die GraMaWa lässt sich in der Höhe verstellen und seitlich drehen:

- Von außen über die ACE-Interaktion an der Waffe.
- Als Schütze über die ACE-Selbstinteraktion.

| Menü | Aktionen |
| --- | --- |
| **Höhe justieren** | **Höher**, **Tiefer** |
| **Drehen** | **Links**, **Rechts** |

Ist die Waffe ganz oben oder ganz unten, verschwindet die entsprechende Aktion. Während sich die Waffe bewegt, gibt es keine weiteren Aktionen.

# Für Missionsbauer

Damit die GraMaWa wie beschrieben geladen wird, muss der **Erweiterte Zusammenbau** erzwungen sein. In den Server-Einstellungen bzw. in der `cba_settings.sqf` der Mission:

```sqf
force ace_csw_defaultAssemblyMode = true;
```
