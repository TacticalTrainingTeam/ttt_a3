# TTT Resupply

Scans all player loadouts at mission start, builds per-category item databases
(averaged per group with players in it), and lets mission makers spawn typed
supply crates on demand via an ACE action on pre-placed depot objects or via
Zeus modules.

See the [user documentation](https://docs.tacticalteam.de/addons/resupply/)
for crate types, settings, and mission maker usage.

## Item-Klassifizierung

Die Items werden bei Missionsstart aus der Ausrüstung der Spieler klassifiziert:

- `magazines _unit` - Einordnung anhand der CfgAmmo-Hierarchie der Munition:
  - `RocketBase` / `MissileBase` → Panzerabwehr
  - `MineBase` / `BombCore` → Sprengstoff
  - `GrenadeBase` / `SmokeShell` / `FlareBase` → Granaten
  - alles andere → Munition
- `items _unit` - alles davon geht in Support
- `weapons _unit` - Waffen mit CfgWeapons-Basisklasse `Launcher` gehen
  zusätzlich zu ihrer Munition in Panzerabwehr. Nötig für Einwegwaffen wie die
  NLAW: dort wird beim Abfeuern die ganze Waffe verbraucht statt nur
  nachgeladen, eine reine Magazin-Kiste wäre also nutzlos ohne ein neues Rohr.
  `fnc_crateFiller` befüllt diese Waffen vorgeladen über
  `addWeaponWithAttachmentsCargoGlobal`, damit sie sofort einsatzbereit sind.

## Dependencies

- `ttt_common` (medical crate classes + `fnc_crateFiller`)
- `ace_common` (structured on-screen confirmation/failure text for the ACE action)
- `ace_interact_menu`
- `ace_zeus` (Zeus curator message feed used to report Zeus-triggered spawn results)
- `ttt_compat_kam` (optional; used automatically for medical crates when `kat_main` is loaded)

## Maintainer

- Andx
