# Compat Redd'n'Tank - M120

Fügt ACE-CSW Kompatibilität hinzu. Fixt einige Config- und Skriptfehler.

Geladen und entladen wird nur über die ACE-CSW-Aktionen an der Mündung (`magazineLocation`), eine Granate pro Schuss (`desiredAmmo = 1`, `fnc_m120HandleFired` entfernt das Magazin nach dem Schuss). Der Mörser lässt sich nicht abbauen; das ist so gewollt, er wird mit ACE Dragging im Ganzen bewegt (`ace_cargo_canLoad = 0`, nicht als Fracht einladbar).

## Bekannte Fehler

M120 wirf Fehler im RPT `10:31:28 [ACE] (interact_menu) ERROR: Action [M120_ace_unloadMagazine] bad condition return` - hat keinen Einfluss auf Benutzbarkeit

## Maintainer

- Addi
- Andx
