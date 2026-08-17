# UAV-Verbindung

Lässt das Videobild eines UAV mit zunehmender Entfernung des Operators verschlechtern und die Verbindung bei zu großer Distanz vollständig abbrechen.

## Funktionsweise

Gilt automatisch für **jedes** UAV in der Mission — jede Fraktion, egal ob vanilla oder aus einem Mod, egal ob in Eden platziert oder erst während der Mission erzeugt. Es ist keine Einrichtung pro UAV oder Modul nötig.

Solange der Operator innerhalb der Verschlechterungsdistanz bleibt, ist das Bild klar. Ab dieser Distanz beginnt das Bild zunehmend zu verwackeln und zu rauschen, bis bei der Verbindungsabbruch-Distanz die Verbindung vollständig getrennt wird und das UAV nicht mehr gesteuert werden kann. Kommt der Operator wieder näher heran, wird die Verbindung automatisch und ohne weiteres Zutun wiederhergestellt.

Trennt sich der Operator manuell vom UAV (z.B. über das Terminal), obwohl er sich noch in Reichweite befindet, greift die Funktion nicht ein.

## Einstellungen

In den CBA-Einstellungen unter "UAV Link" (Kategorie "Tactical Training Team"):

- **UAV-Verbindungsverschlechterung aktivieren**: Schaltet die gesamte Funktion ein/aus. Standardmäßig deaktiviert.
- **Verschlechterungsdistanz**: Entfernung (in Metern) zum UAV, ab welcher das Bild zu verwackeln beginnt. Standard: 800 m.
- **Verbindungsabbruch-Distanz**: Entfernung (in Metern) zum UAV, ab welcher die Verbindung vollständig abbricht. Muss größer als die Verschlechterungsdistanz sein. Standard: 1200 m.

## Maintainer

- Andx
