---
title: Compat 3CB Equipment
description: Verbesserungen von Gegenständen aus 3CB Equipment.
published: true
date: '2026-11-12T19:58:46.302Z'
tags:
  - arma3
  - referenz
  - ace
  - 3cb
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Compat 3CB Equipment"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Gibt einigen 3CB-Rucksäcken [Klappspaten](/de/handbuch/kampfunterstützungskräfte/pioniere/klappspaten) oder [Drahtschneider](/de/handbuch/kampfunterstützungskräfte/pioniere/drahtschneider) und blendet fehlerhafte ALICE-Rucksäcke aus.

# Voraussetzungen

- [3CB BAF Equipment](https://steamcommunity.com/sharedfiles/filedetails/?id=893328083) - Erforderlich

# Änderungen

## Klappspaten und Drahtschneider

| Rucksack | [Klappspaten](/de/handbuch/kampfunterstützungskräfte/pioniere/klappspaten) | [Drahtschneider](/de/handbuch/kampfunterstützungskräfte/pioniere/drahtschneider) |
| --- | :---: | :---: |
| `UK3CB_BAF_B_Bergen_MTP_Engineer_H_A` | ja | ja |
| `UK3CB_BAF_B_Bergen_MTP_Engineer_L_A` | - | ja |
| `UK3CB_BAF_B_Bergen_MTP_Rifleman_H_A` | ja | - |
| `UK3CB_BAF_B_Bergen_MTP_Rifleman_H_B` | ja | - |
| `UK3CB_BAF_B_Bergen_MTP_PointMan_H_A` | ja | - |
| `UK3CB_BAF_B_Bergen_MTP_Radio_H_B` | ja | - |

## ALICE-Rucksäcke

Die ALICE-Rucksäcke (`UK3CB_BAF_Alice_Pack_*`) sind ausgeblendet, weil ihnen das Inventarbild fehlt. Das beseitigt die Meldungen `Picture ... icon_alicepack_*_ca.paa not found` im [RPT](/de/technik/rpt).
