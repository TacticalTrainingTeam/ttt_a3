# KI-Kapitulation

Das Surrender-Modul sorgt dafür, dass feindliche KI-Einheiten in einem festgelegten Bereich kapitulieren koennen, wenn sie deutlich in Unterzahl sind.

Die Kapitulation wird über ACE Captives umgesetzt. Kapitulierte KI hebt die Hände und gilt als ergeben.

## Benutzung

1. Platziere in 3DEN das Modul `KI-Kapitulation` auf der Karte.
2. Lege den Wirkbereich des Moduls über den Modulradius fest.
3. Stelle ein, welche Seite als `Feindlich` und welche als `Freundlich` gelten soll.
4. Konfiguriere Verhältnis und Kapitulationschance nach Missionsbedarf.

!!! info "Hinweis"
    Die Prüfung erfolgt regelmässig im Modulbereich. Nur feindliche KI-Einheiten innerhalb dieses Bereichs koennen kapitulieren.

## Modul-Attribute

- `Feindliche Seite`: Seite, deren KI-Einheiten kapitulieren koennen.
- `Freundliche Seite`: Seite, die zahlenmässig überlegen sein muss.
- `Unterlegenheitsverhältnis`: Wie stark die freundliche Seite überlegen sein muss (z.B. `2x` = mindestens doppelt so viele freundliche Einheiten wie feindliche).
- `Kapitulationschance`: Wahrscheinlichkeit pro Prüfung, dass eine unterlegene feindliche KI-Einheit kapituliert (`0%` bis `100%`).

## Maintainer

- Andx
