---
title: Common – Objekte
description: Kisten, Kompositionen, Fortify-Presets, TTT PAK und Bilder des Common-Addons.
published: true
date: '2026-11-12T19:57:20.464Z'
tags:
  - arma3
  - missionsbauer
  - referenz
  - ace
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Common – Objekte"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Kisten, Kompositionen, ACE-Fortify-Presets, das TTT PAK und weitere Grundlagen, die alle TTT-Addons nutzen.

# Voraussetzungen

- [Zeus Enhanced](https://steamcommunity.com/sharedfiles/filedetails/?id=1779063631) - Erforderlich

# Benutzung

## Kisten

Alle Kisten sind eine ACE-Ladeeinheit groß und stehen im Editor und in Zeus bereit. Der Inhalt ist unter [Nachschubkisten](/de/missionsbau/nachschubkisten) beschrieben.

| Kiste | Klassenname |
| --- | --- |
| Sanitätskiste San Alpha | `ttt_common_sana_crate` |
| Sanitätskiste San Bravo | `ttt_common_sanb_crate` |
| Sanitätskiste San Charlie | `ttt_common_sanc_crate` |
| Sprengkiste | `ttt_common_explosives_crate` |
| Pionierkiste | `ttt_common_pio_crate` |
| EOD-Kiste | `ttt_common_eod_crate` |
| EOD-Kiste mit UGV ([ED-1D](/de/handbuch/kampfunterstützungskräfte/pioniere/ed-1d)) | `ttt_common_eod_ugv_crate` |
| Drohnenkiste | `ttt_common_uav_crate` |
| Markierkiste | `ttt_common_mark_crate` |
| Fallschirm-Frachtnetz (nicht verladbar) | `ttt_common_paradrop_crate` |

## Komposition TTT-Basismodule

Setzt die Module, die jede Mission braucht. Im 3DEN-Editor mit :block-kbd[F2]{platform="pc"} unter **Compositions > Props > Other > Tactical Training Team > TTT-Basismodule**.

- [Headless Client](/de/technik/headless-client) `hc_01`
- 3 Zuschauer-Slots
- Zeus für `#adminLogged`, `#adminVoted`, `zeus_1`, `zeus_2` und den Missionsbauer (SteamID eintragen!)
- 2 Zivilisten `zeus` und `zeus_1`
- Leerer Marker `respawn`. Die TTT-Flagge mit Teleport und Zuschauerkamera entsteht dort automatisch, siehe [Teleporter und Zuschauerkamera](/de/ttt-a3/allgemein/teleport)

![Inhalt und Pfad zur Benutzung](https://i.imgur.com/kX7gUkp.jpeg)

## ACE-Fortify-Presets

| Preset | Wofür |
| --- | --- |
| `TTT_OHK` | Einzelne Gebäude im [Orts- und Häuserkampf](/de/handbuch/infanterie/ohk) befestigen |
| `TTT_FOB` | [FOB](/de/handbuch/nachschubkräfte/logistik#fob) oder [Checkpoint](/de/handbuch/infanterie/checkpoints) errichten |
| `TTT_Camping` | Übernachtungen, z.B. in Patrouillen |
| `TTT_GM` | Objekte aus dem GM-DLC |

Benutzung:

1. `ACE_Fortify` an die Spieler ausgeben.
2. Als Admin im Chat `#ace-fortify blufor TTT_FOB` eingeben (Preset nach Bedarf).

Alternativ im Editor das ACE-Fortify-Modul platzieren und dort das Preset wählen.

## TTT PAK

Das TTT PAK (`TTT_personalAidKit`) heilt einen Patienten vollständig, egal ob er bewusstlos ist oder nicht. Gedacht für einen [MedEvac](/de/handbuch/nachschubkräfte/medevac) unter [KAM](/de/handbuch/nachschubkräfte/kat-advanced-medical): Schwerverwundete werden von den Ärzten bis zur Basis am Leben gehalten und dort mit dem PAK versorgt. Die ACE-Aktion heißt **TTT PAK Nutzen**. Ob und wo es nutzbar ist, hängt von den ACE-Einstellungen ab.

## Meme-Sprühfarbe

Mit der **[Sprühfarbe](/de/handbuch/kampfunterstützungskräfte/pioniere/sprühdosen) - Meme (TTT)** (`ttt_common_spraypaintMemes`) lassen sich über ACE-Tagging TTT-Motive sprühen, z.B. "I want YOU for TTT" und "Rollator-Gang".

## Bewusstlose ohne Kollision

Bewusstlose Spieler haben keine Kollision mit anderen Spielern, ähnlich wie [Unconscious Collision Disabler](https://steamcommunity.com/sharedfiles/filedetails/?id=3450571478). Das passiert automatisch.

## Bilder

TTT-Bilder für Missionen und andere Addons liegen unter `z\ttt\addons\common\data\bildname.paa`.
