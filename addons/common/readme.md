# Common

## Funktionen

Stellt folgende Funktionen an andere Addons zur Verfügung:

### crateFiller

(ehem. r_crate)

```c++
[
    [container],
    [
        [item, count]
    ],
    clear
] call ttt_common_fnc_crateFiller; 
```

**container:** OBJECT - Objekte denen der Cargoinhalt hinzugefügt werden soll  
**item:** STRING - Inventargegenstand welcher hinzugefügt werden soll  
**count:**  INTEGER - Anzahl der hinzuzufügenden Inventargegenstände  
**clear:** BOOLEAN (Optional, default: true) - Vorherigen Inventarinhalt des Objektes leeren

#### Beispiel

```c++
[
    [fahrzeug_01, fahrzeug_03],
    [
        ["Toolkit", 1],
        ["ACE_Entrenchingtool", 5],
        ["30Rnd_556x45_Stanag", 50]
    ],
    false
] call ttt_common_fnc_crateFiller;
```

Dabei werden die bisherigen Gegenstände des Fahrzeugs nicht entfernt und bleiben im Inventar beider Fahrzeuge vorhanden.  
Hinzu kommen allerdings wie gewünscht bei beiden ein Werkzeugkasten, fünf Klappspaten und 50 Magazine.

## Bilder

Stellt TTT-Bilder anderen Addons zur Verfügung.

## Maintainer

- Andx
