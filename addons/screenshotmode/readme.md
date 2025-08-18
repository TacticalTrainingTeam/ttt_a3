# Screenshotmodus

Mit `Strg` + `F12` könnt ihr das Ingame-UI ausblenden.

Funktioniert für:

- Vanilla
- ACE
- DUI Squad Radar
- ACRE Fahrzeug-HUD

## Funktion

Der Screenshotmodus nutzt das [ACE User Interface Framework](https://ace3.acemod.org/wiki/framework/ui-framework). Speziell den Standard ACE-Keybind um das Interface zu verstecken. Beim Druck von <kbd>Strg</kbd>+<kbd>F12</kbd> wird von ACE ein Event ausgelöst, auf das die TTT-Mod reagiert und weitere Interfaceelemente ausblendet.

*ACE* und *DUI Squad Radar* wird bereits von ACE verarbeitet. *ACRE* und die Vanillaelemente werden durch die TTT-Mod ausgeblendet.

Der Chat wird ja bereits durch [Clear HUD](https://github.com/TacticalTrainingTeam/ttt_a3/tree/master/addons/clearhud) ausgeblendet und nicht nochmal extra verarbeitet.

*cTab* kann jeder mit einer einfachen Taste ausblenden und wird deswegen nicht mittels der Mod gelöst.

## Maintainer

- Andx
