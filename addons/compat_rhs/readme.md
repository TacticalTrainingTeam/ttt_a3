# Compat RHS

Enthält Configfixes und einige Funktionen für RHS.

## Makrosystem

Die folgenden Makros werden im übergeordneten `script_component.hpp` definiert und von allen Subkomponenten geerbt:

### `BACKPACK_BALANCE(maxLoad,massValue)`

Definiert maximale Ladung und Masse für Rucksäcke.

```cpp
class example_backpack: B_Carryall_oli {
    BACKPACK_BALANCE(440,25);
};
```

### `UNIFORM_ITEMINFO(container,massValue)`

Definiert Containerklasse und Masse für Uniformen.

```cpp
class example_uniform: Uniform_Base {
    class ItemInfo: UniformItem {
        UNIFORM_ITEMINFO("Supply70",25);
    };
};
```

### `VEST_PROTECTION(container,massValue)`

Definiert Weste mit Schutz (armor=12 für Torso-Trefferpunkte).

```cpp
class example_vest: Vest_Camo_Base {
    class ItemInfo: ItemInfo {
        VEST_PROTECTION("Supply220",50);
    };
};
```

### `VEST_NO_PROTECTION(container,massValue)`

Definiert Weste ohne Schutz (armor=0 für alle Trefferpunkte).

```cpp
class example_chestrig: Vest_Camo_Base {
    class ItemInfo: ItemInfo {
        VEST_NO_PROTECTION("Supply220",10);
    };
};
```

### `HEADGEAR_NO_PROTECTION(massValue)`

Definiert Kopfbedeckung ohne Schutz.

```cpp
class example_beret: ItemCore {
    class ItemInfo: HeadGearItem {
        HEADGEAR_NO_PROTECTION(5);
    };
};
```

### `HEADGEAR_ARMOR(massValue,headArmor,faceArmor)`

Definiert Kopfbedeckung mit Schutz für Kopf und Gesicht.

```cpp
class example_helmet: H_HelmetB {
    class ItemInfo: ItemInfo {
        HEADGEAR_ARMOR(40,8,8);
    };
};
```

### `HEADGEAR_ARMOR_FACE_EXPOSED(massValue,armorValue)`

Definiert Kopfbedeckung mit Kopfschutz, aber freiliegendem Gesicht.

```cpp
class example_helmet: H_HelmetB {
    class ItemInfo: ItemInfo {
        HEADGEAR_ARMOR_FACE_EXPOSED(20,6);
    };
};
```

## Abhängigkeiten

- RHS USAF <https://steamcommunity.com/sharedfiles/filedetails/?id=843577117>
- RHS AFRF <https://steamcommunity.com/sharedfiles/filedetails/?id=843425103>

## Maintainer

- Andx
