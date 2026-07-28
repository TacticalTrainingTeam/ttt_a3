# TTT Drohnen Tarp

Ein Drohnen Tarp ist eine Möglichkeit einen Landeplatz für eine Drohne zu markieren.
Jeder Spieler, der einen der Drohnen-Tarp-Gegenstände (schwarz/grün/rot/gelb) in seinem Inventar trägt, kann diesen über eine ACE-Eigeninteraktion auslegen; der Gegenstand wird dabei verbraucht.
Über eine ACE-Fremdinteraktion kann der ausgelegte Tarp wieder eingepackt werden, der Gegenstand wird dann zurückgegeben.

## CBA-Einstellungen

``` c++
force ttt_drone_tarp_buildTime = 6;                                                                    //default: 6;
force ttt_drone_tarp_useAnimation = true;                                                              //default: true;
force ttt_drone_tarp_buildAnimation = "Acts_carFixingWheel";                                           //default: "Acts_carFixingWheel";
```

## Maintainer

- Andx
- EinStein
