# Marker-Phasen

Speichert die vom Spieler gesetzten Kartenmarker als benannte "Phasen" im eigenen Profil (`profileNamespace`) und lädt sie später auf derselben Karte wieder. Gedacht, um in der lokalen Multiplayer-Vorschau (Eden) eine Planung vorzubereiten und sie im echten Multiplayer Phase für Phase auf die Karte zu bringen. Gespeichert werden kann in jedem Multiplayer, also auch auf einem Server. Die Bedienung erfolgt über Chat-Befehle (`#savemarkers`, `#loadmarkers`, `#unloadmarkers`, `#listmarkers`, `#deletemarkers`). Siehe auch die [Nutzerdokumentation](https://docs.tacticalteam.de/addons/markersave/).

## Abhängigkeiten

- `ttt_common` - `fnc_createPlayerMarker` erzeugt die Marker mit dem richtigen `_USER_DEFINED`-Namen, sodass der Spieler sie wie selbst gesetzte Marker wieder löschen kann.

## Speicherformat

Pro Karte eine Profilvariable `ttt_markersave_phases_<toLower worldName>` mit dem Inhalt `[PHASE_FORMAT_VERSION, phasen]`. Jede Phase ist `[name, systemTime, records]`, jeder Record `[shape, type, color, size, brush, dir, text, alpha, pos, polyline]`. Es sind bewusst verschachtelte Arrays statt einer HashMap, damit das Profil-Format keine Fragen offen lässt. Bei einer inkompatiblen Änderung muss `PHASE_FORMAT_VERSION` erhöht werden - `fnc_getPhases` liefert für unbekannte Versionen eine leere Liste.

Gespeichert werden nur Marker, deren Name mit `_USER_DEFINED #<Spieler-ID>/` beginnt (also vom Spieler gesetzt, inklusive gezeichneter Linien als `POLYLINE`). Missions- und Editormarker bleiben außen vor. `saveProfileNamespace` wird nach jeder Änderung aufgerufen, damit nichts bei einem Absturz verloren geht.

## Speichern

`fnc_savePhase` ist nur im Multiplayer erlaubt (`isMultiplayer`), die Eden-Vorschau zählt dazu. Der reine Einzelspieler fällt bewusst weg: Dort gibt es keinen Chat für die Befehle. Weil auf einem Server auch die Marker anderer Spieler in `allMapMarkers` stehen, wird nur nach dem Präfix `_USER_DEFINED #<getPlayerID player>/` gefiltert (Format aus `fnc_createPlayerMarker`).

Die Rückmeldungen erscheinen als ACE-Hint (`ace_common_fnc_displayTextStructured`), weil der Chat mit Clear HUD ausgeblendet ist. Mehrzeilige Ausgaben (`#listmarkers`, Ladeergebnis) gehen als ein einziger Hint raus, da jeder neue Hint den vorherigen ersetzt.

Nach jedem erfolgreichen Speichern legt `fnc_addDiaryRecord` einen Tagebucheintrag im Thema "Marker-Phasen" an (Phasenname, Markeranzahl, Uhrzeit). Das Thema gehört zur Einheit des Spielers und wird bei Bedarf neu erzeugt (`diarySubjectExists`), auch nach einem Respawn. Der Eintrag ist nur ein Protokoll der laufenden Sitzung, die Daten selbst liegen im Profil.

Standardmäßig werden nur Marker gespeichert, die in dieser Sitzung noch in keiner Phase waren (`GVAR(savedMarkers)`, ein Set der Markernamen). Das macht den Phasenablauf aus: Phase 1 zeichnen, speichern, Phase 2 zeichnen, speichern - ohne dass Phase 1 doppelt landet. Auch aus einer Phase geladene Marker werden dort eingetragen. `--all` ignoriert das Set. Ein gleichnamiger Eintrag wird überschrieben, mehr als `MAX_MARKERS_PER_PHASE` Marker werden abgelehnt, statt still abzuschneiden.

## Laden

Die Marker werden lokal angelegt (`createMarkerLocal` über `fnc_createPlayerMarker`), alle Eigenschaften lokal gesetzt und zuletzt mit `setMarkerAlpha` einmal global gesendet. Das ist der Weg, den auch Tagging2Map nutzt, und laut Arma-Wiki der empfohlene, um den Marker nur einmal komplett über das Netzwerk zu schicken. Lokale Marker (`local`) überspringen den globalen Befehl und bleiben beim Spieler.

Pro Frame werden `MARKERS_PER_FRAME` Marker erzeugt (CBA-PFH), damit große Phasen keinen Netzwerk-Schub auslösen. Entlädt der Spieler die Phase währenddessen, beendet der PFH sich selbst.

Der Kanal kommt aus dem Befehl oder ist `DEFAULT_CHANNEL`. Ohne expliziten Kanal wird auf den ersten Kanal ausgewichen, der Marker erlaubt (`channelEnabled` Index 2, ab Arma 2.20). Gezeichnete Linien werden übersprungen, wenn der Kanal Zeichnen verbietet (Index 3).

## Maintainer

- Andx
