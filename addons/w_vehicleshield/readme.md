
# W-Vehicleshield

## 3DEN-Attribute

Bei platzierten Fahrzeugen findet ihr die Option um das Schild zu aktivieren in den Attributen des Gebäudes im Abschnitt `W-Framework`.

## Funktionsaufruf (nicht empfohlen)

1. `[Vehicle] call ttt_w_vehicleshield_fnc_addVehicleShield;`

2. `[Vehicle, true, true, [true,true], true, true, 25] call ttt_w_vehicleshield_fnc_addVehicleShield;`

* Arguments:
* 0:      OBJECT - Target the vehicle shield is applied to
* 1 (Optional):      BOOLEAN - Allow the engine to be disabled? Default: true
* 2 (Optional):      BOOLEAN - Allow the fuel tank to be disabled? Default: true
* 3 (Optional):      ARRAY - Allow the [MainRotor, RearRotor] to be disabled? Default: [true, true]
* 4 (Optional):      BOOLEAN - If the hull damage is capped, kill the engine? Default: true
* 5 (Optional):      BOOLEAN - Allow the vehicle to be destroyed completely? With this set to false, the vehicle can only be destroyed by scripting commands. Default: false
* 6 (Optional):      NUMBER - How many hits exceeding the normal damage limit can the vehicle take? Default: 20
If Arg. 3 is set to true, the vehicle can be damaged up to 80%. More damage is blocked and each hit that would theoretically "kill" the vehicle get's counted as "excessive hit".
Once the threshold set in arg 4 is reached, the vehicle can be destroyed with the next hit.

## Referenzen

Danke an Miller von Gruppe W, der uns das Skript zur Verfügung gestellt hat.
<https://gitlab.gruppe-w.de/Missionsbau/Framework/-/blob/master/addons/API/functions/fnc_addVehicleShield.sqf>

## Maintainers

* Andx
