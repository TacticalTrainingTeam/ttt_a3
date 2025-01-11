## TTT Intel

Bietet die Möglichkeit über eine A3-Vanilla-AddAction Intel zu verbauen, welches dann für jeden Spieler über eine eigene Kategorie namens "Intel" in der Kartenansicht zur Verfügung steht.

## Anleitung

```c++
[_intel,"Action",_delete,["Titel","Text"]] call ttt_intel_fnc_addIntel;
```

0: Intelobject <OBJECT>
1: Actiontitel der als Interaktion gezeigt wird <STRING> 
2: Object nach Interaktion löschen (ausblenden) <BOOL>
3: Intelinhalt <ARRAY> format [Titel <STRING>, Inhalt <STRING>] (Der String unterstüzt HTML-Syntax für z.B. Bilder)

# Beispiel:

```c++
[intel_01, "Lagekarte des Gegners untersuchen", false, ["gefundene Karte", "<img image='pictures\Karte_v3.paa' width=370 height=370/>"]] call ttt_intel_fnc_addIntel;
[intel_02, "Dokumente nehmen", true, ["eingesammeltes Dokument", "Hier stehen wichtige Informationen"]] call ttt_intel_fnc_addIntel;
```

## Instandhalter

- EinStein
