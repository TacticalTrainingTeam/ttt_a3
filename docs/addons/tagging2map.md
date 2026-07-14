# Tagging2Map

Erstellt automatisch einen Marker auf der Karte, wenn ein Gebäude mit einer ACE-Sprühflasche oder Kreide markiert wurde. Die Farbe der Markierung auf der Karte entspricht dabei der verwendeten Sprühfarbe.

Zusätzlich wird beim Platzieren einer **orangenen ACE-Markierungsfahne** (z.B. zur IED-Markierung) automatisch ein orangener Kartenmarker erstellt.

!!! info "Hinweis"
    Blaue Farbe erzeugt **keinen** Kartenmarker, da blau für die VSS-Markierung reserviert ist.

!!! info "Hinweis"
    Eine neuere Markierung überschreibt den Kartern-Marker einer älteren Markierung am selben gebäude.

## Unterstützte Sprühfarben

| Sprühfarbe | Kartenmarker-Farbe |
| ---------- | ------------------ |
| Rot        | Rot                |
| Grün       | Grün               |
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
