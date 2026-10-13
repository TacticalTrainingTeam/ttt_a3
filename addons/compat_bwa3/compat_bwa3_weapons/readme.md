# Compat BWA3 - Weapons

Waffen- und Munitionsanpassungen für BWmod:

- Nebelmittelwurfanlage der Fahrzeuge als eigene Waffe (`ttt_compat_bwa3_weapons_SmokeLauncher`), damit Richtschütze und Kommandant sie über das Smoke-Launcher-Addon abfeuern können. Die Nebelgranaten heißen "Schnellnebelwurfkörper DM55".
- Puma-Maschinenkanone MK30: Die Munitionsarten AP und HE sind eigene Mündungen (`AP`/`HE`) und lassen sich über die Waffenauswahl wechseln statt per Mausrad. HE macht mehr Schaden (`explosive`, `indirectHit`, `indirectHitRange`), die Magazine fassen 240 (HE/ABM) bzw. 160 (APFSDS) Schuss.
- MG5 der Fahrzeuge: lädt ohne Verzögerung nach und hat zusätzlich einen 1000-Schuss-Gurtkasten (`ttt_compat_bwa3_weapons_1000Rnd_762x51`).
- Leuchtkugeln der P2A1 (Einzel- und Mehrfachstern, weiß/grün/rot): größer (`flareSize` 6), länger brennend (`timeToLive` 20) und früher gezündet (`triggerTime` 0,1). Die Mehrfachstern-Kegel entsprechen dem Wert von GM.

## Abhängigkeiten

- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Übernommen aus `addons/BwMod_Weapons`, `addons/BwMod_P2A1` und `addons/Flare` (Autor laut Original: Timi007): Nebelmittelwurfanlage, MK30, MG5 und Leuchtkugeln. Die Leuchtkugeln der beiden Originale wurden zusammengefasst. Die Kopfbedeckungen (`BwMod_Headgear`) wurden nicht übernommen.

## Maintainer

- Andx
