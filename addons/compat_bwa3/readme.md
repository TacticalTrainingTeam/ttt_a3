# Compat BWmod

Anpassungen für BWmod. Die Fahrzeuge, Waffen und Anzeigen werden in den Unterordnern konfiguriert (`compat_bwa3_leopard`, `compat_bwa3_muss`, `compat_bwa3_puma`, `compat_bwa3_weapons`, `compat_bwa3_itc`). Dieser Hauptordner enthält die Konfiguration der übrigen Fahrzeuge (ACRE-Racks, Eagle-Rucksäcke, NH-90, M120) sowie die Skripte, Tastenbelegung und Bilder des Puma.

## Aufbau (Puma)

| Ort | Inhalt |
| --- | --- |
| `functions/` | `incomingMissile`, `toggleMussMode` (MUSS), `onDrawRadar` (Radar), `toggleCamera`, `rearViewCamCargo`, `setCamera`, `setRearViewCamera` (Kameras), `setVehicleNumber` |
| `XEH_preInit.sqf` | Standard-Munition der MK30 (HE statt ABM) für zur Laufzeit erzeugte Fahrzeuge, Notify-Event |
| `XEH_postInit.sqf` | Tastenbelegung (Kameras und MUSS) |
| `compat_bwa3_map/` | Init-Event der Karten-Aktion für den Puma. Eigenes Addon, weil es `mts_map` (Metis Enhanced) braucht und ohne dieses allein übersprungen wird |
| `compat_bwa3_muss/` | `IncomingMissile`-Event der Puma-Basisklasse (MUSS). Eigenes Addon, weil es ACE Hunterkiller braucht und ohne dieses allein übersprungen wird |
| `RscInGameUI.hpp` | Fahrerkompass, der von Leopard und Puma gemeinsam genutzt wird |
| `data/` | Bilder der Fahrzeugnummern (`numbers`) und Radar-Symbole (`rsc`) |

Die Konfiguration des Puma (Optik, Waffen, HUD, Eden-Attribute) steht in `compat_bwa3_puma`.

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


| Datei | Original | Änderung |
| --- | --- | --- |
| `functions/fnc_incomingMissile.sqf` | `BwMod_Puma/functions/fnc_incomingMissile.sqf` | Prüfintervall von jedem Frame auf 0,1 s, ohne Nebeln |
| `functions/fnc_toggleMussMode.sqf` | `BwMod_Puma/functions/fnc_toggleMussMode.sqf` | nur zwei Modi (ohne Nebeln) |
| `functions/fnc_rearViewCamCargo.sqf` | `BwMod_Puma/functions/fnc_rearViewCamCargo.sqf` | Handler mit Intervall (0,25 s) statt geplanter `waitUntil`-Schleife |
| `functions/fnc_toggleCamera.sqf`, `fnc_setCamera.sqf`, `fnc_setRearViewCamera.sqf`, `fnc_setVehicleNumber.sqf`, `fnc_onDrawRadar.sqf` | `BwMod_Puma/functions/` gleichnamig | angepasst |
| `XEH_postInit.sqf` | `BwMod_Puma/initKeybinds.hpp` | Tastenbelegung für Kameras und MUSS |
| `XEH_preInit.sqf` | `BwMod_Puma/XEH_preInit.sqf` | angepasst |
| `RscInGameUI.hpp` | `BwMod_Leopard/RscInGameUI.hpp`, `BwMod_Puma/RscInGameUI.hpp` | Fahrerkompass beider Fahrzeuge zusammengeführt |
| `data/` | `BwMod_Puma/data/` | unverändert |

Nicht übernommen wurden das Nachladen (Rearm) und die Nebelmittelwurfanlage für Richtschütze und Kommandant.

## Abhängigkeiten

- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>
- ACE Hunterkiller (für die Turmausrichtung des MUSS), nur für `compat_bwa3_muss`
- Metis Enhanced (`mts_map`, ab Version 1.10.2) nur für die Karten-Aktion

## Maintainer

- Andx
