# Compat Redd'n'Tank

Enthält diverse Verbesserungen und Fixes für Redd'n'Tank Fahrzeuge. Die Fahrzeuge selbst werden in den Unterordnern (`compat_rnt_<fahrzeug>`) konfiguriert. Funktionen, Events, Einstellungen und Waffen, die von mehreren Fahrzeugen genutzt werden, liegen in diesem Hauptordner.

## Aufbau

| Ort | Inhalt |
| --- | --- |
| `functions/` | Sitzlogik (`getSeatData`, `resetSeatState`, `canGetInSeat`, `getInHigher`, `getOutHigher`, `fixGetInBug`, `handleGetIn`, `handleGetOut`), Tarnnetz (`setCamonet`), Marder-Heckklappe und -Luken (`canToggleRamp`, `openRamp`, `closeRamp`, `initRampActions`, `canGetOutHatch`, `getOutHatch`), Wiesel TOW (Sitzwechsel, Nachladen: `canLoadTOW`, `loadTOW`, `handleTOWFired`, `addTOWLoadAction`), MG3-Lafette und M120 |
| `CfgEventhandlers.hpp` | Init-Events der Fahrzeugbasisklassen (Tarnnetz nur auf dem Server, Karten-Aktion, Heckklappe des Marders, TOW-Nachladen) und das PostInit der Marder-Einstiegsaktionen |
| `XEH_preInit.sqf` | Zwischenspeicher für die Sitzdaten, Tabelle Fahrzeug -> Tarnnetz-Animationsquellen und die Events zum Sperren des Marders und zum Ändern der TOW-Magazine |
| `XEH_postInit.sqf` | Einsteigen-Aktionen von Kommandant und Fahrer des Marders (ersetzen die Standardaktionen, solange die Heckklappe geschlossen ist) |
| `CfgWeapons.hpp` | Waffenanpassungen (MK20, Milan, MG3) |
| `vehicleSystemsDisplay.inc.hpp` | leere Fahrzeug-Systemanzeigen, wird von Marder, Wiesel MK20 und TOW eingebunden |

## Sitze (höher steigen)

Der Kommandant (und beim Wiesel TOW der Ladeschütze) kann mit den Tasten zum Aus- und Einsteigen (`turnOut`/`turnIn`) höher bzw. tiefer steigen. Der normale Sitz ist währenddessen gesperrt (`ttt_common_lockSeat`), damit niemand dort einsteigt. Ein Sitz besteht aus mehreren Turmpfaden (normaler Sitz, höherer Sitz, ggf. weitere Sitze wie der TOW-Sitz), die pro Fahrzeug über Config-Attribute angegeben werden. Die Funktionen sind generisch und kennen keine Fahrzeuge:

| Attribut | Bedeutung |
| --- | --- |
| `ttt_compat_rnt_<seat>Turret[]` | Turmpfad des normalen Sitzes (`<seat>` ist `commander` oder `loader`) |
| `ttt_compat_rnt_<seat>HigherTurret[]` | Turmpfad des höheren Sitzes |
| `ttt_compat_rnt_<seat>Turrets[]` | alle Turmpfade, die zum Sitz gehören (für "Sitz frei?" und das Entsperren beim Aussteigen) |
| `ttt_compat_rnt_<seat>BinoVariable` | Fahrzeug-Variable von Redd'n'Tank, die anzeigt, dass der Sitz höher steht |
| `ttt_compat_rnt_<seat>ResetVariables[]` | weitere Fahrzeug-Variablen, die beim Ein- und Aussteigen zurückgesetzt werden |

Die Sitzdaten werden beim ersten Zugriff pro Fahrzeugklasse gelesen und zwischengespeichert (`fnc_getSeatData`). Änderungen an der Config werden daher erst nach einem Neustart des Spiels wirksam. Hängt ein Sitz nach einem Fehler fest, gibt die Aktion "Sitz freigeben" ihn wieder frei (`fnc_fixGetInBug`).

## Tarnnetz

`fnc_setCamonet` bringt das Tarnnetz an (`animateSource` der Netz-Animationen) und setzt `has_camonet` am Fahrzeug. Das passiert für alle Varianten (Flecktarn, Tropentarn, Wintertarn) der Fahrzeuge in `GVAR(camonetSources)` (`XEH_preInit.sqf`) im Init-Event auf dem Server. Die Redd'n'Tank-Aktionen zum Auf- und Abbauen und die Flaggen-Aktionen werden in den Fahrzeugen entfernt. Besatzungen unter einem Tarnnetz erhalten einen besseren `camouflageCoef` (`fnc_handleGetIn`, `fnc_handleGetOut` stellen den ursprünglichen Wert wieder her, auch wenn das Netz zwischendurch entfernt wurde).

## Marder: Heckklappe und Luken

Der Marder ist gesperrt (`lock 2`), solange die Heckklappe geschlossen ist. Fahrer und Kommandant steigen über eigene Aktionen ein (`XEH_postInit.sqf`, `GVAR(getInParams)`), die den normalen Einsteigen-Aktionen nachempfunden sind und die Sitze direkt belegen. Die Klappe öffnet sich über die Aktionen `heckluke_auf`/`heckluke_zu` (Bedingung `fnc_canToggleRamp`: Fahrer, Richtschütze oder der mittlere Lukenplatz); beim Öffnen wird der Marder entsperrt (`fnc_openRamp`, Event `ttt_compat_rnt_lock`, das lokal beim Fahrzeug läuft). Das 3DEN-Attribut "Heckklappe öffnen" (`ttt_compat_rnt_RampAttribute`) lässt die Klappe beim Spawnen offen (`fnc_initRampActions`). Die Aktionen `heckluke_auf_2`/`heckluke_zu_2` von Redd'n'Tank werden entfernt. Wer an einem Lukenplatz ausgestiegen ist (`isTurnedOut`), kann per Aktion neben der Luke aus dem Fahrzeug steigen (`fnc_canGetOutHatch`, `fnc_getOutHatch`); der Handler wartet dafür höchstens 5 Sekunden auf das Aussteigen.

## Wiesel TOW: Nachladen

Pro TOW-Schuss wird ein Milan-Rohr (`Redd_Milan_Static_Barrel`) aus dem Laderaum verbraucht (5 Rohre bei Spawn). Der TOW startet geladen mit einem Magazin (`magazines[]`), `fnc_handleTOWFired` entfernt das Magazin nach dem Schuss. Geladen wird über eine Halte-Aktion (`fnc_addTOWLoadAction`, `BIS_fnc_holdActionAdd`, 10 Sekunden). Die Aktion ist verfügbar, wenn ein Rohr im Laderaum liegt und der TOW leer ist (`fnc_canLoadTOW`), und zwar für

- den Ladeschützen auf einem seiner Sitze (normaler Sitz, MG3-Sitz, höherer Sitz),
- den Kommandanten auf einem seiner Sitze (einschließlich des TOW-Sitzes), **nur wenn kein Ladeschützen-Sitz besetzt ist**.

Das Rohr wird über das Event `ttt_common_removeBackpackCargo` dort entfernt, wo das Fahrzeug lokal ist, das Magazin über ein Turm-Event hinzugefügt (`ttt_compat_rnt_addMagazineTurret`).

## Waffen (`CfgWeapons.hpp`)

- `Redd_MK20` (Marder, Wiesel MK20) hat AP und HE als getrennte Mündungen (`AP`/`HE`). Gewechselt wird über die Waffenauswahl statt per Mausrad. Die Waffe hat 900 Schuss pro Minute, kurze Nachladezeit und eigene Reichweitenstufen für die KI (`MK20_PROPERTIES`). `Redd_MK20FL` nutzt dieselben Mündungen mit eigenen Magazinen. Die Magazinnamen (`Redd_MK20_*_Mag100/275/120/200`) stammen aus dem Original.
- `Redd_Milan`: kurze Nachladezeit, um den Ein-/Aussteigefehler zu umgehen.
- `ttt_compat_rnt_mg3`: MG3 mit kurzer Nachladezeit (MG3-Lafette).

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


| Datei | Original | Änderung |
| --- | --- | --- |
| `functions/fnc_getSeatData.sqf`, `fnc_resetSeatState.sqf` | `Redd_Wiesel_TOW/functions/fnc_handleGetIn.sqf` | herausgelöst, Config wird pro Fahrzeugklasse zwischengespeichert |
| `functions/fnc_canGetInSeat.sqf`, `fnc_fixGetInBug.sqf` | `Redd_Wiesel_TOW/functions/fnc_canGetInCommander.sqf`, `fnc_fixGetInBug.sqf` | für Kommandant und Ladeschütze verallgemeinert, Turmpfade aus der Config |
| `functions/fnc_getInHigher.sqf`, `fnc_getOutHigher.sqf` | `Redd_Wiesel_TOW/functions/fnc_getInCommanderHigher.sqf`, `fnc_getInLoaderHigher.sqf` und die Gegenstücke | zusammengeführt |
| `functions/fnc_handleGetIn.sqf`, `fnc_handleGetOut.sqf` | `Redd_Wiesel_TOW/functions/fnc_handleGetIn.sqf`, `fnc_handleGetOut.sqf` | für alle Fahrzeuge verallgemeinert, Tarnnetz-Wiederherstellung überarbeitet |
| `functions/fnc_setCamonet.sqf`, Tabelle in `XEH_preInit.sqf` | `Redd_Wiesel_MK20`, `Redd_Wiesel_TOW`, `Redd_Marder` jeweils `functions/fnc_setCamonet.sqf` | in eine Funktion mit Nachschlagetabelle zusammengeführt |
| `functions/fnc_canGetInTOW.sqf` u.a. (TOW/MG3-Sitzwechsel) | `Redd_Wiesel_TOW/functions/` gleichnamig | angepasst |
| `functions/fnc_canLoadTOW.sqf` | `Redd_Wiesel_TOW/functions/fnc_canLoadTOW.sqf` | Regel geändert: Ladeschütze lädt, ohne besetzten Ladeschützen-Sitz der Kommandant |
| `functions/fnc_loadTOW.sqf`, `fnc_handleTOWFired.sqf`, `fnc_addTOWLoadAction.sqf` (im Original `fnc_addLoadAction.sqf`) | `Redd_Wiesel_TOW/functions/` gleichnamig | Rohr wird über ein Common-Event entfernt |
| `functions/fnc_canToggleRamp.sqf` | `Redd_Marder/functions/fnc_canOpenRamp.sqf`, `fnc_canCloseRamp.sqf` | zusammengeführt |
| `functions/fnc_openRamp.sqf`, `fnc_closeRamp.sqf`, `fnc_initRampActions.sqf` | `Redd_Marder/functions/` gleichnamig | angepasst |
| `functions/fnc_canGetOutHatch.sqf`, `fnc_getOutHatch.sqf` | `Redd_Marder/functions/` gleichnamig | `getOutHatch` mit Zeitlimit und Gültigkeitsprüfung |
| `XEH_postInit.sqf` | `Redd_Marder/XEH_postInit.sqf` | Einsteigen-Aktionen von Kommandant und Fahrer |
| `CfgWeapons.hpp` (MK20) | `Redd_Main/CfgWeapons.hpp` | MK20 und MK20FL |
| `vehicleSystemsDisplay.inc.hpp` | `Redd_Wiesel_MK20/CfgVehicles.hpp` (Abschnitt `Components`) | als gemeinsame Include-Datei |
| `compat_rnt_*/CfgVehicles.hpp` | `Redd_Wiesel_MK20`, `Redd_Wiesel_TOW`, `Redd_Marder`, `Redd_Fuchs`, `Redd_Wolf`, `Redd_Luchs`, `Redd_GMW` | siehe README der Fahrzeuge |

Nicht übernommen wurden u.a. die Leiter, die Nebelmittelwurfanlage, das Nachladen (Rearm), das Milan-System und die NiArms-Anpassungen.

## Abhängigkeiten

- Redd'n'Tank Vehicles <https://steamcommunity.com/sharedfiles/filedetails/?id=1128145626>
- `ttt_common` (Sitz sperren, Karten-Aktion)

## Maintainer

- Andx
