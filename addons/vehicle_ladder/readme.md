# Vehicle Ladder

Rahmen, um eine ACE-Taktikleiter (`ACE_TacticalLadder`) an einem Fahrzeug aufzustellen und anschließend anzupassen. Wird aktuell vom Marder (`compat_rnt`) genutzt.

## Funktionsweise

- `fnc_attachLadder` erzeugt die Leiter, klappt sie auf die kleinste erlaubte Stufe (3 von 11) aus, hängt sie mit `attachTo` an das Fahrzeug (inklusive Synchronisation der Ausrichtung per `setPosWorld`) und entfernt ein `ACE_TacticalLadder_Pack` aus dem Laderaum.
- `fnc_adjustLadder` startet die Anpassung (nur lokal): Mausrad fährt die Leiter aus bzw. ein, Mausrad mit Modifikatortaste (Shift/Strg/Alt) kippt sie bis zu 20 Stufen. Ein Mausklick (rechte Maustaste) fixiert die Leiter. Die Hinweise werden über den ACE-Mouse-Hint angezeigt.
- Die Mausrad- und Klick-Handler hängen am Missions-Display (`Extended_DisplayLoad_EventHandlers`, `RscDisplayMission`). Die Anpassung wird außerdem beim Öffnen des Interaktionsmenüs und bei Bewusstlosigkeit abgebrochen.
- Die ACE-Leiter wird unzerstörbar gemacht (`armor = 500000`).

Die Aktionen am Fahrzeug (Position, Sitz, Bedingungen) liegen im jeweiligen Fahrzeug-Addon, siehe `fnc_initLadderActions` in `compat_rnt`.

## Abhängigkeiten

- `ace_tacticalladder`, `ace_interaction`

## Quellen

- <https://github.com/PzGrenBtl-402/PzGrenBtl402/tree/master/addons/Ladder>

## Maintainer

- Andx
