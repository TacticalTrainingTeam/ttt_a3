# Einheiten

Stellt im 3den-Editor platzierbare Einheiten im TTT Stil zur Verfügung.

Here is the structured Page artifact synthesized from the group chat:

Arma 3 Modding Guide: Custom Faction & Unit Configs

Overview

This document consolidates examples and explanations shared in the discussion about creating custom units, factions, groups, and editor categories in Arma 3. It serves as a practical reference for modders who want to define their own playable soldiers, organize them into groups, and customize how they appear in the Eden Editor.

Problem Statement

Modders often need to:

Create new unit classes with custom loadouts.

Organize units into factions and groups for use in Eden Editor.

Customize editor categories for better organization. The challenge is ensuring configs are valid, minimal, and functional.

Goals & Objectives

Provide minimal working examples of unit configs.

Demonstrate how to define CfgGroups for group compositions.

Show a complete faction config with multiple units and groups.

Explain how to create custom editor subcategories.

Key Features

1. Minimal Unit Config

Defines a new soldier class (MyMod_Rifleman) with:

Custom faction (MyMod_Faction)

Weapons, magazines, linked items

Proper respawn definitions

Editor visibility

2. Group Config (CfgGroups)

Creates a Fireteam group under BLUFOR → My Custom Faction → Infantry:

Four riflemen with ranks and positions

Appears in Eden Editor’s Groups menu

3. Full Faction Config

Includes:

CfgPatches, CfgFactionClasses, CfgVehicleClasses

Three units: Rifleman, Autorifleman, Medic

Two group compositions: Fireteam and Squad

Clean inheritance and editor functionality

4. Custom Editor Subcategory

Defines CfgEditorSubcategories:

Example: EdSubcat_MyMod_Infantry

Units reference this via editorSubcategory

Appears as a distinct subcategory in Eden Editor

User Stories

As a modder, I want to create a custom faction so my units appear under a unique name in Eden Editor.

As a mission maker, I want predefined groups (fireteams, squads) to quickly place organized units.

As a content creator, I want custom editor categories to keep my units and vehicles organized.

Open Questions / Next Steps

Expand to motorized/mechanized groups with vehicles.

Create custom uniforms and gear sets.

Build a full mod folder structure (addons\mymod\config.cpp, icons, pboproject-ready).

Integrate with CBA Extended Loadouts for advanced gear management.

Add custom main categories in Eden Editor beyond vanilla defaults.

Appendix: Code Examples

Minimal Unit Config

class CfgVehicles
{
    class B_Soldier_F;
    class MyMod_Rifleman : B_Soldier_F
    {
        scope = 2;
        displayName = "Rifleman";
        faction = "MyMod_Faction";
        editorSubcategory = "EdSubcat_Personnel";
        weapons[] = {"arifle_MX_F","hgun_P07_F","Throw","Put"};
        magazines[] = {"30Rnd_65x39_caseless_mag","16Rnd_9x21_Mag","HandGrenade","SmokeShell"};
    };
};

Group Config

class CfgGroups
{
    class West
    {
        class MyMod_Faction
        {
            class Infantry
            {
                class MyMod_Fireteam
                {
                    name = "Fireteam";
                    class Unit0 { vehicle = "MyMod_Rifleman"; rank = "SERGEANT"; position[] = {0,0,0}; };
                    class Unit1 { vehicle = "MyMod_Rifleman"; rank = "CORPORAL"; position[] = {5,-5,0}; };
                };
            };
        };
    };
};

Custom Editor Subcategory

class CfgEditorSubcategories
{
    class EdSubcat_MyMod_Infantry
    {
        displayName = "MyMod Infantry";
    };
};

Summary

This guide provides a cohesive set of examples for Arma 3 modders to:

Define custom units and factions.

Organize them into groups.

Customize their appearance in Eden Editor. It is a foundation for building more complex mods with vehicles, gear sets, and full faction structures.

## Maintainer

- Andx
