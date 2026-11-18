# Compat BWA3 - Weapons

Waffen- und Munitionsanpassungen für BWmod:

- **MK30 (Puma):** Die Munitionsarten AP und HE sind eigene Mündungen (`AP`/`HE`) und lassen sich über die Waffenauswahl wechseln statt per Mausrad. HE macht mehr Schaden (`explosive`, `indirectHit`, `indirectHitRange`), die Magazine fassen 240 (HE/ABM) bzw. 160 (APFSDS) Schuss.
- **MG5 der Fahrzeuge:** lädt ohne Verzögerung nach und hat zusätzlich einen 1000-Schuss-Gurtkasten (`ttt_compat_bwa3_1000Rnd_762x51`).
- **Leuchtkugeln der P2A1** (Einzel- und Mehrfachstern, weiß/grün/rot): größer (`flareSize` 6), länger brennend (`timeToLive` 20) und früher gezündet (`triggerTime` 0,1). Die Mehrfachstern-Kegel entsprechen dem Wert von GM.

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


| Datei | Original | Änderung |
| --- | --- | --- |
| `CfgWeapons.hpp` | `BwMod_Weapons/CfgWeapons.hpp` | MK30 und MG5, ohne Nebelmittelwurfanlage, Makro `MK30_PROPERTIES` (im Original `MK30_PROPERITIES`) |
| `CfgMagazines.hpp` | `BwMod_Weapons/CfgMagazines.hpp` | Magazingrößen und MG5-Gurtkasten, ohne Nebelgranaten |
| `CfgAmmo.hpp` | `BwMod_Weapons/CfgAmmo.hpp`, `BwMod_P2A1/CfgAmmo.hpp`, `Flare/CfgAmmo.hpp` | HE-Schaden und Leuchtkugeln zusammengefasst |

Autor laut Original: Timi007. Die Kopfbedeckungen (`BwMod_Headgear`) und die Nebelmittelwurfanlage wurden nicht übernommen.

## Abhängigkeiten

- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>

## Maintainer

- Andx
