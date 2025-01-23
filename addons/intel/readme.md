# TTT Intel

Bietet die Möglichkeit über eine A3-Vanilla-AddAction Intel zu verbauen, welches dann für jeden Spieler über eine eigene Kategorie namens "Intel" in der Kartenansicht zur Verfügung steht.

## Anleitung

```c++
[intel, action, hide, [titel, text]] call ttt_intel_fnc_addIntel;
```

**intel:** OBJECT - Das interagierbare Objekt<br/>
**action:** STRING - Actiontitel der als Interaktion gezeigt wird<br/>
**hide:** BOOLEAN - Object nach Interaktion ausblenden<br/>
**titel:** STRING - Intelüberschrift auf der Kartenansicht<br/>
**text:** STRING - Intelinhalt der unter der Überschrift steht (Der Text unterstüzt HTML-Syntax für z.B. Bilder)

### Beispiel

```c++
[intel_01, "Lagekarte des Gegners untersuchen", false, ["gefundene Karte", "<img image='pictures\Karte_v3.paa' width=370 height=370/>"]] call ttt_intel_fnc_addIntel;
[intel_02, "Dokumente nehmen", true, ["eingesammeltes Dokument", "Hier stehen wichtige Informationen"]] call ttt_intel_fnc_addIntel;
```

## Maintainer

- EinStein
