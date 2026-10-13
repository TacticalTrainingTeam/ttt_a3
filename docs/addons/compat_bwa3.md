# Compat BWmod

## Eagle IV

Fügt dem Eagle IV zwei abnehmbare Rucksäcke `BWA3_PatrolPack_Fleck`/`BWA3_PatrolPack_Tropen` über ACE-Interaktionen hinzu.

## NH-90

Sperrt die Plätze 13 und 14 des NH-90, da diese unter dem Hubschrauber sitzen.

## M120 Mörser

Ergänzt die `allowFireOnLoad = 1;` Eigenschaft. Siehe <https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework#3-additional-configuration-parameters>

## Leopard 2

- Die Optik des Kommandanten bietet ein größeres Sichtfeld und zeigt die Wärmebilddarstellung in Grün.
- Schalter und Lampen in der Kommandantenoptik werden ausgeblendet.
- Der Fahrer erhält einen horizontalen Kompass.
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern (siehe [Nebelmittelwurfanlage](smoke_launcher.md)).

## Puma

- Die Optiken von Richtschütze und Kommandant bieten ein größeres Sichtfeld. Datum und weitere Anzeigen in den Optiken sind ausgeblendet, der Fahrer hat einen horizontalen Kompass.
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern (siehe [Nebelmittelwurfanlage](smoke_launcher.md)).
- Die Maschinenkanone hat getrennte Munitionsarten AP und HE, die über die Waffenauswahl oder die Taste "HE/AP Munition wechseln" (Standard: 5) gewechselt werden (kein Mausrad mehr). HE richtet mehr Schaden an. Die Magazine fassen 240 Schuss HE/ABM bzw. 160 Schuss APFSDS.
- Das MG hat einen 1000-Schuss-Gurtkasten und lädt ohne Verzögerung nach.
- Im Eden-Editor ist HE statt ABM als Standardmunition ausgewählt.
- Mit Metis Enhanced kann eine Karte auf der Heckklappe abgelegt werden.

### MUSS (Selbstschutz-System)

Kommt ein lenkbarer Flugkörper auf den Puma zu (näher als 2 km), ertönt für die Besatzung ein lauterer Warnton, und das Radar oben links zeigt die Richtung des Flugkörpers. Je nach Modus richtet das MUSS außerdem den Turm auf den Flugkörper aus, um die Zielerfassung zu brechen, und nebelt danach ab. Richtschütze und Kommandant schalten den Modus mit der Taste "MUSS Modus umschalten" (Standard: Einfügen) um:

1. Stören
2. Stören und Turmausrichtung
3. Stören, Turmausrichtung und Nebeln (Standard)

### Kameras

Die Kameras der Passagiere und die Rückfahrkamera des Fahrers werden mit Umschalt+Pos1 (nächste Kamera) und Umschalt+Ende (vorherige Kamera) bedient. Die Tastenbelegung ersetzt die von BWmod.

### Fahrzeugnummer

Im Eden-Editor kann in den Attributen des Pumas unter "Symbol: Fahrzeugnummer" eine rote Nummer (2.0, A bis C3) gewählt werden, die seitlich am Fahrzeug erscheint.

## Leuchtkugeln

Die Leuchtkugeln der P2A1 sind größer, brennen länger (20 Sekunden) und werden früher gezündet, damit sie besser zu sehen sind.

## ACRE

Konfiguriert alle Fahrzeuge mit den gleichen Rack Einstellungen:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Vereinheitlicht außerdem das Infanterietelefon und die Bordverständigungsanlage.

## Maintainer

- Andx
