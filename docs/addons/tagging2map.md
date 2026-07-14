# Tagging2Map

Erstellt automatisch einen Marker auf der Karte, wenn ein Gebäude mit einer ACE-Sprühflasche oder Kreide markiert wurde. Die Farbe der Markierung auf der Karte entspricht dabei der verwendeten Sprühfarbe.

!!! info "Hinweis"
    Blaue Farbe erzeugt **keinen** Kartenmarker, da blau für die VSS-Markierung reserviert ist.

## Unterstützte Farben

| Sprühfarbe | Kartenmarker-Farbe |
| ---------- | ------------------ |
| Rot        | Rot                |
| Grün       | Grün               |
| Schwarz    | Schwarz            |
| Gelb       | Gelb               |
| Weiß       | Weiß               |

## CBA-Einstellungen

``` c++
force ttt_tagging2map_enabled = true; //default: false - ACE-Tagging-Markierungen aktivieren
```

## Maintainer

- Andx
