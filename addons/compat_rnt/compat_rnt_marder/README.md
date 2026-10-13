# Compat Redd'n'Tank - Marder

## Allgemein

- entfernt, dass der Turm gesperrt ist wenn der Fahrer überluke ist
- erhöht die Zeit bis der Motor gestartet ist auf 5 Sekunden
- fixt einige Fehler im Original

## Heckklappe, Luken und Sitze

- Das Fahrzeug ist gesperrt, solange die Heckklappe geschlossen ist (`lock 2`). Fahrer und Kommandant steigen über eigene Aktionen ein (`XEH_postInit.sqf`, `getInParams`), die den normalen Einsteigen-Aktionen nachempfunden sind. Die Klappe öffnet sich über die Aktionen `heckluke_auf`/`heckluke_zu` (Fahrer, Richtschütze und der mittlere Lukenplatz, Bedingung `fnc_canToggleRamp`); beim Öffnen wird das Fahrzeug entsperrt (`fnc_openRamp`).
- 3DEN-Attribut "Heckklappe öffnen": Die Klappe ist beim Spawnen offen (`ttt_compat_rnt_RampAttribute`, ausgewertet in `fnc_initRampActions`).
- Über die Lukenplätze kann man ausgestiegen (`isTurnedOut`) per Aktion neben der Luke aus dem Fahrzeug steigen (`fnc_getOutHatch`).
- Der Kommandant kann höher steigen, die Logik ist generisch (siehe Wiesel MK20); die Config-Attribute stehen in `CfgVehicles.hpp`. Zusätzlich werden `Redd_Marder_Commander_Up` und `Redd_Marder_Commander_Winkelspiegel` beim Ein- und Aussteigen zurückgesetzt (`ttt_compat_rnt_commanderResetVariables`).
- Das Tarnnetz wird automatisch angebracht.
- Die Kanone ist ab Spawn auf 800 m eingestellt (`discreteDistanceInitIndex = 6`).
- Turm, Kommandantenoptik und Milan sind nicht stabilisiert (`stabilizedInAxes = 0`).
- Entfernt den Standard-Rucksack und das Toolkit aus dem Laderaum.
- An den seitlichen Lukenplätzen kann ausgestiegen eine Leiter aufgestellt und angepasst werden (`fnc_initLadderActions`, Logik im Addon `vehicle_ladder`). Ein `ACE_TacticalLadder_Pack` muss im Fahrzeug liegen.
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern (Waffe `ttt_compat_rnt_SmokeLauncher`, Logik im Addon `smoke_launcher`). Die Anlage wandert dafür vom Kommandanten zum Richtschützen; `fnc_handleMarderFired` löst den Effekt von Redd und Tank aus.
- Karten-Interaktion auf der Heckklappe über Metis Enhanced (siehe `ttt_common_fnc_initMapActions`; wird übersprungen, wenn Metis Enhanced fehlt). Position und Ausrichtung kommen aus den Config-Attributen `ttt_common_mapAction*`.

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Übernommen aus `addons/Redd_Marder` (Autoren laut Original: Lemonberries, Mishkar, Timi007): Heckklappe, Luken, Leiter, Tarnnetz, Karten-Aktion, Nebelmittelwurfanlage, Anfangsentfernung, Stabilisierung und Laderaum. Die Funktionen liegen in `compat_rnt`.

## ACRE

Konfiguriert alle Fahrzeuge mit den gleichen Rack Einstellungen:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Vereinheitlicht außerdem das Infanterietelefon und die Bordverständigungsanlage.

## Maintainer

- Andx
