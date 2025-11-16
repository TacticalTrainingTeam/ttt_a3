# W-Shields

## Buildingsshield

Macht ein Gebäude unzerstörbar, aber die Fenster-Scheiben können weiterhin zerstört werden.

### Benutzung: 3DEN-Modul

Um bereits auf der Karte befindliche Gebäude unzerstörbar zu machen, platziert im Editor unter `Module` - `W-Framework` - `Building Shield` ein Modul auf das Gebäude. Das Modul schnappt automatisch zum nächsten Gebäude. Die Fenster des Gebäudes sind dabei aber weiterhin zerstörbar.

In den Attributen des Moduls kann das Schild eingeschalten werden und alle Fenster des Gebäudes kaputt gemacht werden. Außerdem kann, wie im `EditTerrainObject` Modul von Bohemia, ein Variablenname für das Gebäude vergeben werden.

### Benutzung: 3DEN-Attribut

Bei selbst platzierten Gebäuden findet ihr die Option um das Schild zu aktivieren in den Attributen des Gebäudes im Abschnitt `W-Framework`. Dort können ebenso die Fenster zerstört werden.

!["3DEN-Editor-Attribute mit den Optionen für das Building-Shield"](https://i.imgur.com/Iw1i6Ou.jpeg)

## Vehicleshield

Macht Fahrzeuge unzerstörbar. Einzelne Module sind aber weiterhin zerstörbar.

### Benutzung: 3DEN-Attribut

Bei platzierten Fahrzeugen findet ihr die Option um das Schild zu aktivieren in den Attributen des Fahrzeugs im Abschnitt `W-Framework`.

!["3DEN-Editor-Attribute mit dem W-Vehicle-Shield"](https://i.imgur.com/c9Irw2F.jpeg)

### Benutzung: Zeus Modul

Während einer Mission könnt ihr das Zeusmodul nutzen um Fahrzeuge zu schützen. Zieht dazu einfach das Modul (Kategorie: W-Framework) auf das zu schützende Fahrzeug.

### Benutzung: Funktionsaufruf (nicht empfohlen)

Schreibt in die Init des Fahrzeugs folgendes:

```c++
[this, true, [false,false], true] call ttt_w_shields_fnc_addVehicleShield;
```

Argumente:

| Position | Argument                                                      | Typ     | Optional?                    |
| -------- | ------------------------------------------------------------- | ------- | ---------------------------- |
| 0        | Ziel auf das das Schild angwandt werden soll                  | OBJECT  | Nein                         |
| 1        | Vehindere Treibstoffverlust durch Schaden?                    | BOOLEAN | Ja (default: `false`)        |
| 2        | Vehindere das Haupt- bzw. Heckrotor zerstört wird?            | BOOLEAN | Ja (default: `[true, true]`) |
| 3        | Zerstöre den Motor wenn der Hüllenschaden ausgeschöpft ist?   | BOOLEAN | Ja (default: `false`) |

## Events

| Eventname                                   | Beschreibung                                                      | Paramter                                  | Lokalität |
| ------------------------------------------- | ----------------------------------------------------------------- | ----------------------------------------- | --------- |
| `ttt_w_shields_API_buildingShieldTriggered` | Gebäude hat Schaden genommen, aber das Shield hat ihn verhindert  | `_unit, _source, _instigator, _directHit` | lokal     |
| `ttt_w_shields_API_vehicleShieldTriggered`  | Fahrzeug hat Schaden genommen, aber das Shield hat ihn verhindert | `_unit, _source, _instigator`             | lokal     |

## Maintainer

* Andx
