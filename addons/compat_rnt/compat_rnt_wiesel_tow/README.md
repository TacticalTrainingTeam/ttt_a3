# Compat Redd'n'Tank - Wiesel TOW

## Allgemein

- Kommandant und Ladeschütze können mit `turnOut`/`turnIn` höher bzw. tiefer steigen (UserActions `Bino_in`/`Bino_out` und `Bino2_in`/`Bino2_out`). Der normale Sitz ist währenddessen gesperrt, ein hängender Sitz wird mit der Aktion "Sitz freigeben" frei. Attribute: Kommandant `{0, 0}`/`{2}`, Ladeschütze `{0, 1}`/`{3}` (alle Pfade in `...Turrets[]`, Variablen `Redd_WieselTOW_Bino_In`/`Redd_WieselTOW_Bino2_In`).
- Der ausgestiegene Kommandant kann auf den TOW-Sitz wechseln, der ausgestiegene Ladeschütze auf den MG3-Sitz (UserActions `TOW_in`/`TOW_aus`, `MG3_in`/`MG3_aus`). Dabei werden die Sitz-Animationen und das TOW-Rohr ein- bzw. ausgeblendet (`fnc_getInTOW` usw. in `compat_rnt`).
- Tarnnetz wird automatisch angebracht, Redd'n'Tank-Aktionen zum Auf- und Abbauen sowie die Flaggen-Aktionen werden entfernt.
- Entfernt die Fahrzeug-Systemanzeigen aus dem HUD, Standard-Rucksack und Toolkit aus dem Laderaum. Der Turm ist nicht stabilisiert.

Die Config-Attribute für die Sitzlogik sind in der README von `compat_rnt` beschrieben. Die Tarnnetz-Animationsquellen stehen in `compat_rnt/XEH_preInit.sqf`.

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


Übernommen aus `addons/Redd_Wiesel_TOW` (Autoren laut Original: Lemonberries, Mishkar, Timi007): Sitze, Sitzwechsel TOW/MG3, Tarnnetz, HUD und Laderaum. Nicht übernommen wurde das Nachladen des TOW über Milan-Rohre aus dem Laderaum, hier gilt weiter das Verhalten von Redd'n'Tank.

## ACRE

Konfiguriert alle Fahrzeuge mit den gleichen Rack Einstellungen:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Vereinheitlicht außerdem das Infanterietelefon und die Bordverständigungsanlage.


## Maintainer

- Andx
