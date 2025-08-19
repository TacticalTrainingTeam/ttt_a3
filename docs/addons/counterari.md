# Konterartillerie

Lässt feindliche Artillerie auf das Feuer der eigenen Artillerie reagieren.

## Benutzung

Modul `Konterartillerie - Feindl. Artillerie` platzieren und mit allen feindlichen Artilleriegeschützen synchronisieren, die Gegenfeuer geben sollen.
Modul `Konterartillerie - Freundl. Artillerie` platzieren und mit allen freundlichen Artilleriegeschützen synchronisieren, die Gegenfeuer auf sich ziehen sollen.
In diesem Modul können noch Einstellungen vorgenommen werden, die sich auf das Gegenfeuer beziehen:

- Radius: In welchem Radius soll das Gegenfeuer einschlagen. Ist `Radius verkleinern` aktiviert, werden die Schüsse immer genauer.
- Schüsse: Wie oft soll die Konterartillerie (pro Fahrzeug) feuern.
- Radius verkleinern: Soll der Radius mit fortlaufendem Beschuss verkleinert werden.
- Verzögerung: Nach wie vielen Sekunden, gestartet nach dem erstem eigenem Schuss, soll die Konterartillerie ihr Feuer beginnen.

**Wichtig: Von beiden Modulen darf jeweils nur eins pro Mission verbaut werden. Alle jeweiligen Fahrzeuge sind daran zu synchronisieren.** Dementsprechend kann es nicht mehr als eine Schuss-/Beschussgruppe geben.

```c++
vehicle addEventhandler ["Fired", {
    [
        _this select 0,
        _this select 5,
        radius,
        shots,
        decrementing,
        enemyUnits,
        enemyRadars,
        delay
    ] remoteExec ["ttt_counterari_fnc_counterFire",2]
}];
```

## Alternative Nutzung

Diese Funktion ermöglicht es auch auf einen beliebeigen Punkt schießen zu lassen.

```c++
[target, radius, shots, decrementing, vehicles] call ttt_counterari_fnc_positionFire;
```

## Maintainer

- Andx
- EinStein
