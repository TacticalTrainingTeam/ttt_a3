# UAV Link

Lässt das Videobild eines UAV mit zunehmender Entfernung des Operators verschlechtern und die Verbindung bei zu großer Distanz vollständig abbrechen. Kommt automatisch wieder in Reichweite zustande.

## Funktionsweise

Gilt für **jedes** UAV (jede Fraktion, vanilla oder Mod, in Eden platziert oder erst während der Mission erzeugt/gespawnt) — es ist keine Registrierung pro UAV-Klasse oder Instanz nötig. Jeder Client fragt lokal per `getConnectedUAV player` ab, ob sein eigener Spieler gerade mit einem UAV-Terminal verbunden ist, und überwacht bei Bedarf die Distanz dazu. `connectTerminalToUAV` und die Post-Process-Effekte (Blur/FilmGrain) sind rein lokale Befehle — die Funktion braucht daher keinen Server-Code und kein `remoteExec`/CBA-Event.

Über CBA-Einstellungen konfigurierbar (Master-Schalter standardmäßig **deaktiviert**):

- **Aktivieren**: genereller Ein/Aus-Schalter, Standard: aus.
- **Verschlechterungsdistanz**: ab hier beginnt das Bild zu verwackeln/rauschen (steigend bis zur Verbindungsabbruch-Distanz).
- **Verbindungsabbruch-Distanz**: ab hier wird die Verbindung getrennt, bis der Operator wieder näher herankommt (automatisches, stilles Reconnect).

## Abhängigkeiten

- `ttt_common`
- `ace_common` (für die Verbindungs-Hinweise)

## Maintainer

- Andx
