# TTT Nachschub

Scannt bei Missionsstart die Ausrüstung aller Spieler und baut daraus pro
Kategorie eine Item-Datenbank auf (gemittelt pro Gruppe mit Spielern). Darauf
aufbauend können Missionsbauer typisierte Nachschubkisten anfordern lassen -
über eine ACE-Aktion an vorplatzierten Depot-Objekten, über Zeus-Module oder
(falls Zeus Enhanced geladen ist) über das ZEN-Kontextmenü, siehe
`resupply_zen/readme.md`. Zeus-Module und ZEN-Menü gibt es nur für die
dynamischen Kisten, nicht für die fest vorgegebenen.

Siehe die [Nutzerdokumentation](https://docs.tacticalteam.de/addons/resupply/)
für Kistentypen, Einstellungen und die Nutzung durch Missionsbauer.

## Item-Klassifizierung

Die Items werden bei Missionsstart aus der Ausrüstung der Spieler klassifiziert:

- `magazines _unit` - Einordnung anhand der CfgAmmo-Hierarchie der Munition:
  - `RocketBase` / `MissileBase` → Panzerabwehr
  - `MineBase` / `BombCore` → Sprengstoff
  - `Grenade` (Wurfgranaten, z. B. `GrenadeHand`) / `GrenadeBase` (Unterlaufgranaten,
    z. B. `G_40mm_HE` - eigene, separate Ammo-Familie trotz ähnlichen Namens)
    / `SmokeShell` / `FlareBase` → Granaten
  - alles andere → Munition
- `items _unit` - geht in Support, außer ACE-Sanitätsitems
  (`ACE_isMedicalItem = 1` in `CfgWeapons`, deckt Verbandsmaterial, Medikamente,
  IV-Beutel, PAK, Nahtset, Leichensäcke etc. ab) - die haben mit den
  Sanitätskisten bereits eigene, dedizierte Kisten und würden Support sonst
  doppeln
- `weapons _unit` - Waffen, die in CBAs Disposable-Launcher-Framework
  (`CBA_DisposableLaunchers`, siehe `fnc_resolveDisposableLauncher`)
  registriert sind, gehen zusätzlich zu ihrer Munition in Panzerabwehr. Nötig
  für echte Einwegwaffen (z. B. die Panzerfaust-3 aus BWA3): dort wird beim
  Abfeuern die ganze Waffe verbraucht statt nur nachgeladen, eine reine
  Magazin-Kiste wäre also nutzlos ohne ein neues Rohr. Launcher, die nur per
  Missionskonvention mit einem Magazin ausgegeben werden (z. B. Vanilla-NLAW),
  bleiben auf Engine-Ebene nachladbar und werden hier bewusst nicht
  berücksichtigt - dort reicht die Munition allein.

## Fest vorgegebene Kisten (`GVAR(prefilledTypes)`)

Neben den dynamischen Typen gibt es Typen, die ohne Datenbank direkt eine
fertig befüllte `ttt_common`-Kistenklasse spawnen: die drei Sanitätskisten
sowie Spreng-, Pionier-, EOD-, EOD+UGV-, Drohnen- und Markierungskiste.
Die Fallschirm-Frachtnetz-Kiste aus `ttt_common` ist bewusst nicht dabei - sie
ist nicht dafür gedacht, über Nachschub gespawnt zu werden. `XEH_preInit.sqf` definiert sie an einer einzigen Stelle
(`GVAR(prefilledTypes)`, Reihenfolge = Menü-Reihenfolge; `GVAR(prefilled)` ist
die daraus abgeleitete Lookup-HashMap): Typ-ID, Stringtable-Key des
Anzeigenamens, Icon, Kistenklasse, optional die KAT-Ersatzklasse und das
Gate-Flag (siehe unten). ACE-Menü, `fnc_spawnCrate` und `fnc_isCrateAvailable`
lesen daraus - eine neue fest vorgegebene Kiste braucht dort also nur einen
Eintrag.

### Freischaltung pro Depot (Gate)

Alle fest vorgegebenen Kisten außer den Sanitätskisten haben im sechsten
Eintrag von `GVAR(prefilledTypes)` das Flag `gated = true`: Sie sind an einem
Depot nur verfügbar, wenn ihre Typ-ID in der Objekt-Variable
`GVAR(enabledTypes)` (Array von Typ-IDs) steht. `fnc_isTypeEnabled` wertet das
aus und wird an zwei Stellen geprüft: in `fnc_isCrateAvailable` (blendet die
ACE-Aktion aus) und - autoritativ, da die Aktion nur clientseitig versteckt -
in `fnc_spawnCrate` (Hinweis `typeNotEnabled`, kein Spawn). Die Prüfung läuft
vor dem Limit-Check.

Ohne Depot (`_container = objNull`) wird bewusst nicht gegated. Das trifft auf
alle Script-API-Aufrufe zu - auch `[depotObjekt, "uav"] call fnc_spawnCrate`, da
das Objekt dort nur die Spawn-Referenz (Argument 0) ist, nicht der
`_container` (Argument 4) - sowie auf Zeus/ZEN: Dort ist der Aufruf selbst bereits die
ausdrückliche Entscheidung des Missionsbauers, und die Freischaltung ist eine
reine Depot-Eigenschaft.

Die Variable wird - wie `GVAR(container)` und `GVAR(limits)` - nicht
öffentlich gesetzt und muss auf allen Maschinen gleich sein (das Init-Feld läuft
ohnehin überall). Es gibt bewusst kein 3DEN-Attribut dafür, nur die
Init-Variable. Das ZEN-Depot-Markieren fasst die Variable nicht an (analog zu
`GVAR(limits)`).

Zeus-Module und ZEN-Kontextmenü bieten die fest vorgegebenen Kisten bewusst
**nicht** an: Sie sind bereits fertig befüllt, Zeus kann sie also direkt aus
der Objektliste platzieren - ein Modul dafür wäre reiner Umweg. Beide decken
nur die dynamischen, aus der Datenbank gebauten Typen ab (`ammo`, `grenades`,
`at`, `explosives`, `support`), daher wartet `fnc_zeusSpawnCrate` immer auf
`GVAR(db_init)`. Ein neuer dynamischer Typ braucht dort dagegen je ein
Zeus-Modul in `CfgVehicles.hpp` (Config kann keine Laufzeit-Liste auswerten)
samt Eintrag in `units[]` der `config.cpp` sowie einen Eintrag in
`_types` von `fnc_zenRegisterContextMenu`.

Die Typ-IDs der Common-Kisten (`spreng`, `pio`, `eod`, ...) heißen bewusst
nicht `explosives`, da das bereits der dynamische Sprengstoff-Typ ist. Nur die
Sanitätskisten haben eine `compat_kam`-Variante; bei allen anderen bleibt die
KAT-Klasse leer und es wird immer die Common-Klasse gespawnt. Die
Anzeigenamen der Common-Kisten kommen aus der Stringtable von `ttt_common`,
nicht aus der von `resupply`.

## Kisten-Platzierung (`fnc_spawnCrate`)

Standardmäßig sucht `findEmptyPosition` einen freien Platz im Umkreis von
10 m um den übergebenen Referenzpunkt (Depot-Objekt bzw. Zeus-Modul-Position).

Steht zusätzlich ein Objekt der Klasse `GVAR(spawnPointClass)` (CBA-Setting,
Standard `VR_Area_01_square_2x2_yellow_F`) im selben Umkreis, wird dessen
Position direkt übernommen (keine erneute `findEmptyPosition`-Prüfung - ein
Suchradius, der eng genug wäre, um exakt diese eine Stelle zu bestätigen, ist
meist zu klein für die Kollisionsprüfung eines Kisten-Modells und würde nie
etwas finden). Belegung wird stattdessen direkt geprüft: Steht dort bereits
eine Kiste (`ReammoBox_F`-Basisklasse, gilt für alle hier gespawnten
Kistentypen inkl. Sanitätskisten), wird für Depot-Spawns überhaupt keine
Kiste gespawnt - kein Ausweichen auf eine zufällige Stelle, da das den Sinn
der festen Position wieder zunichtemachen würde. Kein zusätzlicher State wird
dafür gehalten: Die Prüfung läuft bei jedem Aufruf frisch über `nearObjects`.

Sowohl das Zeus-Modul als auch die ZEN-Kontextmenü-Aktion rufen `fnc_spawnCrate`
über das gemeinsame `fnc_zeusSpawnCrate` mit `_fallbackOnOccupied = true` auf
und sind von dieser Belegungssperre ausgenommen: Ein Marker-Objekt zufällig im
10-m-Radius um die vom Curator gewählte Position (Modul-Position bzw.
Klickposition im Kontextmenü) ist Zufall, nicht der vom Missionsbauer
beabsichtigte feste Spawnpunkt - beide sollen laut eigenem Zweck immer an
genau dieser Position spawnen, daher fällt der Aufruf bei Belegung auf die
normale `findEmptyPosition`-Suche um diese Position zurück, statt komplett
fehlzuschlagen.

## ZEN-Kontextmenü (`resupply_zen`)

Optionale Sub-Addon-Komponente (`skipWhenMissingDependencies`, gebaut/geladen
nur wenn `zen_context_menu` aus Zeus Enhanced vorhanden ist), analog zu
`effects/effects_zen`. `fnc_zenRegisterContextMenu` registriert bei
`hasInterface` ein "Nachschub"-Untermenü mit einem Eintrag pro dynamischem
Kistentyp im ZEN-Kontextmenü (`zen_context_menu_fnc_createAction`/`_fnc_addAction`).
Statement/Condition-Code erhält ZENs `ACTION_PARAMS` als `_this`
(`[_position, _objects, _groups, _waypoints, _markers, _hoveredEntity,
_args]`) - `_args` trägt hier den Kistentyp, `_position` die Klickposition.
Die Condition blendet nicht verfügbare Typen aus (`fnc_isCrateAvailable`,
ohne Depot also ohne Limit-Prüfung), die Statement-Funktion sendet die
Anfrage per `QGVAR(zenSpawnCrateRequest)`-CBA-Event an den Server, wo
`fnc_zeusSpawnCrate` sie genauso behandelt wie eine Zeus-Modul-Platzierung.

## Abhängigkeiten

- `ttt_common` (Klassen der fest vorgegebenen Kisten + `fnc_crateFiller`)
- `ace_common` (strukturierter Bestätigungs-/Fehler-Text auf dem Bildschirm für die ACE-Aktion)
- `ace_interact_menu`
- `ace_zeus` (Zeus-Curator-Meldungsfeed zur Rückmeldung von Zeus-ausgelösten Spawns)
- `ttt_compat_kam` (optional; wird automatisch für Sanitätskisten verwendet, wenn `kat_main` geladen ist)
- `zen_context_menu` (optional, nur für `resupply_zen`; Zeus Enhanced)

## Maintainer

- Andx
