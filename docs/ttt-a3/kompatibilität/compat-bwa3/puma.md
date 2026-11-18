---
title: Puma – Bedienung
description: >-
  Bedienungsanleitung für den Schützenpanzer Puma: Optiken, Bewaffnung,
  Selbstschutz-System MUSS, Kameras, Funk und Laderaum.
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

::block-infobox{name="Puma – Bedienung"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Diese Seite erklärt, wie Besatzung und Schützentrupp den Puma aus der BWMod im TTT-Mod bedienen. Wie der Puma taktisch eingesetzt wird, steht unter [Mechanisierte Infanterie](/de/handbuch/gepanzertekräfte/mechinf). Eine Übersicht aller Änderungen an BWMod-Fahrzeugen gibt es unter [Compat BWMod](/de/ttt-a3/kompatibilität/compat-bwa3).

# Fahren

- Der Motor braucht 5 Sekunden, bis er läuft.
- Der Fahrer hat einen Kompass im Bild, der die Fahrtrichtung anzeigt.
- Mit <kbd>Umschalt</kbd> + <kbd>Pos1</kbd> schaltet der Fahrer die Rückfahrkamera ein und mit derselben Taste wieder aus.

# Optiken

Richtschütze und Kommandant sehen in ihren Optiken mehr von der Umgebung als in der normalen BWMod-Version. Beide haben drei Zoomstufen, zwischen denen sie wie gewohnt wechseln. Nachtsicht und Wärmebild bleiben erhalten.

Störende Anzeigen wie das Datum und mehrere Lampen sind aus den Optiken entfernt.

# Bewaffnung

## Maschinenkanone

Die Kanone hat getrennte Munitionsarten: **AP** (gegen Fahrzeuge) und **HE** (gegen Infanterie und weiche Ziele). Gewechselt wird über die normale Waffenauswahl, nicht mehr über das Mausrad.

- HE richtet mehr Schaden an als in der normalen BWMod-Version.
- Ein Magazin fasst 240 Schuss HE bzw. 160 Schuss AP.
- Ab dem Spawnen ist HE geladen (statt der Airburst-Munition ABM).

## Maschinengewehr

Das MG hat einen Gurtkasten mit 1000 Schuss und lädt ohne Verzögerung nach.

## Nebelmittelwurfanlage

Richtschütze und Kommandant können eine Nebelsalve abfeuern. Dafür drücken sie die Taste für **Gegenmaßnahmen** (Countermeasures). Im Waffenmenü taucht die Anlage nicht auf.

- Neben der Waffenanzeige steht, wie viele Salven noch übrig sind: **NbMWAnl: x**. Rot heißt: gerade nicht schussbereit.
- Nach jeder Salve muss die Anlage kurz nachladen.
- Es muss ein Richtschütze im Fahrzeug sitzen, der lebt und bei Bewusstsein ist. Ein Kommandant allein kann nicht nebeln.

# Selbstschutz-System MUSS

Das MUSS schützt den Puma vor anfliegenden Panzerabwehr-Lenkflugkörpern.

- Kommt ein Lenkflugkörper näher als 2 km, hört die Besatzung einen lauten Warnton.
- Das Radar oben links zeigt, aus welcher Richtung der Flugkörper kommt.
- Je nach Modus dreht das MUSS den Turm zum Flugkörper, um dessen Zielerfassung zu stören, und feuert danach selbstständig eine Nebelsalve ab.

Richtschütze und Kommandant schalten den Modus mit <kbd>Einfügen</kbd> um. Jeder Druck wechselt zum nächsten Modus, die aktuelle Einstellung wird kurz eingeblendet:

1. Stören
2. Stören und Turm ausrichten
3. Stören, Turm ausrichten und Nebel – **Standard**

Im dritten Modus verbraucht das MUSS Nebelgranaten, ohne dass jemand die Taste drückt. Wer die Nebelsalven lieber selbst auslösen will, schaltet auf Modus 2.

Die Taste lässt sich in den Steuerungseinstellungen unter **Tactical Training Team → BWMod Puma → MUSS Modus umschalten** ändern.

# Kameras im Kampfraum

Die Passagiere – und alle anderen außer dem Fahrer – können sich auf ihrem Bildschirm die Außenkameras des Puma ansehen:

- <kbd>Umschalt</kbd> + <kbd>Pos1</kbd>: nächste Kamera
- <kbd>Umschalt</kbd> + <kbd>Ende</kbd>: vorherige Kamera

Nacheinander kommen vier Außenkameras (Blick nach 9, 7, 5 und 3 Uhr), dann der Blick des Kommandanten, einmal normal und einmal stark vergrößert. Nach der letzten Kamera wird das Bild wieder ausgeblendet. Ist Nachtsicht eingeschaltet, zeigen die Kameras ein Nachtsichtbild.

# Funk und Bordverständigung

- Die Besatzung hat drei Funkgeräte im Fahrzeug:
  - Rack 1: SEM90 + SEM70 (Funkkreis A)
  - Rack 2: PRC103 + PRC117F (Funkkreis B)
  - Rack 3: SEM90 (Funkkreis C)
- Über die Bordverständigung sprechen alle Besatzungsmitglieder miteinander. Zusätzlich können sich bis zu zwei Passagiere zuschalten, zum Beispiel der Truppführer des Schützentrupps.
- Hinten am Puma hängt ein Infanterietelefon. Darüber kann jemand von außen mit der Besatzung sprechen.

# Laderaum und Ausstattung

- Der Laderaum hat keine Gewichtsgrenze. Ausrüstung kann beliebig eingeladen werden.
- Auf der Heckklappe kann eine Karte abgelegt werden.

# Für Missionsbauer

- In den Eden-Attributen des Puma kann unter **Symbol: Fahrzeugnummer** eine rote Nummer (2.0 oder A bis C3) gewählt werden. Sie erscheint seitlich am Fahrzeug.
- In den Eden-Attributen ist HE statt ABM als Munition voreingestellt. Das lässt sich dort wie gewohnt ändern.
