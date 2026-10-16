# Compat Redd'n'Tank

Enthält diverse Verbesserungen und Fixes für Redd'n'Tank Fahrzeuge. Unter anderem eine Vereinheitlichung der Intercoms und Fehlerbehebungen.

## M120 Mörser

Ergänzt die `allowFireOnLoad = 1;` Eigenschaft. Siehe <https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework#3-additional-configuration-parameters>

## Marder

- Der Kommandant kann mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen. Hängt der Sitz fest, hilft die Aktion "Sitz freigeben".
- Das Tarnnetz wird automatisch angebracht (die Aktionen zum Auf- und Abbauen entfallen). Besatzungen sind dadurch schwerer zu entdecken.
- Die MK20 hat AP und HE als getrennte Munitionsarten, die über die Waffenauswahl gewechselt werden (kein Mausrad mehr). Die Kanone ist ab Spawn auf 800 m eingestellt.
- Das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).
- Der Marder ist gesperrt, solange die Heckklappe geschlossen ist. Fahrer und Kommandant steigen über die Einsteigen-Aktionen ein, alle anderen öffnen die Klappe (Fahrer, Richtschütze oder der mittlere Lukenplatz öffnen und schließen sie per Aktion). In den Eden-Attributen kann "Heckklappe öffnen" gesetzt werden, damit die Klappe beim Spawnen offen ist.
- Wer an einer Luke ausgestiegen ist, kann per Aktion "Aussteigen durch Luke" direkt neben der Luke aus dem Fahrzeug steigen.
- Mit Metis Enhanced kann eine Karte auf der Heckklappe abgelegt werden (nur bei geöffneter Klappe).

## Wiesel MK20

- Der Kommandant kann höher bzw. tiefer steigen, das Tarnnetz wird automatisch angebracht und das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).
- Die MK20 hat AP und HE als getrennte Munitionsarten (siehe Marder).
- Die Türme von Wiesel MK20 und Wiesel TOW sind wie im Original stabilisiert (die bisherige Abschaltung der Stabilisierung entfällt).

## Wiesel TOW

- Kommandant und Ladeschütze können mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen. Hängt ein Sitz fest, hilft die Aktion "Sitz freigeben".
- Der ausgestiegene Kommandant kann auf den TOW-Sitz wechseln, der ausgestiegene Ladeschütze auf den MG3-Sitz (Aktionen am Fahrzeug).
- Pro Schuss wird ein Milan-Rohr aus dem Fahrzeug verbraucht (5 Stück an Bord). Der TOW startet geladen und wird mit der Aktion "TOW laden" (10 Sekunden halten) nachgeladen, solange ein Rohr im Laderaum liegt. Nachladen darf der Ladeschütze. Ist kein Ladeschützen-Platz besetzt, darf der Kommandant nachladen (auch vom TOW-Sitz aus).
- Das Tarnnetz wird automatisch angebracht und das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).

## Ladekapazität

Wiesel MK20 und Wiesel TOW haben keine Gewichtsgrenze für eingeladene Ausrüstung.

## Karte ablegen ausblenden

Die Karten-Aktion (Marder) braucht Metis Enhanced ab Version 1.10.2, ohne wird sie nicht angezeigt.

Die Karten-Aktion (Marder) lässt sich pro Fahrzeug mit der Variable `ttt_common_showMapAction` ausblenden, z.B. in der Init-Zeile des Fahrzeugs:

```sqf
this setVariable ["ttt_common_showMapAction", false, true];
```

## Maintainer

- Andx
