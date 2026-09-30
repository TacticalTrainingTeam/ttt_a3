# Konterartillerie

Konterartillerie für Arma3.

## Funktionsweise

Zwei Modultypen bilden zusammen ein Paar:

- `registerFriendlyAriModule` (`ttt_counterari_registerFriendlyAriModule`) — synchronisiert mit den eigenen Artilleriegeschützen, die Gegenfeuer auf sich ziehen sollen.
- `registerEnemyAriModule` (`ttt_counterari_registerEnemyAriModule`) — synchronisiert mit den feindlichen Geschützen, die zurückfeuern sollen.

Ein Freund-Modul wird zusätzlich **direkt mit dem zugehörigen Feind-Modul synchronisiert** (Modul-zu-Modul-Sync über den Eden-Sync-Werkzeug). `fnc_initFriendlyAri.sqf` filtert `synchronizedObjects _logic` nach `typeOf _x == QGVAR(registerEnemyAriModule)`, um die verknüpften Feind-Module zu finden, und liest deren `synchronizedObjects` direkt aus, um die zugehörigen Geschütze zu ermitteln — es gibt dafür keine geteilte globale Variable mehr. Dadurch ist die Zuordnung rein strukturell (über Sync-Beziehungen) und beliebig viele unabhängige Paare können nebeneinander existieren; frühere Versionen unterstützten nur ein einziges globales Paar (`GVAR(enemyAri)` + globale Einstellungsvariablen), das war die harte "es darf nur ein Modul geben"-Einschränkung.

**Wichtige SQF-Falle:** Die Modul-Funktion erhält als zweites Argument `_units` — laut Modul-Framework "eine Liste der betroffenen Einheiten". In der Praxis enthält dieses Argument aber nur echte Einheiten/Fahrzeuge, **keine synchronisierten Module** (Logic-Klasse). Ein Filter wie `_units select {typeOf _x == QGVAR(registerEnemyAriModule)}` findet das synchronisierte Feind-Modul deshalb nie und `_enemyArtyArray` bleibt leer, obwohl alles korrekt synchronisiert wurde. Deshalb wird stattdessen `synchronizedObjects _logic` direkt aufgerufen (der rohe SQF-Befehl auf dem Modul-Logic-Objekt selbst, Argument 0) — dieser liefert unabhängig vom Modul-Framework wirklich alle synchronisierten Objekte, Module eingeschlossen. `_units` (Argument 1) wird deshalb in `fnc_initFriendlyAri.sqf` und `fnc_initEnemyAri.sqf` gar nicht mehr benutzt und ist in den `params`-Aufrufen entsprechend als `""`-Platzhalter markiert.

`registerEnemyAriModule` läuft mit `isGlobal = 0` (nur Server) und dient nur noch der Validierung/Protokollierung — die eigentliche Geschützliste wird bei Bedarf clientseitig direkt über `synchronizedObjects` aufgelöst, nicht über eine vom Server gesetzte Variable. Das vermeidet eine Race Condition: `synchronizedObjects` liefert statische Missionsdaten, die auf jedem Client von Anfang an identisch vorliegen, im Gegensatz zu einer zur Laufzeit gesetzten Variable, deren Netzwerk-Ankunftszeit auf jedem Client unterschiedlich sein kann.

`registerFriendlyAriModule` läuft weiterhin mit `isGlobal = 1`, weil der `Fired`-EH auf jedem Client angehängt werden muss, damit er zuverlässig dort auslöst, wo das Geschütz gerade lokal ist.

**Wichtige SQF-Falle:** Der `Fired`-EH ist ein asynchroner Callback, der lange nach Ende von `fnc_initFriendlyAri.sqf` ausgelöst wird. Private Locals aus dem Sync-Aufruf (`_radius`, `_enemyArtyArray`, …) dürfen daher **nicht** direkt im EH-Code referenziert werden, da SQF-Closures über private Variablen aus einem bereits beendeten Skript-Scope nicht zuverlässig funktionieren. Stattdessen werden diese Werte pro Geschütz mit `setVariable [QGVAR(config), [...]]` auf der Einheit selbst abgelegt und im EH über `getVariable` wieder ausgelesen.

Die frühere globale Aussperrung (`Redd_counterFire`/`Redd_positionFire` + globaler `Redd_arti_shots`-Zähler) wurde entfernt, da sie verhinderte, dass zwei Paare gleichzeitig feuern konnten, und bei gleichzeitigen Missionen den Schusszähler beschädigte. Jetzt:

- Der "beschäftigt"-Zustand wird direkt auf den feindlichen Geschützen der jeweiligen Gruppe gespeichert (`QGVAR(busy)`), sodass nur diese konkrete Gruppe für die Dauer ihres eigenen Gegenfeuers blockiert ist.
- Der Schusszähler ist ein lokales Array (`_shotsFired = [0]`), das per Referenz durch `fnc_fireMission.sqf` gereicht und dort mutiert wird — keine globale Variable mehr, daher können mehrere Feuermissionen (verschiedener Paare oder auch `fnc_positionFire.sqf`) parallel laufen, ohne sich gegenseitig zu beeinflussen.

`fnc_positionFire.sqf` behält seine öffentliche Parameter-Signatur bei; `fnc_counterFire.sqf` ist weiterhin manuell nutzbar, der frühere optionale Radar-Parameter wurde jedoch entfernt (siehe `docs/addons/counterari.md`).

Statt `remoteExec` wird dafür CBAs Event-Framework genutzt (Projektkonvention): `fnc_initFriendlyAri.sqf`s `Fired`-EH feuert `QGVAR(counterFire)` per `CBA_fnc_serverEvent`, ein in `XEH_preInit.sqf` server-seitig registrierter `CBA_fnc_addEventHandler` ruft daraufhin `fnc_counterFire.sqf` auf.

`fnc_counterFire.sqf` prüft, ob die abgefeuerte Munition zur eigenen Artilleriewaffe des Schützen gehört (`_magazine in (getArtilleryAmmo [_ownArty])`), damit z.B. eine mitgeführte Verteidigungs-MG kein Gegenfeuer auslöst. Diese Prüfung ist bewusst dynamisch gegen das Fahrzeug selbst und nicht als feste Munitions-Whitelist umgesetzt, da jeder Artillerie-Mod (BWA3, CUP, RNT, …) eigene Munitionsklassen mitbringt. Alle stillen Abbruchpunkte in `fnc_counterFire.sqf`/`fnc_positionFire.sqf` (keine Geschütze mehr, falsche Munition, Gruppe noch beschäftigt, außer Reichweite) loggen eine `WARNING`, damit sich ausbleibendes Gegenfeuer über das RPT-Log diagnostizieren lässt.

## Abhängigkeiten

- `A3_Modules_F` (Modul-Framework)
- `ttt_common`
- LAMBS Danger (optional, nur für `taskReset` der eigenen Geschütze)

## Maintainer

- Andx
- EinStein
