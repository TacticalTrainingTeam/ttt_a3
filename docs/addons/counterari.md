# Konterartillerie

Lässt feindliche Artillerie auf das Feuer der eigenen Artillerie reagieren.

## Benutzung

1. Modul `Konterartillerie - Feindl. Artillerie` platzieren und mit allen feindlichen Artilleriegeschützen synchronisieren, die Gegenfeuer geben sollen.
2. Modul `Konterartillerie - Freundl. Artillerie` platzieren und mit allen freundlichen Artilleriegeschützen synchronisieren, die Gegenfeuer auf sich ziehen sollen.
3. **Beide Module zusätzlich miteinander synchronisieren.** Diese Verbindung legt fest, welche feindliche Gruppe auf welche freundliche Gruppe reagiert.

In dem Freundlich-Modul können noch Einstellungen vorgenommen werden, die sich auf das Gegenfeuer beziehen:

- Radius: In welchem Radius soll das Gegenfeuer einschlagen. Ist `Radius verkleinern` aktiviert, werden die Schüsse immer genauer.
- Schüsse: Wie oft soll die Konterartillerie (pro Fahrzeug) feuern.
- Radius verkleinern: Soll der Radius mit fortlaufendem Beschuss verkleinert werden.
- Verzögerung: Nach wie vielen Sekunden, gestartet nach dem erstem eigenem Schuss, soll die Konterartillerie ihr Feuer beginnen.

!!! info "Mehrere Gruppen"
    Es können beliebig viele Modul-Paare (je ein Freundlich- und ein Feindlich-Modul, miteinander synchronisiert) auf derselben Karte platziert werden. Jedes Paar agiert unabhängig: Schießt eine freundliche Gruppe, antwortet ausschließlich die mit ihr synchronisierte feindliche Gruppe.

## Manuelle Anbindung ohne Module

Für Artillerie, die erst während der Mission erzeugt wird und daher nicht in Eden platziert und synchronisiert werden kann, lässt sich das Gegenfeuer auch direkt per Skript anbinden, ohne die Module zu verwenden:

``` c++
vehicle addEventhandler ["Fired", {
    [
        "ttt_counterari_counterFire",
        [
            _this select 0,
            _this select 5,
            enemyUnits,
            radius,
            shots,
            decrementing,
            delay,
            enemyRadars
        ]
    ] call CBA_fnc_serverEvent
}];
```

## Alternative Nutzung

Diese Funktion ermöglicht es auch auf einen beliebigen Punkt schießen zu lassen.

``` c++
[target, radius, shots, decrementing, vehicles] call ttt_counterari_fnc_positionFire;
```

## Maintainer

- Andx
- EinStein
