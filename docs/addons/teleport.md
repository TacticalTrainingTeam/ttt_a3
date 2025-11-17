# Teleporter und Zuschauerkamera

Fügt automatisch einem Objekt das den Variablennamen `ttt_teleport_teleporter` hat, eine Mausrad-Aktion für den W-Teleporter und eine Zuschauerkamera hinzu.

Wenn kein `respawn`-Marker in der Mission vorhanden ist, wird einer im [0,0,0]-Eck der Karte erzeugt.

Wenn kein Objekt mit dem Variablennamen `ttt_teleport_teleporter` existiert wird am `respawn`-Marker eine TTT-Flagge erzeugt und die Aktionen dort hinzugefügt.

JIP Spieler werden automatisch zum Marker `respawn` bewegt.

## CBA-Einstellungen

``` c++
force ttt_teleport_enableTeleport = false;         //default: true - aktiviert die Teleport-Logik
force ttt_teleport_enableJIPMoveToRespawn = false; //default: true - aktiviert den Teleport für JIP Spieler
``` 

## Funktionen

### `ttt_teleport_fnc_addActions`

Fügt einem Objekt die Mausrad-Aktionen für Teleportieren und Zuschauerkamera hinzu.

``` c++
[_meinObjekt] call ttt_teleport_fnc_addActions;
``` 

Argumente:

| # | Argument                               | Typ     | Optional?  |
| - | -------------------------------------- | ------- | ---------- |
| 0 | Objekt welches die Aktionen haben soll | OBJECT  | Nein       |

Rückgabe-Wert:

Keiner

## Events

| Eventname                            | Beschreibung                                               | Parameter          | Lokalität |
| ------------------------------------ | ---------------------------------------------------------- | ------------------ | --------- |
| `ttt_teleport_API_JIPmovedToRespawn` | Wenn ein Spieler vom System zum Respawn teleportiert wurde | `_unit, _position` | lokal     |

## Maintainer

- Andx
