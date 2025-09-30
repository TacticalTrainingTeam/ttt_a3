---
tags:
  - Objekte
---

Stellt die folgenden nützlichen Dinge zur Verfügung:

## Bilder

Stellt TTT-Bilder anderen Addons und Missionsbauern zur Verfügung.

Zugriff auf die Bilder erfolgt über diesen Pfad `z\ttt\addons\common\data\bildname.paa`.

## Bewusstlose haben keine Kollision

Bewusstlose Spieler haben keine Kollision mit anderen Spielern - vergleichbar mit [Unconscious Collision Disabler (Steam Workshop)](https://steamcommunity.com/sharedfiles/filedetails/?id=3450571478)

## Compositions

Stellt eine Komposition zur Verfügung, um immer benutzte Module beim Anfang einer Mission einfach zu setzen:

- HC, spielbar, `hc_01`
- 3x Spectator, spielbar
- Zeus `#adminLogged`
- Zeus `#adminVoted`
- Zeus `zeus_1`
- Zeus `zeus_2`
- Zeus Missionsbauer -> SteamID eintragen!
- Leerer Marker `respawn` (TTT-Flagge mit Zuschauerkamera und techn. Teleport wird automatisch erzeugt durch [Teleport](../teleport.md))
- 2x Zivilist `zeus` + `zeus_1`

Benutzung: Im 3DEN-Editor ++f2++ "Compositions" -> "Props" -> "Other" -> "Tactical Training Team"

![Inhalt und Pfad zur Benutzung](https://i.imgur.com/kX7gUkp.jpeg)

## ACE-Fortify Presets

Definiert Vorlagen für [ACE-Fortify](https://ace3.acemod.org/wiki/framework/fortify-framework), die in Missionen und Trainings genutzt werden können:

- `TTT_OHK` für das Befestigen einzelner Gebäude im OHK
- `TTT_FOB` für das Errichten einer FOB oder eines Checkpoint
- `TTT_Camping` für Übernachtungen (z.B. in Patrouillen)
- `TTT_GM` enthält Objektes auf dem GM-DLC, nicht speziell für ein bestimmtes Szenario gedacht

### Benutzung

1. `ACE_Fortify` an Spieler ausgeben
2. als Admin im Chat `#ace-fortify blufor presetname` eingeben, `presetname` durch eins der unten angegebenen Presets ersetzen.

Alternativ kann im 3DEN-Editor das ACE-Fortify-Modul platziert werden und dort eines des Presets ausgewählt werden.

## Kisten

Fügt einige TTT-spezifische Kisten hinzu. Alle Kisten sind ein (1) ACE-Cargo groß.

### Sanitätskisten

Fügt folgende Sanitätskisten  hinzu:

- Sanitätskiste (San-Alpha) `ttt_common_sana_crate`
- Sanitätskiste (San-Bravo) `ttt_common_sanb_crate`
- Sanitätskiste (San-Charlie) `ttt_common_sanc_crate`

Inhalt ist im [Wiki San-Charlie](https://wiki.tacticalteam.de/de/Missionsbau/Nachschubkisten#san-charlie) bzw. [Wiki San-Alpha](https://wiki.tacticalteam.de/de/Missionsbau/Nachschubkisten#san-alpha) definiert.

### Pionierkisten

Fügt folgende Pionierkisten hinzu:

- Sprengkiste `ttt_common_explosives_crate`
- Pionierkiste `ttt_common_pio_crate`
- EOD-Kiste `ttt_common_eod_crate`
- EOD-Kiste mit UGV (ED-1D) `ttt_common_eod_ugv_crate`

Inhalt ist im [Wiki](https://wiki.tacticalteam.de/de/Missionsbau/Nachschubkisten#spezielle-kisten) definiert.

### Spezialkisten

- Drohnenkiste (UAV) `ttt_common_uav_crate`
- Markierkiste (Mark) `ttt_common_mark_crate`
- Fallschirmkiste `ttt_common_paradrop_crate` (Nicht verladbar!)

Inhalt ist im [Wiki](https://wiki.tacticalteam.de/de/Missionsbau/Nachschubkisten#spezielle-kisten) definiert.

## Maintainer

- Andx
