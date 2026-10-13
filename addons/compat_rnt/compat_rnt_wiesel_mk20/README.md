# Compat Redd'n'Tank - Wiesel MK20

## Allgemein

- Kommandant kann mit der Tastenkombination zum Aussteigen (`turnOut`/`turnIn`) höher bzw. tiefer steigen. Der normale Kommandantensitz ist währenddessen gesperrt (`ttt_common_fnc_lockSeat`). Hängt der Sitz nach einem Fehler fest, gibt die Aktion "Sitz freigeben" ihn wieder frei.
- Tarnnetz wird automatisch angebracht (nur Server, per Init-Event). Die Redd'n'Tank-Aktionen zum Auf- und Abbauen sowie die Flaggen-Aktionen werden entfernt. Besatzungen mit Tarnnetz erhalten einen besseren `camouflageCoef`.
- Entfernt die Fahrzeug-Systemanzeigen aus dem HUD und die Nachtsicht aus Gunner-Optiken.

Die Logik liegt generisch in `compat_rnt` (`fnc_getInHigher`, `fnc_handleGetIn` usw.) und wird über die Config-Attribute `ttt_compat_rnt_commanderTurrets`, `ttt_compat_rnt_commanderTurret`, `ttt_compat_rnt_commanderHigherTurret` und `ttt_compat_rnt_commanderBinoVariable` des Fahrzeugs gesteuert (für den Ladeschützen entsprechend `loader...`). Die Tarnnetz-Animationsquellen stehen in `compat_rnt/XEH_preInit.sqf`.

## Quellen

- <https://github.com/PzGrenBtl-402/PzGrenBtl402/tree/master/addons/Redd_Wiesel_MK20>

## ACRE

Konfiguriert alle Fahrzeuge mit den gleichen Rack Einstellungen:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Vereinheitlicht außerdem das Infanterietelefon und die Bordverständigungsanlage.

## Maintainer

- Andx
