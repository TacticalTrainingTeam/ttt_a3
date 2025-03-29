# Effekte

## Funktionen

Eine Sammlung immersiver VFX-Effekte, die in Missionen die Sicht des Spielers erschweren können.

### Atemeffekt

Vor den Mündern der Spieler (nicht der KI) entsteht ein Effekt, der feuchte, ausatmende Luft imitiert. Der Effekt kann nicht beendet werden. Die Funktion muss lokal von jedem Spieler ausgeführt werden. Dazu bietet sich neben dem 3DEN-Editor-Modul die `initPlayerLocal.sqf` an:
  
```c++
[] call ttt_effects_fnc_condensedBreath;
```

**Arguments:**  
Keine

**Return value:**  
**breathParticle:** OBJECT - Partikelgenerator (wird dieser gelöscht, endet der Effekt)

### Schneefall

Um den Spieler herum werden Schneeflocken erstellt. Die Intensität des Schneefalls ist einstellbar; der Effekt kann jedoch nicht mehr beendet werden. Die Funktion nimmt keine Änderungen am Wetter vor und muss lokal von jedem Spieler ausgeführt werden. Dazu bietet sich neben dem 3DEN-Editor-Modul die `initPlayerLocal.sqf` an:

```c++
[intensity] call ttt_effects_fnc_snow;
```

**Arguments:**  
**Return value:** INTEGER (optional, Standard: 50) - Intensität des Schneefalls in Prozent

**Rückgabewert:**  
**snowParticle:** OBJECT - Partikelgenerator (wird dieser gelöscht, endet der Effekt)

### Sturm

Dem Spieler wird die Sicht eingeschränkt, Sturmgeräusche abgespielt und gelegentlich die Kamera verwackelt. Um ihn herum werden Partikel erstellt, die ihn zusätzlich stark an der Sicht hindern. Standardmäßig ist es einem Infanteristen nur noch möglich zu gehen, nicht schneller. Es ist einstellbar, ob gelegentlich Objekte wie Fahrzeuge oder Spieler vom Wind leicht bewegt werden sollen. Im Gegenzug wird die bereits existierende KI vorübergehend um 75 % in den Fähigkeiten "aimingAccuracy", "aimingShake", "aimingSpeed" und "spotDistance" verschlechtert. Die Funktion muss serverseitig, wie z.B. durch einen eingestellten Trigger, durch die `initServer.sqf` oder das 3DEN-Editor-Modul (Triggersynchronisation möglich) aufgerufen werden. Es kann nur ein Sturm gleichzeitig aktiv sein.
```c++
[duration, effect, stormType, walk, direction] call ttt_effects_fnc_stormInit;
```

**Arguments:**  
- **duration:** INTEGER (optional, Standard: 300) - Dauer des Sturms in Sekunden (Minimum 60)
- **effect:** BOOL (optional, Standard: false) - Sollen Objekte wie Fahrzeuge oder Spieler vom Wind leicht bewegt werden
- **stormType:** INTEGER (optional, Standard: 0) - Sandschauer (0) oder Schneesturm (1)
- **walk:** BOOL (optional, Standard: true) - Ein Infanterist kann sich nur noch im Tempo "Gehen" fortbewegen
- **direction:** INTEGER (optional, Standard: zufällig 360) - Windrichtung in Grad

**Return value:**  
- **0: endTime:** INTEGER - Ende des Sturms nach Missionszeit (time)
- **1: direction:** INTEGER - Windrichtung in Grad

## Maintainer
- EinStein