# TTT Main

Stellt anderen Mods folgende Basisfunktionen zu Verfügung.

## reim_crateFiller

```c++
[
    [container],
    [
        [item, count]
    ],
    clear
] call ttt_main_fnc_crateFiller; 
```

**container:** OBJECT - Objekte denen der Cargoinhalt hinzugefügt werden soll<br/>
**item:** STRING - Inventargegenstand welcher hinzugefügt werden soll<br/>
**count:**  INTEGER - Anzahl der hinzuzufügenden Inventargegenstände<br/>
**clear:** BOOLEAN (Optional, default: true) - Vorherigen Inventarinhalt des Objektes leeren

### Beispiel
```c++
[
    [fahrzeug_01, fahrzeug_03],
    [
        ["Toolkit", 1],
        ["ACE_Entrenchingtool", 5],
        ["30Rnd_556x45_Stanag", 50]
    ],
    false
] call ttt_main_fnc_crateFiller;
```

Dabei werden die bisherigen Gegenstände des Fahrzeugs nicht entfernt und bleiben im Inventar beider Fahrzeuge vorhanden.<br/>
Hinzu kommen allerdings wie gewünscht bei beiden ein Werkzeugkasten, fünf Klappspaten und 50 Magazine.

## Maintainer

- Andx
