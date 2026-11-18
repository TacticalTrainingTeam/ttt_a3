---
title: Compat Redd'n'Tank
description: Enthält diverse Verbesserungen und Fixes für Redd'n'Tank Fahrzeuge.
published: true
tags:
  - arma3
  - fahrzeuge
  - referenz
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Compat Redd'n'Tank"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Fehlerbehebungen und einheitliche Funkausstattung für Redd'n'Tank-Fahrzeuge.

# Voraussetzungen

- [Redd'n'Tank Vehicles](https://steamcommunity.com/sharedfiles/filedetails/?id=1128145626) - Erforderlich
- Metis Enhanced (ab Version 1.10.2) - Optional, für die Karten-Aktion

# Änderungen

## ACRE

Fuchs, Gepard, Luchs, Marder, Wiesel MK20, Wiesel TOW und Wolf haben die gleichen Funkracks:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Infanterietelefon und Bordverständigung sind ebenfalls vereinheitlicht.

## Marder

Wie Besatzung und Schützentrupp den Marder bedienen, erklärt die Seite [Marder – Bedienung](/de/ttt-a3/kompatibilität/compat-rnt/marder).

- Der Turm ist nicht mehr gesperrt, wenn der Fahrer über Luke ist
- Der Motorstart dauert 5 Sekunden
- Behebt einige Fehler im Original
- Der Kommandant kann mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen. Hängt der Sitz fest, hilft die Aktion **Sitz freigeben**.
- Das Tarnnetz wird automatisch angebracht, die Aktionen zum Auf- und Abbauen entfallen. Besatzungen sind dadurch schwerer zu entdecken.
- Die MK20 hat AP und HE als getrennte Munitionsarten, die über die Waffenauswahl gewechselt werden (kein Mausrad mehr). Die Kanone ist ab Spawn auf 800 m eingestellt.
- Das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern, siehe [Smoke Launcher](/de/ttt-a3/grundlagen/smoke-launcher).

### Heckklappe und Luken

- Der Marder ist gesperrt, solange die Heckklappe geschlossen ist. Fahrer und Kommandant steigen über die Einsteigen-Aktionen ein, alle anderen öffnen vorher die Klappe. Fahrer, Richtschütze und der mittlere Lukenplatz öffnen und schließen sie per Aktion.
- In den Eden-Attributen des Marders lässt sich **Heckklappe öffnen** setzen, damit die Klappe beim Spawnen offen ist.
- Wer auf einem Lukenplatz über Luke ist, kann mit der Aktion **Aussteigen durch Luke** direkt neben der Luke aus dem Fahrzeug steigen.

### Milan

Die Milan wird wie im echten Gerät aus dem Laderaum aufgebaut und mit Rohren geladen. Ab Spawn ist sie abgebaut und leer, im Laderaum liegen ein Dreibein und vier Rohre. Alle Aktionen sind Halte-Aktionen (10 Sekunden):

- **Milan aufbauen** und **Milan abbauen**: durch den Kommandanten, wenn er über Luke oder im höheren Sitz ist. Abbauen geht nur, wenn die Milan leer und unbesetzt ist; das Dreibein kommt zurück in den Laderaum.
- **Milan laden** und **Milan entladen**: durch den Kommandanten (über Luke oder im höheren Sitz) oder den Platz an der rechten Luke (über Luke). Laden nimmt ein Rohr aus dem Laderaum, Entladen legt es zurück.
- Nach jedem Schuss muss die Milan neu geladen werden. Für weitere Schüsse müssen Rohre in den Laderaum gelegt werden.
- Auf die Milan wechselt der Kommandant (über Luke oder im höheren Sitz) mit der Aktion **In Milan Einsteigen**; der Kommandantensitz bleibt so lange für ihn frei.

### Karte ablegen

Mit Metis Enhanced ab Version 1.10.2 kann eine Karte auf der geöffneten Heckklappe abgelegt werden. Ohne Metis Enhanced wird die Aktion nicht angezeigt.

Die Aktion lässt sich pro Fahrzeug ausblenden, z. B. in der Init-Zeile des Fahrzeugs:

```sqf
this setVariable ["ttt_common_showMapAction", false, true];
```

## Milan (abgesessen)

Wie der Milan-Trupp die Milan aufbaut, lädt und abbaut, erklärt die Seite [Milan – Bedienung](/de/ttt-a3/kompatibilität/compat-rnt/milan).

- Das Dreibein allein baut eine leere Milan auf. Das Rohr wird danach als Munition geladen.
- **Milan laden**: Mit dem Rohr als Rucksack direkt an die leere Milan stellen (Halte-Aktion, 10 Sekunden).
- **Milan entladen**: Ohne Rucksack an die geladene Milan stellen, das Rohr wird zum eigenen Rucksack.
- **Milan abbauen**: Nur wenn die Milan leer und unbesetzt ist und man keinen Rucksack trägt; das Dreibein wird zum eigenen Rucksack.
- Rohr und Dreibein haben ein realistischeres Gewicht (Rohr leichter, Dreibein mit Wärmebildgerät schwerer).

## M120 Mörser

Wie die Crew den Mörser aufbaut und lädt, erklärt die Seite [M120 Mörser – Bedienung](/de/ttt-a3/kompatibilität/compat-rnt/m120).

ACE-CSW-Unterstützung und Fehlerbehebungen. Der [Mörser](/de/handbuch/kampfunterstützungskräfte/artillerie/moerser) kann direkt nach dem Laden feuern (`allowFireOnLoad`, siehe [ACE CSW](https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework#3-additional-configuration-parameters)).

## GraMaWa

Wie die GraMaWa aufgebaut, geladen und verstellt wird, erklärt die Seite [GraMaWa – Bedienung](/de/ttt-a3/kompatibilität/compat-rnt/gramawa).

Stabiler, und die ACE-Aktionen zum seitlichen Drehen und zur Höhenverstellung funktionieren. Benötigt `force ace_csw_defaultAssemblyMode = true;` in den CBA-Einstellungen.

Die GraMaWa wird mit dem Gurt **[CSW] 40mm GMW-Gurt** (32 Schuss) über die ACE-Interaktion geladen und entladen. Das Laden dauert 10, das Entladen 8 Sekunden. Der Gurt ist auch im Arsenal verfügbar und mit dem Gurt von Redd'n'Tank austauschbar.

## MG3-Lafette

Wie man ein MG3 lafettiert, nachlädt und die Lafette abbaut, erklärt die Seite [MG3-Lafette – Bedienung](/de/ttt-a3/kompatibilität/compat-rnt/mg3-lafette).

Lässt sich auch mit MG3 aus anderen Mods aufbauen (`BWA3_MG3`, `BWA3_MG3_bipod`, `BWA3_MG3_MicroT2_pointer_bipod`) und ist stabiler.

## Wiesel MK20

- Der Kommandant kann höher bzw. tiefer steigen, das Tarnnetz wird automatisch angebracht und das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).
- Die MK20 hat AP und HE als getrennte Munitionsarten, die über die Waffenauswahl gewechselt werden (kein Mausrad mehr).
- Die Türme von Wiesel MK20, Wiesel TOW und Fuchs sind wie im Original stabilisiert.

## Wiesel TOW

- Kommandant und Ladeschütze können mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen. Hängt ein Sitz fest, hilft die Aktion **Sitz freigeben**.
- Ist der Kommandant über Luke, kann er auf den TOW-Sitz wechseln, ist der Ladeschütze über Luke, auf den MG3-Sitz (Aktionen am Fahrzeug).
- Pro Schuss wird ein Milan-Rohr aus dem Fahrzeug verbraucht (5 Stück an Bord). Der TOW startet geladen und wird mit der Aktion **TOW laden** (10 Sekunden halten) nachgeladen, solange ein Rohr im Laderaum liegt. Nachladen darf der Ladeschütze. Ist kein Ladeschützen-Platz besetzt, darf der Kommandant nachladen – auch vom TOW-Sitz aus.
- Das Tarnnetz wird automatisch angebracht und das HUD ist aufgeräumt (keine Fahrzeug-Systemanzeigen).

## Luchs

Kommandant und Ladeschütze können mit den Tasten für Aus- und Einsteigen (Turn Out / Turn In) höher bzw. tiefer steigen.

## Fuchs und Wolf

Mit Metis Enhanced ab Version 1.10.2 kann eine Karte auf den hinteren Türen des Fuchs bzw. auf der Motorhaube des Wolfs abgelegt werden, beim Fuchs nur bei geöffneten Türen. Ohne Metis Enhanced wird die Aktion nicht angezeigt.

Die Aktion lässt sich pro Fahrzeug ausblenden, z. B. in der Init-Zeile des Fahrzeugs:

```sqf
this setVariable ["ttt_common_showMapAction", false, true];
```

## Ladekapazität

Fuchs, Gepard, Luchs, Marder, Wiesel MK20, Wiesel TOW und Wolf haben keine Gewichtsgrenze für eingeladene Ausrüstung.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_compat_rnt_lafetteMountTime` | `5` | Sekunden, um ein MG3 auf die Lafette zu montieren (1 bis 120) |
| `ttt_compat_rnt_lafetteDisassembleTime` | `10` | Sekunden, um die Lafette abzubauen (1 bis 120) |
