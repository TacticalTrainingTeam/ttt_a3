# Settings

Das Settings-Addon lädt beim Missionsstart automatisch die richtigen CBA-Einstellungen und erlaubt im Lobby-Bildschirm die Auswahl eines von drei Medic-Systemen: Standard, Einfach, Training.

Alle Einstellungen, welche nicht über das Addon gesetzt werden, können von jedem Spieler individuell eingestellt werden.

## Medic-Systeme

- **Standard** die regulären Einstellungen, werden automatisch geladen wenn nichts anderes spezifiziert wurde oder wenn ein Fehler aufgetreten ist.
- **Einfach** längere Überlebenszeit und schnellere Behandlungen für spezielle Events.
- **Training** mit KI welche bewusstlos werden kann, um daran zu üben.

### Für Missionsbauer

Wenn ihr die Auswahl der Medic-System in eurer Mission aktivieren wollt, müsst ihr folgendes in der `description.ext` ergänzen:

```c++
class Params {
    class medical_system {
        title = "Sanitäts System";
        values[] = {0, 1, 2};
        texts[] = {"Standard", "Einfach", "Training"};
        default = 0;
    };
};
```

Danach habt ihr im Lobbybildschirm oben rechs einen Button um das System zu ändern.

### Für Zeuse

Wenn ihr `adminVoted` oder `adminLogged` seid, könnt ihr per Chat-Befehl das Medic-System ändern. Dies kann z.B. genutzt werden wenn die Einstellung in der Lobby vergessen wurde. Dazu müsst ihr folgendes in den Chat eingeben:

- `#med-sys 0` für das Standard-System
- `#med-sys 1` für das einfache System
- `#med-sys 2` für das Trainings-System

## Maintainer

- Andx
