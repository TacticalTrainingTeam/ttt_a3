---
title: Screenshotmodus
description: Mit Strg+F12 könnt ihr das Ingame-UI ausblenden.
published: true
date: '2026-11-11T13:01:18.316Z'
tags:
  - arma3
  - referenz
  - pruefung-noetig
  - ace
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

Mit :block-kbd[Strg+F12]{platform="pc"} könnt ihr das Ingame-UI ausblenden.

## Funktion

Der Screenshotmodus nutzt das [ACE User Interface Framework](https://ace3.acemod.org/wiki/framework/ui-framework), um per Tastendruck das Interface von Arma auszublenden. Auf Tastendruck wird dabei von ACE ein Event ausgelöst, auf das die TTT-Mod reagiert und weitere Interfaceelemente ausblendet.

Standard-Tastenkombination: :block-kbd[Strg+F12]{platform="pc"} - kann über das Konfigurationsmenü geändert werden.

- *ACE* und *DUI Squad Radar* werden bereits von ACE verarbeitet. *ACRE* und die Vanillaelemente werden durch die TTT-Mod ausgeblendet.
- Der Chat wird ja bereits durch [Clear HUD](/de/ttt-a3/allgemein/clearhud) ausgeblendet und nicht nochmal extra verarbeitet.
- *cTab* wird automatisch dabei ausgeblendet und beim erneuten Einblenden des UI wieder in seinem vorherigen Zustand geöffnet, falls es vorher offen war.

## Maintainer

- Andx
