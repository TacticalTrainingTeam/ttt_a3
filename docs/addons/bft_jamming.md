# BFT-Störung

Fügt ein Editor-Modul hinzu, mit dem sich der Blue Force Tracker (BFT) von cTab stören lässt. Es funktioniert wie die Funk- und Drohnenstörsender von Crow's Electronic Warfare: ein Gerät, ein Radius, mit dem Spektrumgerät auffindbar.

## Benutzung

Das Modul `Set as BFT Jammer` im Editor platzieren und optional mit einem Objekt synchronisieren, das als Störsender dienen soll. Ist kein Objekt synchronisiert, wird an der Stelle des Moduls automatisch ein Datenterminal als Störsender erzeugt.

Einstellungen am Modul:

- **Jamming Type**: `Blackout`, `Drift` oder `Mixed`. Ein Störsender hat genau eine Störungsart.
    - **Blackout**: Einheiten im gesamten Wirkungsbereich (effektiver Radius plus Abklingradius) verschwinden komplett vom BFT.
    - **Drift**: Einheiten bleiben sichtbar, werden aber an einer falschen Position angezeigt. Je näher eine Einheit am Störsender ist, desto weiter liegt die Anzeige daneben; am äußeren Rand des Abklingradius stimmt sie wieder. Die falsche Position wandert langsam, statt zu springen. Betrifft nur Gruppen- und Fahrzeugsymbole, siehe Hinweis unten.
    - **Mixed**: Im effektiven Radius Blackout, im Abklingradius darum herum Drift.
- **Effective Radius** / **Falloff Radius**: Innerer Radius mit voller Wirkung und zusätzlicher Bereich darum herum, in dem die Wirkung nachlässt (in Metern).
- **Frequency**: Frequenz in MHz, auf der der Störsender im Spektrumgerät erscheint, solange er aktiv ist. Der Wert muss im Bereich der experimentellen Antenne liegen (520 bis 1090 MHz). Verschiedene Störsender können verschiedene Frequenzen bekommen.
- **Active at Mission Start**: Ob der Störsender zu Beginn eingeschaltet ist oder erst später (z. B. von Zeus) eingeschaltet wird.

Zeus kann den Störsender wie jeden anderen Störsender von Crow's Electronic Warfare per Rechtsklick ein- und ausschalten und sieht ihn auf der Karte. Im Zeus-Modus selbst lässt sich das Modul nicht platzieren. Anders als die Störsender von Crow's Electronic Warfare macht der BFT-Störsender kein Geräusch.

!!! warning "Drift und Mixed brauchen eine Missionseinstellung"
    Drift funktioniert nur, wenn cTab die BFT-Positionen in festen Abständen aktualisiert statt live. Dafür muss die Mission in den Addon-Einstellungen `ctab_core_bft_mode` auf `2` setzen und erzwingen. Ohne diese Einstellung bleibt Drift wirkungslos; Blackout funktioniert dagegen immer.

    Standardmäßig steht der Wert auf Live-Aktualisierung, weil sonst in jeder Mission alle BFT-Positionen um einige Sekunden verzögert wären, auch ohne Störsender.

    Auch mit dieser Einstellung verschiebt Drift nur Gruppen- und Fahrzeugsymbole. Abgesessene Mitglieder der eigenen Gruppe zeigt cTab immer an ihrer echten Position an.

## Voraussetzungen

- [Crow's Electronic Warfare](https://github.com/Crowdedlight/Crows-Electronic-Warfare)
- [cTab Advanced](https://steamcommunity.com/sharedfiles/filedetails/?id=3438246217)

Fehlt eine der beiden Mods, ist das Modul nicht verfügbar. Da die Störung auf Funktionen dieser Mods aufbaut, sollte sie nach größeren Updates einer der beiden Mods kurz getestet werden.

## Maintainer

- Andy
