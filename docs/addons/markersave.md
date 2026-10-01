# Marker-Phasen

Mit den Marker-Phasen könnt ihr Kartenmarker in der lokalen Multiplayer-Vorschau vorbereiten und später im echten Multiplayer wieder auf die Karte bringen - Phase für Phase. Die Marker werden in eurem eigenen Arma-Profil gespeichert und gelten für die jeweilige Karte.

Die Befehle beginnen immer mit einem ++"#"++ und werden im Chat eingegeben. Um den Chat zu öffnen, drückt die ++minus++-Taste. Sie funktionieren auch bei geöffneter Karte und stehen jedem Spieler zur Verfügung. Andere Spieler sehen die Eingabe nicht.

## Speichern

`#savemarkers [Name]` speichert alle von euch gesetzten Marker (auch gezeichnete Linien) als neue Phase. Ohne Namen heißt die Phase "Phase 1", "Phase 2" usw. Gibt es den Namen schon, wird die Phase überschrieben.

Speichern und Laden funktionieren in jedem **Multiplayer**, also auch in der lokalen Multiplayer-Vorschau aus dem Editor. Im Einzelspieler geht es nicht, dort gibt es keinen Chat. Es werden nur eure eigenen Marker gespeichert.

Standardmäßig werden nur Marker gespeichert, die noch in keiner Phase sind. So könnt ihr Phase 1 einzeichnen, speichern, direkt weiter Phase 2 einzeichnen und speichern, ohne dass die Marker von Phase 1 doppelt landen. Mit `#savemarkers --all [Name]` werden alle Marker gespeichert.

Jedes erfolgreiche Speichern wird zusätzlich im Tagebuch unter **Marker-Phasen** festgehalten, mit Phasenname, Anzahl der Marker und Uhrzeit. So seht ihr jederzeit, was ihr in dieser Sitzung schon gespeichert habt.

## Laden

`#loadmarkers [Phase] [Kanal]` legt die gespeicherten Marker der aktuellen Karte wieder an. Das geht in jeder Mission auf dieser Karte, auch im Multiplayer.

- Ohne Angaben wird die nächste Phase geladen, die noch nicht auf der Karte ist.
- `Phase` ist der Name oder die Nummer aus `#listmarkers`.
- `Kanal` ist `global`, `side`, `command`, `group`, `vehicle` oder `direct` - die Marker sind dann für alle in diesem Kanal sichtbar. Ohne Angabe wird der Seitenkanal genutzt. `local` zeigt die Marker nur euch selbst.

Beispiele:

- `#loadmarkers` lädt die nächste Phase in den Seitenkanal.
- `#loadmarkers 2 group` lädt Phase 2 in den Gruppenkanal.
- `#loadmarkers Angriff local` lädt die Phase "Angriff" nur für euch.

Die Marker gehören euch und können wie selbst gesetzte Marker gelöscht werden.

## Verwalten

- `#listmarkers` zeigt alle Phasen der aktuellen Karte mit Anzahl der Marker. Bereits geladene Phasen sind markiert.
- `#unloadmarkers [Phase]` entfernt die Marker einer geladenen Phase wieder von der Karte. Ohne Angabe wird die zuletzt geladene Phase entfernt.
- `#deletemarkers <Phase>` löscht eine gespeicherte Phase aus dem Profil.

## Hinweise

- Die Phasen liegen im Profil des jeweiligen Spielers. Jeder Spieler hat also seine eigenen Phasen.
- Pro Phase können maximal 500 Marker gespeichert werden.
- Erlaubt der gewählte Kanal in der Mission kein Zeichnen, werden gezeichnete Linien beim Laden übersprungen.

## Maintainer

- Andx
