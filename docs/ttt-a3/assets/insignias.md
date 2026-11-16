---
title: Insignien
description: Fügt die TTT Farben als Schulterinsignien (linke Schulter) hinzu.
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

::block-infobox{name="Insignien"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

TTT-Farben als Schulterabzeichen und als Sprühbild für ACE-Tagging.

# Benutzung

## Abzeichen

Im Arsenal unter Abzeichen auswählen oder in der Init-Zeile einer Einheit setzen:

```sqf
[this, "TTT_Blue"] call BIS_fnc_setUnitInsignia;
```

Siehe [`BIS_fnc_setUnitInsignia`](https://community.bistudio.com/wiki/BIS_fnc_setUnitInsignia).

## Sprühfarbe

Mit der **[Sprühfarbe](/de/handbuch/kampfunterstützungskräfte/pioniere/sprühdosen) (TTT)** (`ttt_insignias_spraypaint`) im Inventar lassen sich über die ACE-Eigeninteraktion TTT-Abzeichen an Wände sprühen, in allen Farben außer Braun und Logo.

# Klassennamen

| Farbe | Großes Abzeichen | Kleines Abzeichen |
| --- | --- | --- |
| Schwarz | `TTT_Black` | `TTT_black_emblem` |
| Blau | `TTT_Blue` | `TTT_blue_emblem` |
| Bronze | `TTT_Bronze` | `TTT_bronze_emblem` |
| Braun | `TTT_Brown` | `TTT_brown_emblem` |
| Gold | `TTT_Gold` | - |
| Grau | `TTT_Grau` | `TTT_grau_emblem` |
| Grün | `TTT_Green` | `TTT_green_emblem` |
| Logo | `TTT_Logo` | - |
| Orange | `TTT_Orange` | `TTT_orange_emblem` |
| Platin | `TTT_Platinum` | `TTT_platinum_emblem` |
| Rot | `TTT_Red` | `TTT_red_emblem` |
| Silber | `TTT_Silver` | `TTT_silver_emblem` |
| Violett | `TTT_Violet` | `TTT_violet_emblem` |
| Weiß | `TTT_White` | `TTT_white_emblem` |
| Gelb | `TTT_Yellow` | `TTT_yellow_emblem` |

Außerdem:

- `TTT_EOD` - [EOD](/de/handbuch/kampfunterstützungskräfte/pioniere/kampfmittelbeseitigung)
- `TTT_red_crystal_dark` - Roter Kristall
