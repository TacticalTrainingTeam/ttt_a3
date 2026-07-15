# Tagging2Map

Erstellt automatisch einen Marker auf der Karte, wenn ein Gebäude mit einem **X** per ACE-Sprühflasche oder Kreide markiert wurde. Alle Farben werden unterstützt. Andere Formen (Pfeile, Kreis, Kreuz, Diamant, Quadrat, Dreieck) erzeugen keinen Kartenmarker.

Zusätzlich wird beim Platzieren einer **orangenen ACE-Markierungsfahne** (z.B. zur IED-Markierung) automatisch ein orangener Kartenmarker erstellt.

!!! info "Hinweis"
    Eine neuere Markierung überschreibt den Kartenmarker einer älteren Markierung am selben Gebäude.

## Unterstützte Sprühfarben (nur X-Form)

| Sprühfarbe | Kartenmarker-Farbe |
| ---------- | ------------------ |
| Rot        | Rot                |
| Grün       | Grün               |
| Blau       | Blau               |
| Schwarz    | Schwarz            |
| Gelb       | Gelb               |
| Weiß       | Weiß               |

## Markierungsfahnen

| Fahne         | Kartenmarker-Farbe | Verwendungszweck |
| ------------- | ------------------ | ---------------- |
| Orange (ACE)  | Orange             | IED-Markierung   |

## CBA-Einstellungen

``` c++
force ttt_tagging2map_enabled = false; //default: true - ACE-Tagging-Markierungen aktivieren
```

## Maintainer

- Andx
