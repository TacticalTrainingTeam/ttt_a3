# Compat Redd'n'Tank

Enthält diverse Verbesserungen und Fixes für Redd'n'Tank Fahrzeuge. Unter anderem eine Vereinheitlichung der Intercoms und Fehlerbehebungen.

## GraMaWa

Die GraMaWa ist eine gurtgeführte ACE-Crew-Served-Weapon: Der Gurt "[CSW] 40mm GMW-Gurt" (32 Schuss) wird über die ACE-Interaktion geladen und entladen. Das Laden dauert 10, das Entladen 8 Sekunden. Der Gurt ist auch im Arsenal verfügbar. Dafür muss in den CBA-Einstellungen `force ace_csw_defaultAssemblyMode = true;` gesetzt sein. Der Gurt von Redd'n'Tank und der Gurt dieses Addons sind austauschbar.

## M120 Mörser

Ergänzt die `allowFireOnLoad = 1;` Eigenschaft. Siehe <https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework#3-additional-configuration-parameters>

## Luchs

Kommandant und Ladeschütze können mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen.

## Marder

- Der Kommandant kann mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen. Hängt der Sitz fest, hilft die Aktion "Sitz freigeben".
- Das Tarnnetz wird automatisch angebracht (die Aktionen zum Auf- und Abbauen entfallen). Besatzungen sind dadurch schwerer zu entdecken.
- Die MK20 hat AP und HE als getrennte Munitionsarten, die über die Waffenauswahl gewechselt werden (kein Mausrad mehr). Die Kanone ist ab Spawn auf 800 m eingestellt. Turm, Kommandantenoptik und Milan sind nicht stabilisiert.
- Das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).
- Der Marder ist gesperrt, solange die Heckklappe geschlossen ist. Fahrer und Kommandant steigen über die Einsteigen-Aktionen ein, alle anderen öffnen die Klappe (Fahrer, Richtschütze oder der mittlere Lukenplatz öffnen und schließen sie per Aktion). In den Eden-Attributen kann "Heckklappe öffnen" gesetzt werden, damit die Klappe beim Spawnen offen ist.
- Wer an einer Luke ausgestiegen ist, kann per Aktion "Aussteigen durch Luke" direkt neben der Luke aus dem Fahrzeug steigen.
- Mit Metis Enhanced kann eine Karte auf der Heckklappe abgelegt werden (nur bei geöffneter Klappe).

## Wiesel MK20

- Der Kommandant kann höher bzw. tiefer steigen, das Tarnnetz wird automatisch angebracht und das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).
- Die MK20 hat AP und HE als getrennte Munitionsarten (siehe Marder).

## Wiesel TOW

- Kommandant und Ladeschütze können mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen. Hängt ein Sitz fest, hilft die Aktion "Sitz freigeben".
- Der ausgestiegene Kommandant kann auf den TOW-Sitz wechseln, der ausgestiegene Ladeschütze auf den MG3-Sitz (Aktionen am Fahrzeug).
- Pro Schuss wird ein Milan-Rohr aus dem Fahrzeug verbraucht (5 Stück an Bord). Der TOW startet geladen und wird mit der Aktion "TOW laden" (10 Sekunden halten) nachgeladen, solange ein Rohr im Laderaum liegt. Nachladen darf der Ladeschütze. Ist kein Ladeschützen-Platz besetzt, darf der Kommandant nachladen (auch vom TOW-Sitz aus).
- Das Tarnnetz wird automatisch angebracht und das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).

## Fuchs und Wolf

- Mit Metis Enhanced kann eine Karte auf den hinteren Türen des Fuchs bzw. auf der Motorhaube des Wolfs abgelegt werden. Beim Fuchs nur bei geöffneten Türen.

## Karte ablegen ausblenden

Die Karten-Aktion (Marder, Fuchs, Wolf, Puma) braucht Metis Enhanced ab Version 1.10.2, ohne wird sie nicht angezeigt.

Die Karten-Aktion (Marder, Fuchs, Wolf) lässt sich pro Fahrzeug mit der Variable `ttt_common_showMapAction` ausblenden, z.B. in der Init-Zeile des Fahrzeugs:

```sqf
this setVariable ["ttt_common_showMapAction", false, true];
```

## Maintainer

- Andx
