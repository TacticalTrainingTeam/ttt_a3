# Compat BWmod

## Eagle IV

Fügt dem Eagle IV zwei abnehmbare Rucksäcke `BWA3_PatrolPack_Fleck`/`BWA3_PatrolPack_Tropen` über ACE-Interaktionen hinzu.

## NH-90

Sperrt die Plätze 13 und 14 des NH-90, da diese unter dem Hubschrauber sitzen.

## M120 Mörser

Ergänzt die `allowFireOnLoad = 1;` Eigenschaft. Siehe <https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework#3-additional-configuration-parameters>

## ACRE

Konfiguriert alle Fahrzeuge mit den gleichen Rack Einstellungen:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Vereinheitlicht außerdem das Infanterietelefon und die Bordverständigungsanlage.

## Dingo 2 CG13 Funkstörer

Der Dingo 2 CG13 stört nicht nur IED-Minen, sondern auch Funkgeräte. Sobald der Fahrer den CG13 einschaltet, werden Funkgeräte in der Umgebung gestört, bis er ihn wieder ausschaltet oder der Motor aus geht.

- Nahe am Fahrzeug ist der Funk vollständig gestört.
- Betroffen sind alle Spieler in Reichweite, auch die eigene Besatzung und Verbündete.
- Die Störung wirkt voll im selben Umkreis wie der IED-Störer (40 m) und lässt danach bis zum 1,5-fachen dieser Entfernung allmählich nach.
- Funktioniert nur im Mehrspielermodus.

## Maintainer

- Andx
