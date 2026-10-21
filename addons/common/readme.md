# Common

Enthält Funktionen und Assets für die TTT-Mod.

## addIntel

`fnc_addIntel` läuft auf jedem Client (`initPlayerLocal.sqf`) und fügt dort lokal eine Aktion hinzu. Die ID dieser Aktion wird lokal am Objekt gespeichert (`ttt_common_intelActionId`), da Action-IDs pro Maschine unterschiedlich sein können.

Beim Aufheben wird genau ein CBA-Event ausgelöst (`ttt_common_intelFound`, `CBA_fnc_globalEvent`). Der Handler `fnc_intelFound` läuft auf allen Maschinen:

- Maschinen mit Interface: Tagebucheintrag anlegen, Hint anzeigen, lokale Aktion entfernen. Das gilt damit auch für Spectator/Zeus, nicht nur für Spielereinheiten.
- Server: `hideObjectGlobal` (funktioniert nur dort), falls das Objekt ausgeblendet werden soll.

Das Event ist bewusst nicht JIP-fähig: Spätere Spieler erhalten den Eintrag über die öffentliche Variable `ttt_infoShared`, die in `fnc_addIntel` geprüft wird. Ein JIP-Event würde den Eintrag doppelt anlegen.

Einschränkungen:

- **Nur ein `addIntel`-Aufruf pro Objekt.** Sowohl `ttt_common_intelActionId` als auch `ttt_infoShared` sind einzelne Variablen am Objekt. Bei einem zweiten Aufruf überschreibt die neue Action-ID die alte, sodass das Aufheben des ersten Intels die Aktion des zweiten entfernt und das erste erneut aufhebbar bleibt. Außerdem setzt das Aufheben eines Intels `ttt_infoShared` für das ganze Objekt, wodurch JIP-Spieler auch noch nicht gefundene Intel desselben Objekts erhalten.
- **Gleichzeitiges Aufheben durch zwei Spieler** erzeugt doppelte Tagebucheinträge: Beide lösen das Event aus, bevor es bei ihnen ankommt und die Aktion entfernt wird. Das war bereits mit `remoteExec` so und wird bewusst nicht abgefangen, da es in der Praxis selten auftritt.

## Flakfeuer (`doFlakFire` / `stopFlakFire`)

`doFlakFire` erzeugt pro Flak eine `Logic`-Einheit in einer eigenen `sideLogic`-Gruppe als Ziel und versetzt sie in einem CBA-PFH (Intervall 6-15 s) zufällig über die Flak, auf die dann `doSuppressiveFire` befohlen wird. Ein `Reloaded`-EH füllt die Munition auf.

Der Zustand `[pfhHandle, target, reloadedEhId]` liegt serverseitig in `ttt_common_flakFire` auf der Flak. Darüber verhindert `doFlakFire` doppelte Starts, und `stopFlakFire` räumt PFH, EH und Ziel auf. Der PFH ruft `stopFlakFire` selbst auf, sobald Flak oder Richtschütze tot sind. Wird die Flak gelöscht, entfernt er nur sich und das Ziel (Variable und EH verschwinden mit dem Objekt).

Die Gruppe wird mit `deleteGroupWhenEmpty` erzeugt: Ein direktes `deleteGroup` nach `deleteVehicle` schlägt fehl, weil die Einheit ihre Gruppe erst am Frame-Ende verlässt.

Altmissionen, die den Handle noch per `CBA_fnc_removePerFrameHandler` entfernen, stoppen zwar das Feuer, hinterlassen aber Ziel und EH. Neue Missionen sollten `stopFlakFire` nutzen.

## Maintainer

- Andx
- EinStein
