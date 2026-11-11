---
title: Discord Rich Presence
description: Zeigt im Discord einige Informationen über die Mission, die wir spielen, an.
published: true
date: '2026-11-11T13:03:20.045Z'
tags:
  - arma3
  - referenz
  - pruefung-noetig
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

Zeigt im Discord einige Informationen über die Mission, die wir spielen, an. Fügt außerdem einen Link zu unserer Mitmachen-Seite und zu unserem Discord hinzu.
Kann unter `Konfigurieren` - `Addon Einstellungen` - `Tactical Training Team` - `Discord Rich Presence` teilweise deaktiviert werden.

Wenn deaktiviert, werden folgende Informationen nicht mehr angezeigt:

- Missionsname
- Spielerzahl
- Slot

## CBA-Einstellungen

``` c++
force ttt_discord_richpresence_enableDRP = false; //default: true
```

## Maintainer

- Andx
