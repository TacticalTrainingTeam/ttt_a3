# Teleporter und Zuschauerkamera

Fügt automatisch einem Objekt das den Variablennamen `ttt_teleport_teleporter` hat, eine Mausrad-Aktion für den W-Teleporter und eine Zuschauerkamera hinzu.

Wenn kein Respawn in der Mission vorhanden ist, wird ein Respawn im Eck der Karte erzeugt.

Wenn kein Objekt mit dem Variablennamen `ttt_teleport_teleporter` existiert wird am Respawn eine TTT-Flagge erzeugt und die Aktionen dort hinzugefügt.

## Settings

```c++
force ttt_teleporter_cam_enableTeleport = true;
```

`true` schaltet die Teleporter-Logik an (Default-Wert).
`false` schaltet die Teleporter-Logik aus.

## Maintainer

- Andx
