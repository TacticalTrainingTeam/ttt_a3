# TTT Main

Stellt anderen Mods Basisfunktionen zu Verfügung.

## reim_crateFiller

```c++
[
    [fahrzeug_01],
    [
        ["Toolkit", 1],
        ["ACE_Entrenchingtool", 1]
    ]
] call ttt_main_fnc_crateFiller;
    
```

überschreibt das vorhandene Inventar des Fahrzeugs (wie bisher).

```c++
[
    [fahrzeug_01],
    [
        ["Toolkit", 1],
        ["ACE_Entrenchingtool", 1]
    ],
    false
] call ttt_main_fnc_crateFiller;
    
```

überschreibt das vorhandene Inventar nicht (neu).

## Maintainer

- Andx
