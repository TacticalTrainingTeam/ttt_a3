# Compat Redd'n'Tank - Wiesel MK20

## Allgemein

- Kommandant kann mit der Tastenkombination zum Aussteigen (`turnOut`/`turnIn`) höher bzw. tiefer steigen. Der normale Kommandantensitz ist währenddessen gesperrt (`ttt_common_lockSeat`). Hängt der Sitz nach einem Fehler fest, gibt die Aktion "Sitz freigeben" ihn wieder frei.
- Tarnnetz wird automatisch angebracht (nur Server, per Init-Event). Die Redd'n'Tank-Aktionen zum Auf- und Abbauen sowie die Flaggen-Aktionen werden entfernt. Besatzungen mit Tarnnetz erhalten einen besseren `camouflageCoef`.
- Entfernt die Fahrzeug-Systemanzeigen aus dem HUD.

Die Logik liegt generisch in `compat_rnt` (`fnc_getInHigher`, `fnc_handleGetIn` usw.) und wird über die Config-Attribute des Fahrzeugs gesteuert (siehe README von `compat_rnt`). Die Tarnnetz-Animationsquellen stehen in `compat_rnt/XEH_preInit.sqf`.

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Übernommen aus `addons/Redd_Wiesel_MK20` (Autoren laut Original: Lemonberries, Mishkar, Timi007): Config (Höher steigen, Tarnnetz, HUD) und Funktionen, die zu generischen Funktionen in `compat_rnt` zusammengeführt wurden.

## ACRE

Konfiguriert alle Fahrzeuge mit den gleichen Rack Einstellungen:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Vereinheitlicht außerdem das Infanterietelefon und die Bordverständigungsanlage.

## Maintainer

- Andx
