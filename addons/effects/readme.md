# Effects

## Funktionen

Eine Sammlung immersiver VFX-Effekte, welche in Missionen dem Spieler die Sicht erschweren können.

### Ausatemeffekt

Vor den Mündern der Spieler (nicht der KI) entstehet ein Effekt, welcher feuchte, ausatmende Luft immitiert.
Die Funktion muss lokal von jedem Spieler ausgeführt werden. Dazu bietet sich die initPlayerLocal.sqf an:

```c++
[] call ttt_effects_fnc_condensedBreath;
```

Arguments:  
None  

Return Value:  
**breathParticle:** OBJECT - Partikelgenarator (wird dieser gelöscht, endet der Effekt)  

### Schneefall

Um den Spieler herum werden Schneeflocken erstellt. Die Intensität des Schneefalls ist einstellbar.
Die Funktion nimmt keine Änderungen am Wetter vor.
Die Funktion muss lokal von jedem Spieler ausgeführt werden. Dazu bietet sich die initPlayerLocal.sqf an:

```c++
[intensity] call ttt_effects_fnc_snow;
```
Arguments:  
**intensity:** INTEGER (optional, default: 50) - Intensität des Schneefalls in Prozent  

Return Value:  
**snowParticle:** OBJECT - Partikelgenarator (wird dieser gelöscht, endet der Effekt)  

### Sturm

Dem Spieler wird die Sicht eingeschränkt, Sturmgeräusche abgespielt und gelegentlich die Kamera verwackelt.
Um ihn herum werden Partikel erstellt, die ihn zusätlich stark an der Sicht hindern. Standardmäßig ist es einem Infanteristen nur noch möglich zu gehen, nicht schneller.
Es ist einstellbar ob gelegentlich Objekte wie Fahrzeuge oder Spieler vom Wind leicht bewegt werden sollen.
Im Gegenzug wird die KI vorrübergehend um 75% in den Skills: "aimingAccuracy", "aimingShake", "aimingSpeed" und "spotDistance" verschlechtert.

```c++
[duration, effect, stormType, walk, direction] call ttt_effects_fnc_stormInit;
```
Arguments:  
**duration:** INTEGER (optional, default: 300) - Dauer des Sturms in Sekunden (Minimum 60)  
**effect:** BOOL (optional, default: false) - Sollen Objekte wie Fahrzeuge oder Spieler vom Wind leicht bewegt werden  
**stormType:** INTEGER (optional, default: 0) - Sandsurm (0) oder Schneesturm (1)  
**walk:** BOOL (optional, default: true) - Ein Infanterist kann sich nur noch im Tempo "Gehen" fortbewegen  
**direction:** INTEGER (optional, default: random 360) - Windrichtung in Grad  

Return Value:  
**0: endTime:** INTEGER - Ende des Stums nach Missionszeit (time)  
**1: direction:** INTEGER - Windrichtung in Grad  

## Maintainer

- EinStein
