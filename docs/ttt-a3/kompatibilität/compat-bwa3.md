---
title: Compat BWMod
description: Verbesserungen von Fahrzeugen aus der BWMod.
published: true
tags:
  - arma3
  - fahrzeuge
  - referenz
  - ace
  - bwmod
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Compat BWMod"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Verbesserungen an Fahrzeugen aus der BWMod, vor allem einheitliche ACRE-Funkausstattung.

# Voraussetzungen

- [BWMod](https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537) - Erforderlich
- [ACRE2](https://steamcommunity.com/sharedfiles/filedetails/?id=751965892) - Erforderlich
- [ITC Land Systems](https://steamcommunity.com/sharedfiles/filedetails/?id=1388192893) - Optional, für die Panzerhaubitze 2000

# Änderungen

## ACRE

Eagle, Dingo 2, Multi, Puma, [Skorpion](/de/handbuch/kampfunterstützungskräfte/pioniere/skorpion), Leopard 2 und Panzerhaubitze 2000 haben die gleichen Funkracks:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Infanterietelefon und Bordverständigung sind ebenfalls vereinheitlicht.

## Eagle IV

Am Eagle IV hängen zwei Patrouillenrucksäcke (`BWA3_PatrolPack_Fleck` bzw. `BWA3_PatrolPack_Tropen`), die sich über die ACE-Interaktion abnehmen lassen.

## NH-90

Die Plätze 13 und 14 sind gesperrt, weil man dort unter dem Hubschrauber sitzt.

## Leopard 2

- Die Optik des Kommandanten bietet ein größeres Sichtfeld und zeigt die Wärmebilddarstellung in Grün.
- Schalter und Lampen in der Kommandantenoptik werden ausgeblendet.
- Der Fahrer erhält einen horizontalen Kompass.
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern, siehe [Smoke Launcher](/de/ttt-a3/grundlagen/smoke-launcher).

## Puma

- Die Optiken von Richtschütze und Kommandant bieten ein größeres Sichtfeld. Datum und weitere Anzeigen in den Optiken sind ausgeblendet, der Fahrer hat einen horizontalen Kompass.
- Im Eden-Editor ist HE statt ABM als Standardmunition ausgewählt.
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern, siehe [Smoke Launcher](/de/ttt-a3/grundlagen/smoke-launcher).
- Mit Metis Enhanced ab Version 1.10.2 kann eine Karte auf der Heckklappe abgelegt werden. Ohne Metis Enhanced wird die Aktion nicht angezeigt. Ausblenden lässt sie sich pro Fahrzeug, z. B. in der Init-Zeile:

```sqf
this setVariable ["ttt_common_showMapAction", false, true];
```

### MUSS (Selbstschutz-System)

Kommt ein lenkbarer Flugkörper auf den Puma zu (näher als 2 km), ertönt für die Besatzung ein lauterer Warnton, und das Radar oben links zeigt die Richtung des Flugkörpers. Je nach Modus richtet das MUSS außerdem den Turm auf den Flugkörper aus, um die Zielerfassung zu brechen, und feuert danach eine Nebelsalve ab. Richtschütze und Kommandant schalten den Modus mit der Taste **MUSS Modus umschalten** (Standard: Einfügen, Kategorie **BWMod Puma**) um:

1. Stören
2. Stören und Turmausrichtung (Standard)
3. Stören, Turmausrichtung und Nebel – verbraucht dabei Nebelgranaten, ohne dass jemand die Taste drückt

Das MUSS benötigt ACE Hunterkiller. Ohne diese Mod entfällt das MUSS – alle anderen Anpassungen funktionieren weiterhin.

### Kameras

Die Kameras der Passagiere und die Rückfahrkamera des Fahrers werden mit Umschalt+Pos1 (nächste Kamera) und Umschalt+Ende (vorherige Kamera) bedient. Diese Tastenbelegung ersetzt die von BWMod.

### Fahrzeugnummer

Im Eden-Editor kann in den Attributen des Pumas unter **Symbol: Fahrzeugnummer** eine rote Nummer (2.0, A bis C3) gewählt werden, die seitlich am Fahrzeug erscheint.

## Mörser 120 mm

Der [Mörser](/de/handbuch/kampfunterstützungskräfte/artillerie/moerser) kann direkt nach dem Laden feuern (`allowFireOnLoad`, siehe [ACE CSW](https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework#3-additional-configuration-parameters)).

## Panzerhaubitze 2000 mit ITC

Ist ITC geladen, bekommt die Panzerhaubitze 2000 den ITC-Feuerleitrechner mit Schusstafeln und Munition für die Ladungen 1 bis 5.

## Puma – Waffen

- Die Maschinenkanone hat AP und HE als getrennte Munitionsarten, die über die Waffenauswahl gewechselt werden (kein Mausrad mehr). HE richtet mehr Schaden an. Die Magazine fassen 240 Schuss HE/ABM bzw. 160 Schuss APFSDS.
- Das MG hat einen 1000-Schuss-Gurtkasten und lädt ohne Verzögerung nach.

## Leuchtkugeln P2A1

Die Leuchtkugeln der P2A1 sind größer, brennen länger (20 Sekunden) und werden früher gezündet, damit sie besser zu sehen sind.
