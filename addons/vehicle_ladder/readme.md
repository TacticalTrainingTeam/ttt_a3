# Vehicle Ladder

Rahmen, um eine ACE-Taktikleiter (`ACE_TacticalLadder`) an einem Fahrzeug aufzustellen und anschließend anzupassen. Wird aktuell vom Marder (`compat_rnt`) genutzt.

## Funktionsweise

- `fnc_attachLadder` erzeugt die Leiter, klappt sie auf die kleinste erlaubte Stufe (3 von 11) aus, hängt sie mit `attachTo` an das Fahrzeug (inklusive Synchronisation der Ausrichtung per `setPosWorld`) und entfernt ein `ACE_TacticalLadder_Pack` aus dem Laderaum.
- `fnc_adjustLadder` startet die Anpassung (nur lokal): Mausrad fährt die Leiter aus bzw. ein, Mausrad mit Modifikatortaste (Shift/Strg/Alt) kippt sie bis zu 20 Stufen. Ein Mausklick (beliebige Maustaste) fixiert die Leiter. Die Hinweise werden über den ACE-Mouse-Hint angezeigt.
- Die Mausrad- und Klick-Handler hängen am Missions-Display (`Extended_DisplayLoad_EventHandlers`, `RscDisplayMission`). Die Anpassung wird außerdem beim Öffnen des Interaktionsmenüs und bei Bewusstlosigkeit abgebrochen.
- Die aufgestellte Leiter wird unzerstörbar gemacht (`allowDamage false`), andere ACE-Leitern bleiben unverändert. Wird das Fahrzeug gelöscht, löscht der Server auch die angehängten Leitern.

Die Aktionen am Fahrzeug (Position, Sitz, Bedingungen) liegen im jeweiligen Fahrzeug-Addon, siehe `fnc_initLadderActions` in `compat_rnt`.

## Abhängigkeiten

- `ace_tacticalladder`, `ace_interaction`

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Übernommen aus `addons/Ladder` (Autoren laut Original: Mishkar, Timi007). Geändert: Die Leiter wird nur für selbst aufgestellte Leitern unzerstörbar gemacht (im Original für alle ACE-Leitern), jede Maustaste bestätigt, das Rucksack-Entfernen läuft über ein Common-Event und angehängte Leitern werden mit dem Fahrzeug gelöscht.

## Maintainer

- Andx
