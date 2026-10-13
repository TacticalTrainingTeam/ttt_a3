# Compat Redd'n'Tank - GraMaWa

Macht die GraMaWa stabiler.

Fixt ACE-Aktionen um seitlich zu drehen und die Höhe zu verstellen.

Benötigt `force ace_csw_defaultAssemblyMode = true;` in den CBA Settings.

## ACE CSW

Die GraMaWa ist eine gurtgeführte ACE-Crew-Served-Weapon:

- Der Gurt (`ttt_compat_rnt_gmw_Belt_32`, "[CSW] 40mm GMW-Gurt", 32 Schuss) lässt sich laden und entladen (`ACE_CSW`: Ladezeit 10 s, Entladezeit 8 s, Position des Gurts am Waffenmodell). Er ist ein Gurt im Sinne von ACE (`ACE_isBelt`) und erscheint im Arsenal.
- Waffe: `ttt_compat_rnt_Redd_gmw_Static_Proxy` ist die Proxy-Waffe von Redd'n'Tank mit `magazineReloadTime = 0.5`.
- Magazingruppen (`ace_csw_groups`): Der Gurt von Redd'n'Tank (`Redd_gmw_Belt_32`) und der Gurt dieses Addons sind austauschbar.

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Übernommen aus `addons/Redd_GMW` (Autoren laut Original: Timi007, Lemonberries): `ACE_CSW`, Gurt, Proxy-Waffe und Magazingruppen. Die Aktionen zum Drehen und zur Höhenverstellung stammen aus diesem Repository.

## Maintainer

- Andx
