# Compat BWA3 - Leopard

Verbessert die Optiken und Anzeigen des Leopard 2.

- Die Kommandantenoptik nutzt die Warrior-Optik für ein größeres Sichtfeld (`gunnerOpticsModel`) mit grüner Wärmebilddarstellung (`thermalMode[] = {2, 3}`). Die Nachtsicht bleibt erhalten.
- Schalter und Lampen der Kommandantenoptik werden im HUD ausgeblendet (`RscInGameUI.hpp`, `ttt_compat_bwa3_RscOpticsCommanderLeopard`).
- Der Fahrer erhält einen horizontalen Kompass (`driverWeaponsInfoType`, die Klasse liegt in `compat_bwa3/RscInGameUI.hpp`, weil sie auch der Puma nutzt).

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


| Datei | Original | Änderung |
| --- | --- | --- |
| `CfgVehicles.hpp` | `BwMod_Leopard/CfgVehicles.hpp` | nur Optik und Fahrerkompass, ohne ACRE-Racks und Nebelmittelwurfanlage, Wiederholungen in einem Makro |
| `RscInGameUI.hpp` | `BwMod_Leopard/RscInGameUI.hpp` | nur die Kommandantenoptik, der Fahrerkompass wurde nach `compat_bwa3` verschoben |

Autoren laut Original: Timi007, Mishkar.

## Abhängigkeiten

- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>

## Maintainer

- Andx
