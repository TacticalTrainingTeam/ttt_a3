---
title: KI-Kapitulation
description: >-
  Das Surrender-Modul sorgt dafür, dass feindliche KI-Einheiten in einem
  festgelegten Bereich kapitulieren koennen, wenn sie deutlich in Unterzahl
  sind.
published: true
date: '2026-11-11T13:02:03.752Z'
tags:
  - arma3
  - missionsbauer
  - referenz
  - pruefung-noetig
  - ace
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

Das Surrender-Modul sorgt dafür, dass feindliche KI-Einheiten in einem festgelegten Bereich kapitulieren können, wenn sie deutlich in Unterzahl sind.

Die Kapitulation wird über ACE Captives umgesetzt. Kapitulierte KI hebt die Hände und gilt als ergeben.

## Benutzung

1. Platziere in 3DEN das Modul `KI-Kapitulation` auf der Karte.
2. Lege den Wirkbereich des Moduls über den Modulradius fest.
3. Stelle ein, welche Seite als `Feindlich` und welche als `Freundlich` gelten soll.
4. Konfiguriere Verhältnis und Kapitulationschance nach Missionsbedarf.

> [!NOTE]
> Die Prüfung erfolgt regelmässig im Modulbereich. Nur feindliche KI-Einheiten innerhalb dieses Bereichs können kapitulieren.

> [!TIP]
> **Modul beenden**
>
> Wird das Modul während der Mission gelöscht (z.B. durch Zeus), endet die Prüfung sofort. Danach kapituliert keine weitere Einheit.

## Modul-Attribute

- `Feindliche Seite`: Seite, deren KI-Einheiten kapitulieren können.
- `Freundliche Seite`: Seite, die zahlenmässig überlegen sein muss.
- `Unterlegenheitsverhältnis`: Wie stark die freundliche Seite überlegen sein muss (z.B. `2x` = mindestens doppelt so viele freundliche Einheiten wie feindliche).
- `Kapitulationschance`: Wahrscheinlichkeit pro Prüfung, dass eine unterlegene feindliche KI-Einheit kapituliert (`0%` bis `100%`).

## Maintainer

- Andx
- EinStein
