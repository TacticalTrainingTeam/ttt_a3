# Compat Redd'n'Tank - Wiesel MK20

## Allgemein

- Der Kommandant kann mit `turnOut`/`turnIn` höher bzw. tiefer steigen (UserActions `Bino_in`/`Bino_out`), solange die Luke offen ist (`hatchCommander_Source`). Der normale Kommandantensitz ist währenddessen gesperrt. Hängt der Sitz fest, gibt die Aktion "Sitz freigeben" ihn frei. Die Logik ist generisch und steht in der README von `compat_rnt`; hier stehen nur die Attribute (`ttt_compat_rnt_commanderTurret[]` = `{0}`, `...HigherTurret[]` = `{1}`, `...Turrets[]`, `...BinoVariable` = `Redd_wieselMk20_Bino_In`).
- Tarnnetz wird automatisch angebracht (nur Server, per Init-Event). Die Redd'n'Tank-Aktionen zum Auf- und Abbauen sowie die Flaggen-Aktionen werden entfernt. Besatzungen mit Tarnnetz erhalten einen besseren `camouflageCoef`.
- Entfernt die Fahrzeug-Systemanzeigen aus dem HUD (`vehicleSystemsDisplay.inc.hpp`) und stabilisiert den Turm nicht (`stabilizedInAxes = 0`).
- Waffe: `Redd_MK20` mit den Mündungen AP und HE, siehe `compat_rnt`.

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


Übernommen aus `addons/Redd_Wiesel_MK20` (Autoren laut Original: Lemonberries, Mishkar, Timi007): Höher steigen, Tarnnetz, HUD und Stabilisierung. Die Funktionen wurden zu generischen Funktionen in `compat_rnt` zusammengeführt. Nicht übernommen wurden die Fahrerkompass- und Nachtsicht-Änderungen.

## ACRE

Konfiguriert alle Fahrzeuge mit den gleichen Rack Einstellungen:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Vereinheitlicht außerdem das Infanterietelefon und die Bordverständigungsanlage.


## Maintainer

- Andx
