---
title: Smoke Launcher
description: >-
  Grundlage, mit der Richtschütze und Kommandant eines Fahrzeugs die
  Nebelmittelwurfanlage abfeuern können.
published: true
tags:
  - arma3
  - fahrzeuge
  - referenz
  - ttt-mod
editor: markdown
dateCreated: '2026-11-18T12:00:00.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Smoke Launcher"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Grundlage, mit der Richtschütze und Kommandant eines Fahrzeugs die Nebelmittelwurfanlage (NbMWAnl) abfeuern können. Ohne dieses Addon kann das in den unterstützten Fahrzeugen nur der Kommandant.

# Benutzung

Für Missionsbauer gibt es hier nichts einzustellen. Unterstützt werden:

- Leopard 2 und Puma aus der BWMod, siehe [Compat BWMod](/de/ttt-a3/kompatibilität/compat-bwa3)
- Marder aus Redd'n'Tank, siehe [Compat Redd'n'Tank](/de/ttt-a3/kompatibilität/compat-rnt)

Für die Besatzung gilt:

- Richtschütze und Kommandant feuern die Anlage mit der Taste für Gegenmaßnahmen (**Countermeasures**) ab. Im Waffenmenü taucht sie nicht mehr auf.
- Geschossen werden kann nur, wenn ein lebender und nicht bewusstloser Richtschütze im Fahrzeug sitzt – auch ein KI-Richtschütze reicht. Ein Kommandant allein kann nicht nebeln.
- Nach jeder Salve ist die Anlage für die Nachladezeit gesperrt.
- Neben der Waffenanzeige steht die verbleibende Munition (**NbMWAnl: x**). Rot heißt: gerade nicht schussbereit. Wer ausgestiegen ist (über Luke), sieht die Anzeige nicht.
