# Dismantle

Erlaubt Spielen die das nötige Werkzeug und die nötige Befähigung haben bestimmte Objekte zu zerlegen. Gedacht für Panzersperren und ähnliches.

## Funktionsweise

Die Aktion wird clientseitig über das ACE-Interaktionsmenü an die konfigurierten Klassen gehängt (`fnc_addActions`). Nach Ablauf des Fortschrittsbalkens (`fnc_dismantleProgressbar`) wird direkt auf dem Client ein Metall-Geräusch (`DISMANTLE_SOUND_FILE`, hörbar im Umkreis von `DISMANTLE_SOUND_DISTANCE` Metern) abgespielt und das Objekt gelöscht. `playSound3D` und `deleteVehicle` haben beide globale Wirkung, deshalb ist kein CBA-Event nötig.

Da die Aktion keine Sperre kennt, können zwei Spieler denselben Gegenstand gleichzeitig zerlegen. Der Abschluss-Callback prüft deshalb mit `isNull`, ob das Objekt schon weg ist, damit Geräusch und Löschung nur einmal passieren.

## Maintainer

- Andx
