# Nachschub

Scannt bei Missionsstart die Ausrüstung aller Spieler und baut daraus pro
Kategorie eine Item-Datenbank auf (gemittelt pro Gruppe mit Spielern). Darauf
aufbauend können Missionsbauer typisierte Nachschubkisten anfordern lassen -
über eine ACE-Aktion an vorplatzierten Depot-Objekten oder über Zeus-Module.

## Kistentypen

| Typ | Kistenklasse (NATO-Standard) | Inhalt |
| --- | --- | --- |
| **Munition** | `Box_NATO_Ammo_F` | Gewehr-/Pistolenmagazine |
| **Granaten** | `Box_NATO_Grenades_F` | Handgranaten, Rauchgranaten, Leuchtsignale, Unterlaufgranaten |
| **Panzerabwehr** | `Box_NATO_WpsLaunch_F` | Raketen-/Lenkflugkörpermunition, sowie bei Bedarf neue Abschussrohre für echte Einwegwaffen (z. B. die Panzerfaust 3 aus BWA3) |
| **Sprengstoff** | `Box_NATO_AmmoOrd_F` | Minen, Sprengladungen, Haftladungen |
| **Support** | `Box_NATO_Support_F` | Sonstige Ausrüstung (Batterien, Kabelbinder, etc.), ohne Sanitätsmaterial - dafür gibt es die Sanitätskisten |
| **Medic Alpha** | `ttt_common_sana_crate` | Basis-Sanitätsausrüstung (fest vorgegeben durch /common) |
| **Medic Bravo** | `ttt_common_sanb_crate` | Erweiterte Sanitätsausrüstung (fest vorgegeben durch /common) |
| **Medic Charlie** | `ttt_common_sanc_crate` | Vollständige Sanitätsausrüstung (fest vorgegeben durch /common) |

Die dynamischen Kisten (Munition bis Support) werden aus der gescannten
Datenbank befüllt. Hatte kein Spieler etwas aus einer Kategorie dabei (z. B.
keine Panzerabwehrmunition), wird diese Kiste gar nicht erst gespawnt, und wer
sie angefordert hat (Spieler oder Zeus) bekommt einen Hinweis, warum nicht.
Sanitätskisten spawnen dagegen immer mit den fest vorgegebenen TTT-Common-Klassen.

Bei der Panzerabwehr-Kiste bekommen nur echte Einwegwaffen (bei denen die
ganze Waffe beim Abfeuern verloren geht, z. B. aus manchen Waffen-Mods) ein
neues Abschussrohr dazu. Waffen wie die Carl Gustaf, die zwar meist nur mit einer
Rakete ausgegeben werden, sich aber technisch nachladen lassen, bekommen wie
gewohnt nur neue Munition.

Im ACE-Menü werden dynamische Kistentypen komplett ausgeblendet (statt sie
anzuzeigen und dann fehlschlagen zu lassen), solange der Ausrüstungs-Scan noch
läuft, bzw. sobald er fertig ist, wenn die jeweilige Kategorie leer geblieben
ist. Sanitätskisten werden immer angezeigt. Ein erfolgreicher Spawn wird dem
Anfordernden ebenso bestätigt wie ein Fehlschlag gemeldet wird.

Ist **KAT Advanced Medical** (`kat_main`) geladen, spawnen die Sanitätskisten
automatisch die entsprechenden `/compat_kam`-Varianten
(`ttt_compat_kam_sana_crate`, `_sanb_crate`, `_sanc_crate`) - Missionsbauer
müssen beim Wechsel des Sanitätsmods also nichts anpassen.

!!! info
    Der Scan läuft 5 Sekunden nach Missionsstart. JIP-Spieler werden dabei nicht erfasst.

## Spawnposition der Kiste

Gilt gleichermaßen für die ACE-Aktion an Depot-Objekten und für Zeus-Module,
da beide intern dieselbe Funktion zum Erstellen der Kiste nutzen.

Standardmäßig sucht sich die Kiste einen freien Platz im Umkreis von 10 m um
das Depot bzw. den Zeus-Modul-Standort - je nach Umgebung kann das an
wechselnden, manchmal ungünstigen Stellen landen (z. B. hinter einer Wand
oder in einer Ecke).

Für eine vorhersagbare, immer gleichbleibende Position ein
`VR_Area_01_square_2x2_yellow_F`-Objekt (gelbe 2x2-Fläche) im Umkreis von
10 m um das Depot bzw. das Zeus-Modul platzieren:

- Ist die Fläche frei, spawnt die Kiste immer exakt dort.
- Steht dort bereits eine andere Kiste, wird **keine neue Kiste gespawnt** -
  auch nicht ersatzweise an einer zufälligen Stelle. Wer sie angefordert
  hat, bekommt stattdessen einen Hinweis, dass der Platz belegt ist. So
  bleibt die Position wirklich vorhersagbar, statt bei Belegung unbemerkt
  wieder zufällig auszuweichen.
- Ist keine solche Fläche in der Nähe, gilt weiterhin die zufällige
  Platzsuche wie oben beschrieben.

!!! warning
    Das ACE-Menü blendet den Kistentyp nicht aus, nur weil der Platz auf der
    Fläche gerade belegt ist - es prüft nur, ob überhaupt etwas zum Befüllen
    da ist bzw. ob das Depot-Limit erreicht ist. Ist die Fläche belegt,
    erscheint die Aktion also weiterhin, schlägt beim Auslösen aber mit
    obigem Hinweis fehl.

## CBA-Einstellungen

``` c++
force ttt_resupply_faction = 0;              //default: 0; (0 = NATO, 1 = OPFOR, 2 = INDEP)
force ttt_resupply_quantityMultiplier = 1.0; //default: 1.0; (0.5-5.0)
```

Es gibt keinen zentralen Ein-/Ausschalter. Das ACE-Menü erscheint nur an
Objekten, die mit `ttt_resupply_container` markiert wurden (bewusste
Entscheidung des Missionsbauers), Zeus-Module stehen Curatoren dagegen immer
zur Verfügung.

## Nutzung für Missionsbauer

### ACE-Aktion an einem Depot-Objekt

Im **Init**-Feld des Objekts:

``` c++
this setVariable ["ttt_resupply_container", true];
```

Spieler sehen am Objekt ein **Resupply**-Untermenü mit allen acht Kistentypen.

Wo die Kiste dabei genau spawnt, siehe
[Spawnposition der Kiste](#spawnposition-der-kiste) weiter oben.

#### Kistenlimit pro Depot (optional)

Standardmäßig kann ein Depot jeden Kistentyp beliebig oft ausgeben. Um das zu
begrenzen, zusätzlich im **Init**-Feld:

``` c++
this setVariable ["ttt_resupply_container", true];
this setVariable ["ttt_resupply_limits", [["ammo", 3], ["at", 1]]];
```

`ttt_resupply_limits` ist eine Liste aus `[Typ, Maximalanzahl]`-Paaren. Gültige
Typen sind `"ammo"`, `"grenades"`, `"at"`, `"explosives"`, `"support"`,
`"medical_alpha"`, `"medical_bravo"` und `"medical_charlie"` - dieselben, die
auch die Script-API weiter unten verwendet. Nicht aufgeführte Typen bleiben
unbegrenzt. Ist ein Typ an diesem Depot aufgebraucht, wird die zugehörige
Aktion dort ausgeblendet - genau wie bei einer leeren Kategorie. Das Limit
gilt nur für die ACE-Aktion an Depot-Objekten, nicht für per Zeus-Modul
platzierte Kisten.

Die Erfolgsmeldung beim Spawnen nennt zusätzlich die verbleibende Anzahl an
diesem Depot (z. B. "Ammo Box spawned (2 left)"), oder "unlimited", wenn für
den Typ kein Limit gesetzt wurde.

### Zeus-Module

Im Zeus-Interface unter **Unterstützung**. Es stehen acht Module zur
Verfügung, eins pro Kistentyp. Das Platzieren eines Moduls spawnt die
entsprechende Kiste in der Nähe (siehe
[Spawnposition der Kiste](#spawnposition-der-kiste) weiter oben) und entfernt
anschließend die Modul-Logik.

Diese Module sind reine Zeus-Module: Sie sind bewusst im klassischen
2D-Missionseditor und in 3DEN ausgeblendet (eine Nachschubkiste im Voraus zu
platzieren ergibt keinen Sinn - Missionsbauer sollten stattdessen ein
Depot-Objekt mit der ACE-Aktion oder die Script-API nutzen).

### Script-API

``` c++
// Funktion muss auf dem Server ausgeführt werden, also z. B. in der initServer.sqf

// Sanitätskisten sind sofort verfügbar (fest befüllt, keine Datenbank nötig)
[getPos myMarker, "medical_alpha"] call ttt_resupply_fnc_spawnCrate;
[getPos myMarker, "medical_bravo"] call ttt_resupply_fnc_spawnCrate;
[getPos myMarker, "medical_charlie"] call ttt_resupply_fnc_spawnCrate;

// Alle anderen Typen brauchen die aus den Spieler-Loadouts gebaute Datenbank.
// Statt eine feste Wartezeit zu raten, auf das "ttt_resupply_dbReady"-Event warten,
// das der Server auslöst, sobald der Loadout-Scan abgeschlossen ist:
["ttt_resupply_dbReady", {
    // An einer Weltposition spawnen
    [getPos myMarker, "ammo"] call ttt_resupply_fnc_spawnCrate;
    [getPos myMarker, "grenades"] call ttt_resupply_fnc_spawnCrate;
    [getPos myMarker, "at"] call ttt_resupply_fnc_spawnCrate;
    [getPos myMarker, "explosives"] call ttt_resupply_fnc_spawnCrate;
    [getPos myMarker, "support"] call ttt_resupply_fnc_spawnCrate;

    // Neben einem bestehenden Objekt spawnen
    [supplyDepot, "ammo"] call ttt_resupply_fnc_spawnCrate;
}] call CBA_fnc_addEventHandler;
```

## Maintainer

- Andx
