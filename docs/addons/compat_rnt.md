# Compat Redd'n'Tank

Enthält diverse Verbesserungen und Fixes für Redd'n'Tank Fahrzeuge. Unter anderem eine Vereinheitlichung der Intercoms und Fehlerbehebungen.

## GraMaWa

Die GraMaWa ist eine gurtgeführte ACE-Crew-Served-Weapon: Der Gurt "[CSW] 40mm GMW-Gurt" (32 Schuss) wird über die ACE-Interaktion geladen und entladen. Das Laden dauert 10, das Entladen 8 Sekunden. Der Gurt ist auch im Arsenal verfügbar. Dafür muss in den CBA-Einstellungen `force ace_csw_defaultAssemblyMode = true;` gesetzt sein.

## M120 Mörser

Ergänzt die `allowFireOnLoad = 1;` Eigenschaft. Siehe <https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework#3-additional-configuration-parameters>

## Luchs

Kommandant und Ladeschütze können mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen.

## Marder

- Das Fahrzeug ist gesperrt, solange die Heckklappe geschlossen ist. Fahrer und Kommandant steigen weiterhin normal ein, alle anderen müssen die Klappe öffnen (Fahrer, Richtschütze oder der mittlere Lukenplatz öffnen/schließen sie per Aktion).
- In den Eden-Attributen des Marders kann "Heckklappe öffnen" gesetzt werden, damit die Klappe beim Spawnen offen ist.
- Wer an einer Luke ausgestiegen ist, kann direkt neben der Luke aus dem Fahrzeug steigen.
- Der Kommandant kann mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen.
- Das Tarnnetz wird automatisch angebracht.
- Die MK20 hat AP und HE als getrennte Munitionsarten, die über die Waffenauswahl oder die Taste "HE/AP Munition wechseln" (Standard: 5) gewechselt werden (kein Mausrad mehr). Die Kanone ist ab Spawn auf 800 m eingestellt. Turm, Kommandantenoptik und Milan sind nicht stabilisiert.
- Rucksack und Toolkit sind nicht mehr im Laderaum (gilt auch für den Fuchs).
- An den seitlichen Lukenplätzen kann eine Leiter aufgestellt werden, wenn ein Leiter-Rucksack im Fahrzeug liegt (siehe [Fahrzeugleiter](vehicle_ladder.md)).
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern (siehe [Nebelmittelwurfanlage](smoke_launcher.md)).
- Mit Metis Enhanced kann eine Karte auf der Heckklappe abgelegt werden. Das gilt auch für Fuchs und Wolf (auf den hinteren Türen bzw. der Motorhaube). Mit der Variable `ttt_common_showMapAction` (`false`) lässt sich die Aktion pro Fahrzeug ausblenden:

```sqf
this setVariable ["ttt_common_showMapAction", false, true];
```

## Wiesel MK20

- Die MK20 hat AP und HE als getrennte Munitionsarten (siehe Marder).
- Der Kommandant kann mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen. Hängt der Sitz fest, hilft die Aktion "Sitz freigeben".
- Das Tarnnetz wird automatisch angebracht. Besatzungen sind dadurch schwerer zu entdecken.
- Das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).

## Wiesel TOW

- Kommandant und Ladeschütze können mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen. Hängt ein Sitz fest, hilft die Aktion "Sitz freigeben".
- Der ausgestiegene Kommandant kann auf den TOW-Sitz wechseln, der ausgestiegene Ladeschütze auf den MG3-Sitz.
- Pro Schuss wird ein Milan-Rohr aus dem Fahrzeug verbraucht (5 Stück an Bord). Nachgeladen wird über die Aktion "TOW laden" auf dem TOW-Sitz.
- Das Tarnnetz wird automatisch angebracht und das HUD ist aufgeräumt.

## Maintainer

- Andx
