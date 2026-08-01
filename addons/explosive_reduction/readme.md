# Explosive Reduction

Fügt Objekten, die im Editor (oder per Script) über das Attribut *"Destructible by Explosive Charge"* markiert wurden, eine ACE-Interaktion hinzu, mit welcher Spieler das Objekt mittels einer M112 Sprengladung zerstören können.

## Ablauf

1. Der Spieler benötigt das konfigurierte Item (Standard: `DemoCharge_Remote_Mag` / M112) im Inventar.
2. Nach Auswahl der Aktion läuft eine kurze Platzierungs-Progressbar.
3. Danach wird die Ladung aus dem Inventar entfernt und ein konfigurierbarer Timer gestartet.
4. Läuft der Timer ab, explodiert eine M112 Sprengladung an der Position des Objekts und das Objekt wird gelöscht.

## Einstellungen (CBA Settings)

- Enable/Disable
- Benötigtes Item (Klassenname)
- Timerdauer (Sekunden)
- Platzierungsdauer (Sekunden)
- Animation beim Platzieren (an/aus, Animationsname)

## Maintainer

- Andx
