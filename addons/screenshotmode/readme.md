# Screenshotmodus

Mit `Strg` + `F12` könnt ihr das Ingame-UI ausblenden. Nutzt: <https://ace3.acemod.org/wiki/framework/ui-framework#22-hide-ui-keybind>

## cTab-Toggle

Beim Ausblenden wird der aktuell offene cTab-Displaystatus (`cTabIfOpen`, siehe [jetelain/ctab](https://github.com/jetelain/ctab) `@cTab/addons/core/functions/fnc_open.sqf`) in `GVAR(ctabState)` gemerkt, bevor `cTab_fnc_close` aufgerufen wird. Beim Wieder-Einblenden wird `cTab_fnc_open` mit genau diesem Zustand erneut aufgerufen - `cTabIfOpen` wird aber erst `nil`, wenn das vorherige Interface tatsächlich fertig geschlossen hat, deshalb wird (analog zu cTabs eigener `fnc_toggleInterface.sqf`) per `CBA_fnc_addPerFrameHandler` darauf gewartet.

## Maintainer

- Andx
