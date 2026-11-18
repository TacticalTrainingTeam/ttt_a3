# Compat Redd'n'Tank - MG3 BWMod

Macht die MG3-Gurte der BWMod auf der MG3-Lafette (`compat_rnt_mg3`) ladbar:

| Klasse | Name im Spiel | BWMod-Addon |
| --- | --- | --- |
| `BWA3_120Rnd_762x51` | Gurtkasten 7,62x51mm 120-Schuss | `bwa3_mg3` |
| `BWA3_120Rnd_762x51_Tracer` | Gurtkasten 7,62x51mm 120-Schuss (Leuchtspur) | `bwa3_mg3` |
| `BWA3_120Rnd_762x51_soft` | Gurttasche 7,62x51mm 120-Schuss | `bwa3_mg5` |
| `BWA3_120Rnd_762x51_Tracer_soft` | Gurttasche 7,62x51mm 120-Schuss (Leuchtspur) | `bwa3_mg5` |

Drei Stellen sind nötig, damit ACE CSW einen Gurt an der Lafette laden kann:

- `CfgMagazineGroups.hpp`: jeder Gurt ist seine eigene Magazingruppe (`ace_csw_groups`), d. h. der Gurt aus dem Inventar wird unverändert in die Waffe geladen.
- `CfgMagazineWells.hpp`: erweitert die Magazinschacht-Klasse `ttt_compat_rnt_mg3_762x51` aus `compat_rnt_mg3` um ein zweites Array (`BWA3_Magazines[]`). Eine eigene Klasse wäre hier nicht möglich: `GVAR` beider Unteraddons ergibt denselben Namen, weil `GVAR` auf dem Hauptaddon `compat_rnt` beruht.
- `CfgWeapons.hpp`: hängt die Gurte an `magazines[]` von `Redd_MG3_Static` an (`+=`). `requiredAddons` enthält `ttt_compat_rnt_mg3`, damit das nach dessen Änderung passiert und dessen Einträge erhalten bleiben.

Eigenes Addon, damit die Lafette auch ohne BWMod funktioniert: Fehlt `bwa3_mg3` oder `bwa3_mg5`, wird nur dieses Addon übersprungen (`skipWhenMissingDependencies`).

## Herkunft

Dieses Addon stammt aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Es wurde mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Eine Kopie der Lizenz liegt als `LICENSE.PzGrenBtl402` im Hauptordner des Addons; sie gilt nur für die übernommenen Dateien. Jede übernommene Config-Datei trägt einen entsprechenden Kommentar am Anfang.

| Datei | Original | Änderung |
| --- | --- | --- |
| `CfgMagazineGroups.hpp` | `BwMod_Redd_MG3/CfgMagazineGroups.hpp` | unverändert |
| `CfgMagazineWells.hpp` | `BwMod_Redd_MG3/CfgMagazineWells.hpp` | erweitert den Magazinschacht von `compat_rnt_mg3` statt einen eigenen anzulegen |
| `CfgWeapons.hpp` | `BwMod_Redd_MG3/CfgWeapons.hpp` | ohne `magazineWell[] +=`, der Schacht ist schon gesetzt |

Autoren laut Original: Zumi, Timi007.

## Abhängigkeiten

- BWMod (`bwa3_mg3`, `bwa3_mg5`)
- `compat_rnt_mg3`

## Maintainer

- Andx
