# Common

Enthält Funktionen und Assets für die TTT-Mod.

## Flakfeuer (`doFlakFire` / `stopFlakFire`)

`doFlakFire` erzeugt pro Flak eine `Logic`-Einheit in einer eigenen `sideLogic`-Gruppe als Ziel und versetzt sie in einem CBA-PFH (Intervall 6-15 s) zufällig über die Flak, auf die dann `doSuppressiveFire` befohlen wird. Ein `Reloaded`-EH füllt die Munition auf.

Der Zustand `[pfhHandle, target, reloadedEhId]` liegt serverseitig in `ttt_common_flakFire` auf der Flak. Darüber verhindert `doFlakFire` doppelte Starts, und `stopFlakFire` räumt PFH, EH und Ziel auf. Der PFH ruft `stopFlakFire` selbst auf, sobald Flak oder Richtschütze tot sind. Wird die Flak gelöscht, entfernt er nur sich und das Ziel (Variable und EH verschwinden mit dem Objekt).

Die Gruppe wird mit `deleteGroupWhenEmpty` erzeugt: Ein direktes `deleteGroup` nach `deleteVehicle` schlägt fehl, weil die Einheit ihre Gruppe erst am Frame-Ende verlässt.

Altmissionen, die den Handle noch per `CBA_fnc_removePerFrameHandler` entfernen, stoppen zwar das Feuer, hinterlassen aber Ziel und EH. Neue Missionen sollten `stopFlakFire` nutzen.

## Maintainer

- Andx
- EinStein
