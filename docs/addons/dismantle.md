# Abbauen

Erlaubt Spielern die das nötige Werkzeug und die nötige Befähigung haben bestimmte Objekte zu zerlegen. Gedacht für Panzersperren und ähnliches.

Sobald das Zerlegen abgeschlossen ist, verschwindet das Objekt und ein Metallgeräusch ertönt, das Spieler im Umkreis von ca. 40 Metern hören.

## CBA-Einstellungen

```  c++
force ttt_dismantle_enable = true;                                                                       //default: false
force ttt_dismantle_supportedObjects = "['Land_CzechHedgehog_01_new_F', 'Land_CzechHedgehog_01_old_F']"; //default: "['']"
force ttt_dismantle_neededItem = "Toolkit";                                                              //default: "" = for no item needed
force ttt_dismantle_neededSkill = 1;                                                                     //default:0, 0 = None, 1 = Engineer, 2 = Advanced Engineer
```

## Maintainer

- Andx
