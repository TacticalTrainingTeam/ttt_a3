# Compat Redd'n'Tank - Marder

## Allgemein

- entfernt, dass der Turm gesperrt ist wenn der Fahrer überluke ist
- erhöht die Zeit bis der Motor gestartet ist auf 5 Sekunden
- fixt einige Fehler im Original

## Sitze, Tarnnetz, Karte

- Der Kommandant kann mit `turnOut`/`turnIn` höher bzw. tiefer steigen (UserActions `Bino_in`/`Bino_out`, Pfade `{0, 0}`/`{2}`). Der normale Sitz ist währenddessen gesperrt. Zusätzlich werden `Redd_Marder_Commander_Up` und `Redd_Marder_Commander_Winkelspiegel` beim Ein- und Aussteigen zurückgesetzt (`ttt_compat_rnt_commanderResetVariables`). "Sitz freigeben" löst einen hängenden Sitz.
- Das Tarnnetz wird automatisch angebracht, die Redd'n'Tank-Aktionen zum Auf- und Abbauen sowie die Flaggen-Aktionen werden entfernt.
- Karten-Aktion auf der Heckklappe über Metis Enhanced (`ttt_common_fnc_initMapActions`, angemeldet in `compat_rnt_map`, Attribute `ttt_common_mapAction*`). Sie ist nur verfügbar, solange die Heckklappe offen ist (`heck_luke_rotation` = 1) und wird übersprungen, wenn Metis Enhanced fehlt.

## Heckklappe und Luken

- Der Marder ist gesperrt (`lock 2`), solange die Heckklappe geschlossen ist. Fahrer und Kommandant steigen über eigene Aktionen ein (`XEH_postInit.sqf` in `compat_rnt`), alle anderen müssen die Klappe öffnen. Fahrer, Richtschütze und der mittlere Lukenplatz öffnen und schließen sie über die Aktionen `heckluke_auf`/`heckluke_zu`; beim Öffnen wird der Marder entsperrt.
- 3DEN-Attribut "Heckklappe öffnen" (`ttt_compat_rnt_RampAttribute`): Die Klappe ist beim Spawnen offen.
- Wer an einem Lukenplatz ausgestiegen ist (`isTurnedOut`), kann per Aktion neben der Luke aus dem Fahrzeug steigen (Kommandant, Fahrer, links, rechts, Mitte). Das Auslösen läuft über `GetOutHatch*` (UserActions).
- Die Redd'n'Tank-Aktionen `heckluke_auf_2`/`heckluke_zu_2` werden entfernt.

## Kanone und Optik

- Die Kanone ist ab Spawn auf 800 m eingestellt (`discreteDistanceInitIndex = 6`).
- Leert die Fahrzeug-Systemanzeigen im HUD.
- Waffe: `Redd_MK20` mit den Mündungen AP und HE, siehe `compat_rnt`.
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern (`ttt_smoke_launcher_muzzle`, Logik im Addon `smoke_launcher`). Die Anlage wandert dafür als ausgeblendete Kopie `ttt_compat_rnt_SmokeLauncher` (`compat_rnt/CfgWeapons.hpp`) vom Kommandanten zum Richtschützen. Den Rauch erzeugt `Redd_fnc_SmokeLauncher`, ausgelöst von `fnc_handleMarderFired` über einen eigenen `FiredBIS`-Handler. Redds `fired`-Handler (`redd_fnc_Marder_Fired`) bleibt unangetastet, weil er auch das leere Milan-Rohr abwirft.

## Milan

- Die Milan startet abgebaut und leer (`magazines[] = {}` im Turm `Redd_Milan`, Pfad `{1}`). Im Laderaum liegen vier Rohre (`Redd_Milan_Static_Barrel`, `TransportBackpacks`, bei Redd'n'Tank eines plus vier geladene Flugkörper am Turm) und ein Dreibein (`Redd_Milan_Static_Tripod`).
- Halte-Aktionen (10 Sekunden, `fnc_initMilanActions` in `compat_rnt`):
  - **Milan aufbauen**: nimmt das Dreibein aus dem Laderaum, ein GM-Dreibein (`gm_milan_launcher_weaponBag`) wird bevorzugt. **Milan abbauen**: nur leer und unbesetzt, legt das verwendete Dreibein zurück (`ttt_compat_rnt_milanTripod`).
  - **Milan laden**: nimmt ein Rohr aus dem Laderaum. **Milan entladen**: legt es zurück.
  - Aufbauen und Abbauen darf der ausgestiegene Kommandant bzw. der höhere Kommandantensitz, Laden und Entladen zusätzlich der ausgestiegene Platz an der rechten Luke (`fnc_canOperateMilan`). Der Kommandant wird über den Turmpfad `{0, 0}` erkannt, nicht über `commander`: Kommandantensitz, Milan und höherer Sitz sind alle `primaryObserver`, `commander` liefert daher nicht zuverlässig den Kommandantensitz.
- Nach einem Schuss entfernt `fnc_handleMarderFired` das Magazin (es bliebe sonst im Turm) und blendet das Rohr aus (`ReloadMagazine` auf `user` umgestellt). Redds `fired`-Handler wirft weiterhin das leere Rohr ab.
- Ein- und Aussteigen auf die Milan (`milan_in`/`milan_aus`) laufen über `fnc_canGetInMilan`/`fnc_getInMilan` bzw. `fnc_canGetOutMilan`/`fnc_getOutMilan` mit dem Sitzsperren von `common` statt `remoteExecCall lockTurret`. Redds Aktionen `milan_auf`/`milan_ab` entfallen.
- Die Milan ist nicht stabilisiert (`stabilizedInAxes = 0`), ihre Optik nutzt die Milan-Anzeige ohne Entfernungsmesser (`ttt_compat_rnt_RSC_Milan`) und leere Fahrzeug-Systemanzeigen (`vehicleSystemsDisplay.inc.hpp`). Der höhere Kommandantensitz (`Luchs_Bino_Turret_Com`, `{2}`) bekommt ebenfalls diese Anzeige und keine Magazine. Die Nachtsicht der Milan-Tagoptik bleibt erhalten (im Original entfernt).

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


Übernommen aus `addons/Redd_Marder` (Autoren laut Original: Lemonberries, Mishkar, Timi007): Sitze, Heckklappe, Luken, Tarnnetz, Karten-Aktion, Anfangsentfernung und HUD. Die Funktionen liegen in `compat_rnt` bzw. `common`. Ebenfalls übernommen: Nebelmittelwurfanlage und Milan. Nicht übernommen wurden Leiter und Nachladen.

## ACRE

Konfiguriert alle Fahrzeuge mit den gleichen Rack Einstellungen:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Vereinheitlicht außerdem das Infanterietelefon und die Bordverständigungsanlage.


## Maintainer

- Andx
