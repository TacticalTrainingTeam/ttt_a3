# Compat Redd'n'Tank - Wiesel TOW

## Allgemein

- Kommandant und Ladeschütze können mit der Tastenkombination zum Aussteigen (`turnOut`/`turnIn`) höher bzw. tiefer steigen. Der normale Sitz ist währenddessen gesperrt (`ttt_common_fnc_lockSeat`). Hängt ein Sitz nach einem Fehler fest, gibt die Aktion "Sitz freigeben" ihn wieder frei.
- Der Kommandant kann (ausgestiegen) auf den TOW-Sitz wechseln, der Ladeschütze (ausgestiegen) auf den MG3-Sitz. Dabei werden Sitz-Animationen und das TOW-Rohr ein- bzw. ausgeblendet.
- **TOW laden**: Pro Schuss wird ein Milan-Rohr (`Redd_Milan_Static_Barrel`) aus dem Laderaum verbraucht (5 Stück im Fahrzeug). Nach dem Schuss wird die TOW-Munition entfernt (`fnc_handleTOWFired`); geladen wird per Halte-Aktion auf dem TOW-Sitz (`fnc_loadTOW`). Der TOW startet dadurch geladen mit einem Magazin (`magazines[]`).
- Tarnnetz wird automatisch angebracht, Redd'n'Tank-Aktionen zum Auf- und Abbauen sowie die Flaggen-Aktionen werden entfernt.
- Entfernt die Fahrzeug-Systemanzeigen aus dem HUD und die Nachtsicht aus der TOW-Optik.

Die Config-Attribute für die Sitzlogik sind in der MK20-Readme beschrieben. Die Tarnnetz-Animationsquellen stehen in `compat_rnt/XEH_preInit.sqf`.

## Quellen

- <https://github.com/PzGrenBtl-402/PzGrenBtl402/tree/master/addons/Redd_Wiesel_TOW>

## ACRE

Konfiguriert alle Fahrzeuge mit den gleichen Rack Einstellungen:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Vereinheitlicht außerdem das Infanterietelefon und die Bordverständigungsanlage.

## Maintainer

- Andx
