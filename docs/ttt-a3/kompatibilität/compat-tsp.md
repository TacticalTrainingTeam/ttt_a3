---
title: Compat TSP
description: Blendet die fehlerhaften Ohrstöpsel-Aktionen von TSP aus.
published: true
tags:
  - arma3
  - referenz
  - ace
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

::block-infobox{name="Compat TSP"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
Kompatibilität: "Arma 3 ✅ · Reforger ❌"
```
::

Blendet die fehlerhaften Ohrstöpsel-Aktionen von TSP aus.

# Voraussetzungen

- [Speshal Core (TSP)](https://steamcommunity.com/workshop/filedetails/?id=3283642267) - Erforderlich

# Änderungen

Die ACE-Eigeninteraktionen von TSP zum Einsetzen und Herausnehmen der Ohrstöpsel sind ausgeblendet. Sie erzeugten im [RPT](/de/technik/rpt) den Fehler `[ACE] (interact_menu) ERROR: Action [tsp_ace_earplug_insert] bad condition return`. Die Ohrstöpsel von ACE funktionieren weiter.
