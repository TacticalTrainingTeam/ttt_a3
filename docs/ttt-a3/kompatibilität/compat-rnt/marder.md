---
title: Marder – Bedienung
description: >-
  Bedienungsanleitung für den Schützenpanzer Marder: Einsteigen über Heckklappe
  und Luken, Bewaffnung mit Milan und Nebelmittelwurfanlage, Funk und Laderaum.
published: true
tags:
  - arma3
  - fahrzeuge
  - anleitung
  - ttt-mod
editor: markdown
dateCreated: '2026-11-18T12:12:58.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Marder – Bedienung"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Diese Seite erklärt, wie Besatzung und Schützentrupp den Marder aus Redd'n'Tank im TTT-Mod bedienen. Wie der Marder taktisch eingesetzt wird, steht unter [Mechanisierte Infanterie](/de/handbuch/gepanzertekräfte/mechinf). Eine Übersicht aller Änderungen an Redd'n'Tank-Fahrzeugen gibt es unter [Compat Redd'n'Tank](/de/ttt-a3/kompatibilität/compat-rnt).

# Einsteigen und Aussteigen

## Heckklappe

Solange die Heckklappe geschlossen ist, ist der Marder abgeschlossen. Nur Fahrer und Kommandant können dann einsteigen – über die gewohnten Aktionen **Einsteigen als Fahrer** und **Einsteigen als Kommandant**.

Der Schützentrupp kommt erst hinein, wenn die Klappe offen ist. Öffnen und schließen kann sie nur die Besatzung von innen:

- der Fahrer,
- der Richtschütze,
- wer auf dem mittleren Lukenplatz sitzt.

Dafür gibt es im Aktionsmenü (Mausrad) **Heckklappe öffnen** und **Heckklappe schließen**. Wer draußen steht, kann die Klappe nicht selbst öffnen und muss die Besatzung darum bitten – zum Beispiel über das Infanterietelefon hinten am Fahrzeug (siehe unten bei Funk und Bordverständigung).

## Durch die Luken aussteigen

Wer auf einem Platz mit Luke sitzt und über Luke ist, kann direkt neben seiner Luke aus dem Fahrzeug steigen. Das geht mit der Aktion **Aussteigen durch Luke** oder der normalen Taste zum Aussteigen. Möglich ist das für Kommandant, Fahrer und die Lukenplätze links, rechts und in der Mitte.

So kommt man auch bei geschlossener Heckklappe hinaus.

## Plätze wechseln

- **Zum Lukenplatz wechseln**: Von einigen Passagierplätzen im Kampfraum aus kann man auf einen freien Lukenplatz links oder rechts wechseln. Die Aktion erscheint nur auf diesen Plätzen und nur, wenn die Luke frei ist.
- **Höher steigen** und **Tiefer steigen**: Der Kommandant kann aus seiner Luke höher steigen, um besser zu sehen, und wieder zurück. Am einfachsten geht das mit den Tasten zum Ausluken und Einluken (Turn Out / Turn In). Sein normaler Sitz bleibt so lange für ihn reserviert.
- **Sitz freigeben**: Hängt der Kommandantensitz nach einem Platzwechsel fest und lässt niemanden mehr hinein, gibt diese Aktion ihn wieder frei.

# Fahren

- Der Motor braucht 5 Sekunden, bis er läuft.
- Der Turm bleibt beweglich, auch wenn der Fahrer über Luke fährt.

# Bewaffnung

## Maschinenkanone

Die Kanone hat zwei getrennte Munitionsarten, **AP** (gegen Fahrzeuge) und **HE** (gegen Infanterie und weiche Ziele). Gewechselt wird über die normale Waffenauswahl, nicht mehr über das Mausrad. Ab dem Spawnen ist die Kanone auf 800 m eingestellt.

## Nebelmittelwurfanlage

Richtschütze und Kommandant können eine Nebelsalve abfeuern. Dafür drücken sie die Taste für **Gegenmaßnahmen** (Countermeasures). Im Waffenmenü taucht die Anlage nicht auf.

- Neben der Waffenanzeige steht, wie viele Salven noch übrig sind: **NbMWAnl: x**. Rot heißt: gerade nicht schussbereit.
- Nach jeder Salve muss die Anlage kurz nachladen.
- Es muss ein Richtschütze im Fahrzeug sitzen, der lebt und bei Bewusstsein ist. Ein Kommandant allein kann nicht nebeln.

## Milan

Der Marder führt eine Panzerabwehrwaffe Milan mit, die auf dem Turm aufgebaut wird. Ab dem Spawnen ist sie abgebaut. Im Laderaum liegen ein Dreibein und **vier Rohre** – jedes Rohr ist ein Schuss.

Alle Milan-Aktionen findet man im Aktionsmenü (Mausrad). Sie sind Halte-Aktionen: Die Taste (normalerweise Leertaste) 10 Sekunden gedrückt halten.

| Aktion | Wer | Voraussetzung |
| --- | --- | --- |
| **Milan aufbauen** | Kommandant | Dreibein im Laderaum |
| **Milan laden** | Kommandant oder rechter Lukenplatz | Milan aufgebaut und leer, Rohr im Laderaum |
| **Milan entladen** | Kommandant oder rechter Lukenplatz | Milan geladen |
| **Milan abbauen** | Kommandant | Milan leer und niemand an der Milan |

Der Kommandant muss dafür über Luke oder höher gestiegen sein, der Soldat auf dem rechten Lukenplatz muss über Luke sein.

So läuft ein Einsatz der Milan ab:

1. Der Kommandant geht über Luke und baut die Milan auf.
2. Er oder der Soldat auf dem rechten Lukenplatz lädt die Milan mit einem Rohr aus dem Laderaum.
3. Der Kommandant (über Luke oder höher gestiegen) wechselt mit **In Milan Einsteigen** an die Milan und schießt. Mit **Aus Milan Aussteigen** geht es zurück auf den Kommandantensitz.
4. Nach jedem Schuss ist die Milan leer und muss neu geladen werden. Das leere Rohr fällt vom Fahrzeug.
5. Zum Schluss wird die Milan abgebaut, das Dreibein kommt zurück in den Laderaum.

Die Milan auf dem Marder ist nicht stabilisiert. Am besten schießt man aus dem Stand.

Rohre und Dreibein lassen sich auch aus dem Laderaum nehmen und abgesessen einsetzen, siehe Abschnitt „Milan (abgesessen)“ unter [Compat Redd'n'Tank](/de/ttt-a3/kompatibilität/compat-rnt).

# Funk und Bordverständigung

- Die Besatzung hat drei Funkgeräte im Fahrzeug:
  - Rack 1: SEM90 + SEM70 (Funkkreis A)
  - Rack 2: PRC103 + PRC117F (Funkkreis B)
  - Rack 3: SEM90 (Funkkreis C)
- Über die Bordverständigung sprechen alle Besatzungsmitglieder miteinander.
- Hinten links am Marder hängt ein Infanterietelefon. Darüber kann jemand von außen mit der Besatzung sprechen, zum Beispiel um die Heckklappe öffnen zu lassen.

# Laderaum und Ausstattung

- Der Laderaum hat keine Gewichtsgrenze. Ausrüstung kann beliebig eingeladen werden.
- Das Tarnnetz ist von Anfang an angebracht. Aktionen zum Auf- und Abbauen gibt es nicht.
- Auf der geöffneten Heckklappe kann eine Karte abgelegt werden.

# Für Missionsbauer

In den Eden-Attributen des Marders lässt sich **Heckklappe öffnen** setzen. Dann ist die Klappe beim Spawnen offen und der Schützentrupp kann sofort einsteigen.
