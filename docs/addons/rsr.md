# RsR

Stellt Basisfunktionen bereit für alle RsR Mods.

## `ttt_rsr_fnc_removeTurretWeapon`

Entfernt den Turm und sperrt den Schützenplatz. Gedacht für den Bergepanzer. Muss in der Init des Fahrzeuges ausgeführt werden.

```c++
[fhz] call ttt_rsr_fnc_removeTurretWeapon;
```

Argumente:

| Position | Argument                                  | Typ     | Optional? |
| -------- | ----------------------------------------- | ------- | --------- |
| 0        | Fahrzeug dessen Turm gesperrt werden soll | OBJECT  | Nein      |

Rückgabe-Wert:

Keiner

## Fahrzeuge

Enthält Bundeswehr Varianten verschiedener Fahrzeuge:

- Fennek (als Aufklärungsfahrzeug wenn ITC geladen ist)
- Bergepanzer
- LKWs

mit CUP/RHS:

- Transall

mit CUP:

- Wintertarnüberzug Uniform

mit BWA3:

- Eagle IV San (Tropen- und Flecktarn, Rotkreuz, Roter Diamant, Low Vis)

## Maintainer

- Andx
