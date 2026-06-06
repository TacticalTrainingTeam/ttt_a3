$d = "f:\Arma3 Modding\ttt_a3\addons\settings\settings"

Set-Content "$d\A3TI.sqf" -Encoding UTF8 -Value @'
// A3TI
force force A3TI_ACE_JAVELIN = true;
force force A3TI_ALLOW_TANK_DRIVER = true;
force force A3TI_ALLOW_VANILLA_TI = true;
A3TI_ENABLE_ZEUS = false;
force force A3TI_HD_VISION_FIGHTER = false;
force force A3TI_HD_VISION_LANDVEH = false;
force force A3TI_HD_VISION_SHIP = false;
force force A3TI_HD_VISION_UAV = false;
force force A3TI_REMOVE_FILMGRAIN_RHS = true;
'@

Set-Content "$d\ACE Advanced Ballistics.sqf" -Encoding UTF8 -Value @'
// ACE Advanced Ballistics
force force ace_advanced_ballistics_ammoTemperatureEnabled = true;
force force ace_advanced_ballistics_barrelLengthInfluenceEnabled = true;
force force ace_advanced_ballistics_bulletTraceEnabled = true;
force force ace_advanced_ballistics_enabled = true;
force force ace_advanced_ballistics_muzzleVelocityVariationEnabled = true;
force force ace_advanced_ballistics_simulationInterval = 0.05;
'@

Set-Content "$d\ACE Advanced Fatigue.sqf" -Encoding UTF8 -Value @'
// ACE Advanced Fatigue
force force ace_advanced_fatigue_enabled = true;
force force ace_advanced_fatigue_enableStaminaBar = true;
force force ace_advanced_fatigue_fadeStaminaBar = true;
force ace_advanced_fatigue_loadFactor = 0.75;
force ace_advanced_fatigue_performanceFactor = 2;
force ace_advanced_fatigue_recoveryFactor = 3;
force ace_advanced_fatigue_terrainGradientFactor = 0.75;
'@

Set-Content "$d\ACE Advanced Missile Guidance.sqf" -Encoding UTF8 -Value @'
// ACE Advanced Missile Guidance
force force ace_missileguidance_chaffEffectivenessCoef = 1;
force force ace_missileguidance_flareAngleCoef = 1;
force force ace_missileguidance_flareEffectivenessCoef = 1;
'@

Set-Content "$d\ACE Advanced Throwing.sqf" -Encoding UTF8 -Value @'
// ACE Advanced Throwing
force force ace_advanced_throwing_enabled = true;
force force ace_advanced_throwing_enablePickUp = true;
force force ace_advanced_throwing_enablePickUpAttached = true;
force force ace_advanced_throwing_enableTempWindInfo = true;
force force ace_advanced_throwing_showMouseControls = true;
force force ace_advanced_throwing_showThrowArc = true;
force force ace_advanced_throwing_throwStepSetting = 8;
'@

Set-Content "$d\ACE Advanced Vehicle Damage.sqf" -Encoding UTF8 -Value @'
// ACE Advanced Vehicle Damage
force force ace_vehicle_damage_enableCarDamage = false;
force ace_vehicle_damage_enabled = true;
'@

Set-Content "$d\ACE AI.sqf" -Encoding UTF8 -Value @'
// ACE AI
force force ace_ai_assignNVG = true;
'@

Set-Content "$d\ACE Arsenal.sqf" -Encoding UTF8 -Value @'
// ACE Arsenal
force ace_arsenal_allowDefaultLoadouts = true;
force ace_arsenal_allowSharedLoadouts = true;
ace_arsenal_camInverted = false;
ace_arsenal_defaultToFavorites = false;
force ace_arsenal_enableIdentityTabs = true;
ace_arsenal_enableModIcons = 1;
ace_arsenal_EnableRPTLog = false;
ace_arsenal_favoritesColor = [0.9,0.875,0.6];
ace_arsenal_fontHeight = 4.5;
ace_arsenal_loadoutsSaveFace = false;
ace_arsenal_loadoutsSaveInsignia = true;
ace_arsenal_loadoutsSaveVoice = false;
ace_arsenal_showUnavailableItems = 0;
'@

Set-Content "$d\ACE Artillery.sqf" -Encoding UTF8 -Value @'
// ACE Artillery
force force ace_artillerytables_advancedCorrections = false;
force ace_artillerytables_disableArtilleryComputer = true;
force force ace_mk6mortar_airResistanceEnabled = false;
force force ace_mk6mortar_allowCompass = true;
force force ace_mk6mortar_allowComputerRangefinder = false;
force force ace_mk6mortar_useAmmoHandling = true;
'@

Set-Content "$d\ACE Captives.sqf" -Encoding UTF8 -Value @'
// ACE Captives
force force ace_captives_allowHandcuffOwnSide = true;
force force ace_captives_allowSurrender = true;
force force ace_captives_requireSurrender = 1;
force force ace_captives_requireSurrenderAi = false;
'@

Set-Content "$d\ACE Casings.sqf" -Encoding UTF8 -Value @'
// ACE Casings
force force ace_casings_enabled = true;
ace_casings_maxCasings = 100;
'@

Set-Content "$d\ACE Common.sqf" -Encoding UTF8 -Value @'
// ACE Common
force ace_common_allowFadeMusic = true;
force force ace_common_checkExtensions = false;
force force ace_common_checkPBOsAction = 2;
force force ace_common_checkPBOsCheckAll = false;
force force ace_common_checkPBOsWhitelist = "[]";
force force ace_common_deployedSwayFactor = 1;
ace_common_displayTextColor = [0,0,0,0.1];
ace_common_displayTextFontColor = [1,1,1,1];
force force ace_common_enableSway = true;
ace_common_epilepsyFriendlyMode = false;
force force ace_common_magneticDeclination = false;
ace_common_progressBarInfo = 2;
force force ace_common_restedSwayFactor = 1;
ace_common_settingFeedbackIcons = 1;
ace_common_settingProgressBarLocation = 0;
force force ace_common_swayFactor = 1;
'@

Set-Content "$d\ACE Cook-off.sqf" -Encoding UTF8 -Value @'
// ACE Cook-off
force force ace_cookoff_ammoCookoffDuration = 0.3;
force force ace_cookoff_cookoffDuration = 0.3;
force force ace_cookoff_cookoffEnableProjectiles = true;
force force ace_cookoff_cookoffEnableSound = true;
force ace_cookoff_destroyVehicleAfterCookoff = false;
force force ace_cookoff_enableAmmobox = false;
force force ace_cookoff_enableAmmoCookoff = true;
force force ace_cookoff_enableFire = true;
force ace_cookoff_probabilityCoef = 1;
force force ace_cookoff_removeAmmoDuringCookoff = true;
'@

Set-Content "$d\ACE Crew Served Weapons.sqf" -Encoding UTF8 -Value @'
// ACE Crew Served Weapons
force ace_csw_ammoHandling = 1;
force ace_csw_defaultAssemblyMode = true;
ace_csw_dragAfterDeploy = false;
force ace_csw_handleExtraMagazines = true;
force ace_csw_handleExtraMagazinesType = 1;
force ace_csw_progressBarTimeCoefficent = 1;
'@

Set-Content "$d\ACE Dragging.sqf" -Encoding UTF8 -Value @'
// ACE Dragging
force force ace_dragging_allowRunWithLightweight = false;
force force ace_dragging_dragAndFire = true;
force force ace_dragging_skipContainerWeight = false;
force ace_dragging_weightCoefficient = 1;
'@

Set-Content "$d\ACE Explosives.sqf" -Encoding UTF8 -Value @'
// ACE Explosives
force force ace_explosives_customTimerDefault = 60;
force force ace_explosives_customTimerMax = 900;
force force ace_explosives_customTimerMin = 30;
force force ace_explosives_explodeOnDefuse = true;
force force ace_explosives_punishNonSpecialists = true;
force force ace_explosives_requireSpecialist = true;
'@

Set-Content "$d\ACE Field Rations.sqf" -Encoding UTF8 -Value @'
// ACE Field Rations
force force ace_field_rations_zeusUpdates = false;
force acex_field_rations_affectAdvancedFatigue = true;
force acex_field_rations_enabled = false;
force acex_field_rations_hudShowLevel = 0;
acex_field_rations_hudTransparency = -1;
acex_field_rations_hudType = 0;
force acex_field_rations_hungerSatiated = 1;
force acex_field_rations_nearDepletedConsequence = 0;
force acex_field_rations_terrainObjectActions = true;
force acex_field_rations_thirstQuenched = 1;
force acex_field_rations_timeWithoutFood = 2;
force acex_field_rations_timeWithoutWater = 2;
force acex_field_rations_waterSourceActions = 2;
'@

Set-Content "$d\ACE Fire.sqf" -Encoding UTF8 -Value @'
// ACE Fire
force force ace_fire_dropWeapon = 0;
force force ace_fire_enabled = true;
force force ace_fire_enableFlare = false;
ace_fire_enableScreams = true;
'@

Set-Content "$d\ACE Fortify.sqf" -Encoding UTF8 -Value @'
// ACE Fortify
force ace_fortify_markObjectsOnMap = 1;
force ace_fortify_timeCostCoefficient = 1;
force ace_fortify_timeMin = 1.5;
force force acex_fortify_settingHint = 1;
'@

Set-Content "$d\ACE Fragmentation Simulation.sqf" -Encoding UTF8 -Value @'
// ACE Fragmentation Simulation
force force ace_frag_enabled = false;
force force ace_frag_reflectionsEnabled = false;
force force ace_frag_spallEnabled = false;
force force ace_frag_spallIntensity = 0.8;
'@

Set-Content "$d\ACE G-Forces.sqf" -Encoding UTF8 -Value @'
// ACE G-Forces
force ace_gforces_coef = 1;
force force ace_gforces_enabledFor = 2;
'@

Set-Content "$d\ACE Goggles.sqf" -Encoding UTF8 -Value @'
// ACE Goggles
ace_goggles_drawOverlay = true;
ace_goggles_effects = 0;
ace_goggles_showClearGlasses = false;
force force ace_goggles_showInThirdPerson = false;
'@

Set-Content "$d\ACE Grenades.sqf" -Encoding UTF8 -Value @'
// ACE Grenades
force force ace_grenades_convertExplosives = true;
'@

Set-Content "$d\ACE Headless.sqf" -Encoding UTF8 -Value @'
// ACE Headless
force acex_headless_delay = 15;
force acex_headless_enabled = false;
force acex_headless_endMission = 2;
force acex_headless_log = false;
force acex_headless_transferLoadout = 0;
'@

Set-Content "$d\ACE Hearing.sqf" -Encoding UTF8 -Value @'
// ACE Hearing
force force ace_hearing_autoAddEarplugsToUnits = 0;
ace_hearing_disableEarRinging = true;
force force ace_hearing_earplugsVolume = 0.5;
force force ace_hearing_enableCombatDeafness = false;
force force ace_hearing_enabledForZeusUnits = false;
force force ace_hearing_enableNoiseDucking = false;
force force ace_hearing_explosionDeafnessCoefficient = 1;
force force ace_hearing_unconsciousnessVolume = 0.4;
'@

Set-Content "$d\ACE Interaction.sqf" -Encoding UTF8 -Value @'
// ACE Interaction
force force ace_interaction_disableNegativeRating = true;
force force ace_interaction_enableAnimActions = true;
force force ace_interaction_enableGroupRenaming = true;
force force ace_interaction_enableMagazinePassing = true;
force force ace_interaction_enableTeamManagement = true;
force force ace_interaction_enableThrowablePassing = true;
ace_interaction_enableWeaponAttachments = true;
force force ace_interaction_interactWithEnemyCrew = 0;
force force ace_interaction_interactWithTerrainObjects = false;
force force ace_interaction_remoteTeamManagement = true;
'@

Set-Content "$d\ACE Interaction Menu.sqf" -Encoding UTF8 -Value @'
// ACE Interaction Menu
ace_gestures_showOnInteractionMenu = 2;
ace_interact_menu_actionOnKeyRelease = true;
force force ace_interact_menu_addBuildingActions = false;
ace_interact_menu_alwaysUseCursorInteraction = true;
ace_interact_menu_alwaysUseCursorSelfInteraction = true;
ace_interact_menu_colorShadowMax = [0,0,0,1];
ace_interact_menu_colorShadowMin = [0,0,0,0.25];
ace_interact_menu_colorTextMax = [1,1,1,1];
ace_interact_menu_colorTextMin = [1,1,1,0.25];
ace_interact_menu_consolidateSingleChild = false;
ace_interact_menu_cursorKeepCentered = false;
ace_interact_menu_cursorKeepCenteredSelfInteraction = false;
ace_interact_menu_menuAnimationSpeed = 0;
ace_interact_menu_menuBackground = 1;
ace_interact_menu_menuBackgroundSelf = 1;
ace_interact_menu_selectorColor = [1,0,0];
ace_interact_menu_shadowSetting = 2;
ace_interact_menu_textSize = 2;
ace_interact_menu_useListMenu = true;
ace_interact_menu_useListMenuSelf = true;
'@

Set-Content "$d\ACE Kill Tracker.sqf" -Encoding UTF8 -Value @'
// ACE Kill Tracker
force force ace_killtracker_showCrewKills = true;
force force ace_killtracker_showMedicalWounds = 2;
force force ace_killtracker_trackAI = true;
'@

Set-Content "$d\ACE Logistics.sqf" -Encoding UTF8 -Value @'
// ACE Logistics
ace_cargo_carryAfterUnload = true;
force force ace_cargo_checkSizeInteraction = true;
force force ace_cargo_enable = true;
force force ace_cargo_enableDeploy = true;
force force ace_cargo_enableRename = true;
force force ace_cargo_loadTimeCoefficient = 5;
ace_cargo_openAfterUnload = 0;
force force ace_cargo_paradropTimeCoefficent = 2.5;
force force ace_cargo_unloadOnKilled = 1;
force force ace_rearm_distance = 20;
force force ace_rearm_enabled = true;
force ace_rearm_level = 1;
force ace_rearm_supply = 0;
force ace_refuel_cargoRate = 8;
force force ace_refuel_enabled = true;
force ace_refuel_hoseLength = 25;
force force ace_refuel_progressDuration = 2;
force ace_refuel_rate = 8;
force force ace_towing_addRopeToVehicleInventory = true;
'@

Set-Content "$d\ACE Magazine Repack.sqf" -Encoding UTF8 -Value @'
// ACE Magazine Repack
force force ace_magazinerepack_repackAnimation = true;
ace_magazinerepack_repackLoadedMagazines = false;
force force ace_magazinerepack_timePerAmmo = 1.5;
force force ace_magazinerepack_timePerBeltLink = 8;
force force ace_magazinerepack_timePerMagazine = 2;
'@

Set-Content "$d\ACE Map.sqf" -Encoding UTF8 -Value @'
// ACE Map
force force ace_map_BFT_Enabled = false;
force force ace_map_BFT_HideAiGroups = true;
force force ace_map_BFT_Interval = 1;
force force ace_map_BFT_ShowPlayerNames = false;
force force ace_map_DefaultChannel = 1;
force force ace_map_mapGlow = true;
force force ace_map_mapIllumination = true;
force force ace_map_mapLimitZoom = false;
force force ace_map_mapShake = true;
force force ace_map_mapShowCursorCoordinates = false;
force force ace_markers_moveRestriction = 0;
force force ace_markers_timestampEnabled = true;
force force ace_markers_timestampFormat = "HH:MM";
force force ace_markers_timestampHourFormat = 24;
force force ace_markers_timestampTimezone = 0;
force force ace_markers_TimestampUTCMinutesOffset = 0;
force force ace_markers_timestampUTCOffset = 0;
'@

Set-Content "$d\ACE Map Gestures.sqf" -Encoding UTF8 -Value @'
// ACE Map Gestures
force force ace_map_gestures_allowCurator = true;
force force ace_map_gestures_allowSpectator = true;
force force ace_map_gestures_briefingMode = 0;
ace_map_gestures_defaultColor = [1,0.88,0,0.7];
ace_map_gestures_defaultLeadColor = [1,0.88,0,0.95];
force force ace_map_gestures_enabled = true;
force force ace_map_gestures_interval = 0.03;
force force ace_map_gestures_maxRange = 7;
force force ace_map_gestures_maxRangeCamera = 14;
ace_map_gestures_nameTextColor = [0.2,0.2,0.2,0.3];
force force ace_map_gestures_onlyShowFriendlys = true;
'@

Set-Content "$d\ACE Map Tools.sqf" -Encoding UTF8 -Value @'
// ACE Map Tools
force force ace_maptools_drawStraightLines = true;
force force ace_maptools_plottingBoardAllowChannelDrawing = 1;
ace_maptools_rotateModifierKey = 1;
'@

Set-Content "$d\ACE Medical.sqf" -Encoding UTF8 -Value @'
// ACE Medical
force force ace_medical_ai_enabledFor = 2;
force ace_medical_ai_requireItems = 0;
force ace_medical_AIDamageThreshold = 1;
force ace_medical_alternateArmorPenetration = true;
force force ace_medical_bleedingCoefficient = 0.3;
force force ace_medical_blood_bloodLifetime = 900;
force force ace_medical_blood_enabledFor = 2;
force force ace_medical_blood_maxBloodObjects = 300;
force force ace_medical_deathChance = 1;
force force ace_medical_dropWeaponUnconsciousChance = 0;
force force ace_medical_enableVehicleCrashes = true;
force force ace_medical_fatalDamageSource = 0;
force force ace_medical_fractureChance = 0;
force force ace_medical_fractures = 0;
force force ace_medical_ivFlowRate = 1;
force force ace_medical_limbDamageThreshold = 5;
force force ace_medical_limping = 1;
force force ace_medical_painCoefficient = 1;
force force ace_medical_painUnconsciousChance = 0.1;
force force ace_medical_painUnconsciousThreshold = 0.5;
force force ace_medical_playerDamageThreshold = 2;
force force ace_medical_spontaneousWakeUpChance = 0.5;
force force ace_medical_spontaneousWakeUpEpinephrineBoost = 1.5;
force force ace_medical_statemachine_AIUnconsciousness = false;
force force ace_medical_statemachine_cardiacArrestBleedoutEnabled = false;
force ace_medical_statemachine_cardiacArrestTime = 720;
force force ace_medical_statemachine_fatalInjuriesAI = 0;
force force ace_medical_statemachine_fatalInjuriesPlayer = 2;
force force ace_medical_useLimbDamage = 0;
force force ace_medical_vitals_simulateSpO2 = false;
'@

Set-Content "$d\ACE Medical Interface.sqf" -Encoding UTF8 -Value @'
// ACE Medical Interface
force force ace_medical_feedback_bloodVolumeEffectType = 0;
force force ace_medical_feedback_enableHUDIndicators = false;
ace_medical_feedback_painEffectType = 1;
ace_medical_gui_bloodLossColor_0 = [0,0,0,1];
ace_medical_gui_bloodLossColor_1 = [1,0.95,0.64,1];
ace_medical_gui_bloodLossColor_2 = [1,0.87,0.46,1];
ace_medical_gui_bloodLossColor_3 = [1,0.8,0.33,1];
ace_medical_gui_bloodLossColor_4 = [1,0.72,0.24,1];
ace_medical_gui_bloodLossColor_5 = [1,0.63,0.15,1];
ace_medical_gui_bloodLossColor_6 = [1,0.54,0.08,1];
ace_medical_gui_bloodLossColor_7 = [1,0.43,0.02,1];
ace_medical_gui_bloodLossColor_8 = [1,0.3,0,1];
ace_medical_gui_bloodLossColor_9 = [1,0,0,1];
ace_medical_gui_bodyPartOutlineColor = [1,1,1,1];
ace_medical_gui_damageColor_0 = [0,0,0,1];
ace_medical_gui_damageColor_1 = [0.75,0.95,1,1];
ace_medical_gui_damageColor_2 = [0.62,0.86,1,1];
ace_medical_gui_damageColor_3 = [0.54,0.77,1,1];
ace_medical_gui_damageColor_4 = [0.48,0.67,1,1];
ace_medical_gui_damageColor_5 = [0.42,0.57,1,1];
ace_medical_gui_damageColor_6 = [0.37,0.47,1,1];
ace_medical_gui_damageColor_7 = [0.31,0.36,1,1];
ace_medical_gui_damageColor_8 = [0.22,0.23,1,1];
ace_medical_gui_damageColor_9 = [0,0,1,1];
ace_medical_gui_enableActions = 0;
force force ace_medical_gui_enableMedicalMenu = 1;
ace_medical_gui_enableSelfActions = true;
force force ace_medical_gui_interactionMenuShowTriage = 1;
force force ace_medical_gui_maxDistance = 3;
ace_medical_gui_openAfterTreatment = true;
ace_medical_gui_peekMedicalInfoReleaseDelay = 1;
ace_medical_gui_peekMedicalOnHit = false;
ace_medical_gui_peekMedicalOnHitDuration = 1;
force force ace_medical_gui_showBleeding = 2;
force force ace_medical_gui_showBloodlossEntry = true;
force force ace_medical_gui_showDamageEntry = false;
force force ace_medical_gui_tourniquetWarning = false;
'@

Set-Content "$d\ACE Medical Treatment.sqf" -Encoding UTF8 -Value @'
// ACE Medical Treatment
force force ace_medical_treatment_advancedBandages = 2;
force force ace_medical_treatment_advancedDiagnose = 3;
force force ace_medical_treatment_advancedMedication = true;
force force ace_medical_treatment_allowBodyBagUnconscious = false;
force force ace_medical_treatment_allowGraveDigging = 1;
force force ace_medical_treatment_allowLitterCreation = true;
force force ace_medical_treatment_allowSelfIV = 1;
force force ace_medical_treatment_allowSelfPAK = 0;
force ace_medical_treatment_allowSelfStitch = 0;
force force ace_medical_treatment_allowSharedEquipment = 3;
force force ace_medical_treatment_bandageEffectiveness = 1;
force force ace_medical_treatment_bandageRollover = true;
force force ace_medical_treatment_clearTrauma = 1;
force ace_medical_treatment_consumePAK = 1;
force ace_medical_treatment_consumeSurgicalKit = 2;
force force ace_medical_treatment_convertItems = 0;
force force ace_medical_treatment_cprSuccessChanceMax = 0.35;
force force ace_medical_treatment_cprSuccessChanceMin = 0.15;
force force ace_medical_treatment_graveDiggingMarker = true;
force force ace_medical_treatment_holsterRequired = 0;
force force ace_medical_treatment_litterCleanupDelay = 900;
force force ace_medical_treatment_locationAdenosine = 0;
force force ace_medical_treatment_locationEpinephrine = 0;
force force ace_medical_treatment_locationIV = 0;
force force ace_medical_treatment_locationMorphine = 0;
force ace_medical_treatment_locationPAK = 0;
force ace_medical_treatment_locationsBoostTraining = false;
force force ace_medical_treatment_locationSplint = 0;
force ace_medical_treatment_locationSurgicalKit = 0;
force force ace_medical_treatment_maxLitterObjects = 300;
force force ace_medical_treatment_medicAdenosine = 1;
force force ace_medical_treatment_medicEpinephrine = 1;
force force ace_medical_treatment_medicIV = 1;
force force ace_medical_treatment_medicMorphine = 1;
force force ace_medical_treatment_medicPAK = 2;
force force ace_medical_treatment_medicSplint = 1;
force force ace_medical_treatment_medicSurgicalKit = 1;
force force ace_medical_treatment_numericalPulse = 1;
force force ace_medical_treatment_timeCoefficientPAK = 2;
force force ace_medical_treatment_treatmentTimeAutoinjector = 5;
force force ace_medical_treatment_treatmentTimeBodyBag = 15;
ace_medical_treatment_treatmentTimeCoeffZeus = 10;
force force ace_medical_treatment_treatmentTimeCPR = 10;
force force ace_medical_treatment_treatmentTimeGrave = 30;
force force ace_medical_treatment_treatmentTimeIV = 12;
force force ace_medical_treatment_treatmentTimeSplint = 7;
force force ace_medical_treatment_treatmentTimeTourniquet = 4;
force force ace_medical_treatment_treatmentTimeTrainedAutoinjector = 4;
force force ace_medical_treatment_treatmentTimeTrainedIV = 10;
force force ace_medical_treatment_treatmentTimeTrainedSplint = 6;
force force ace_medical_treatment_treatmentTimeTrainedTourniquet = 3;
force force ace_medical_treatment_woundReopenChance = 1;
force force ace_medical_treatment_woundStitchTime = 5;
'@

Set-Content "$d\ACE Name Tags.sqf" -Encoding UTF8 -Value @'
// ACE Name Tags
force force ace_nametags_ambientBrightnessAffectViewDist = 0.5;
ace_nametags_defaultNametagColor = [0.77,0.51,0.08,1];
ace_nametags_nametagColorBlue = [0,0,1,1];
ace_nametags_nametagColorGreen = [0,1,0,1];
ace_nametags_nametagColorMain = [1,1,1,1];
ace_nametags_nametagColorRed = [1,0,0,1];
ace_nametags_nametagColorYellow = [1,1,0,1];
force force ace_nametags_playerNamesMaxAlpha = 0.8;
force force ace_nametags_playerNamesViewDistance = 8;
force force ace_nametags_showCursorTagForVehicles = false;
ace_nametags_showNamesForAI = true;
ace_nametags_showPlayerNames = 1;
ace_nametags_showPlayerRanks = true;
ace_nametags_showSoundWaves = 1;
force force ace_nametags_showVehicleCrewInfo = false;
ace_nametags_tagSize = 2;
'@

Set-Content "$d\ACE Nightvision.sqf" -Encoding UTF8 -Value @'
// ACE Nightvision
force ace_nightvision_aimDownSightsBlur = 0.2;
force force ace_nightvision_disableNVGsWithSights = false;
force ace_nightvision_effectScaling = 0.3;
force ace_nightvision_fogScaling = 0.1;
force ace_nightvision_noiseScaling = 0.15;
force force ace_nightvision_shutterEffects = true;
'@

Set-Content "$d\ACE Overheating.sqf" -Encoding UTF8 -Value @'
// ACE Overheating
force force ace_overheating_cookoffCoef = 4;
force force ace_overheating_coolingCoef = 1;
force force ace_overheating_displayTextOnJam = true;
force force ace_overheating_enabled = true;
force force ace_overheating_heatCoef = 1;
force force ace_overheating_jamChanceCoef = 1;
force force ace_overheating_overheatingDispersion = true;
force force ace_overheating_overheatingRateOfFire = true;
force force ace_overheating_particleEffectsAndDispersionDistance = 300;
force force ace_overheating_showParticleEffects = true;
force force ace_overheating_showParticleEffectsForEveryone = true;
force force ace_overheating_suppressorCoef = 1;
force force ace_overheating_unJamFailChance = 0.1;
force force ace_overheating_unJamOnreload = false;
force force ace_overheating_unJamOnSwapBarrel = false;
'@

Set-Content "$d\ACE Pointing.sqf" -Encoding UTF8 -Value @'
// ACE Pointing
force force ace_finger_enabled = true;
ace_finger_indicatorColor = [0.83,0.68,0.21,0.75];
force force ace_finger_indicatorForSelf = true;
force force ace_finger_maxRange = 10;
force force ace_finger_proximityScaling = false;
force force ace_finger_sizeCoef = 1;
'@

Set-Content "$d\ACE Pylons.sqf" -Encoding UTF8 -Value @'
// ACE Pylons
force force ace_pylons_enabledForZeus = true;
force ace_pylons_enabledFromAmmoTrucks = true;
force ace_pylons_rearmNewPylons = false;
force ace_pylons_requireEngineer = false;
force ace_pylons_requireToolkit = true;
force ace_pylons_searchDistance = 20;
force ace_pylons_timePerPylon = 10;
'@

Set-Content "$d\ACE Quick Mount.sqf" -Encoding UTF8 -Value @'
// ACE Quick Mount
force force ace_quickmount_distance = 3;
force force ace_quickmount_enabled = true;
force force ace_quickmount_enableMenu = 3;
force force ace_quickmount_priority = 3;
force force ace_quickmount_speed = 14;
'@

Set-Content "$d\ACE Repair.sqf" -Encoding UTF8 -Value @'
// ACE Repair
force force ace_repair_addSpareParts = true;
force force ace_repair_autoShutOffEngineWhenStartingRepair = true;
force force ace_repair_consumeItem_toolKit = 0;
force force ace_repair_displayTextOnRepair = true;
force force ace_repair_enabled = true;
force ace_repair_engineerSetting_fullRepair = 1;
force ace_repair_engineerSetting_repair = 1;
force ace_repair_engineerSetting_wheel = 0;
force ace_repair_fullRepairLocation = 3;
force ace_repair_fullRepairRequiredItems = ["ace_repair_anyToolKit"];
force ace_repair_locationsBoostTraining = false;
force ace_repair_miscRepairRequiredItems = ["ace_repair_anyToolKit"];
force force ace_repair_miscRepairTime = 15;
force ace_repair_patchWheelEnabled = 0;
force ace_repair_patchWheelLocation = ["ground","vehicle"];
force ace_repair_patchWheelMaximumRepair = 0.3;
force ace_repair_patchWheelRequiredItems = ["ace_repair_anyToolKit"];
force force ace_repair_patchWheelTime = 5;
force ace_repair_repairDamageThreshold = 0.6;
force ace_repair_repairDamageThreshold_engineer = 0.4;
force force ace_repair_timeCoefficientFullRepair = 1.5;
force force ace_repair_wheelChangeTime = 10;
force ace_repair_wheelRepairRequiredItems = [];
'@

Set-Content "$d\ACE Respawn.sqf" -Encoding UTF8 -Value @'
// ACE Respawn
force force ace_respawn_removeDeadBodiesDisconnected = true;
force force ace_respawn_savePreDeathGear = false;
'@

Set-Content "$d\ACE Scopes.sqf" -Encoding UTF8 -Value @'
// ACE Scopes
force force ace_scopes_correctZeroing = true;
force force ace_scopes_deduceBarometricPressureFromTerrainAltitude = false;
force force ace_scopes_defaultZeroRange = 100;
force force ace_scopes_enabled = true;
force force ace_scopes_forceUseOfAdjustmentTurrets = false;
ace_scopes_inScopeAdjustment = true;
force force ace_scopes_overwriteZeroRange = false;
force force ace_scopes_simplifiedZeroing = false;
ace_scopes_useLegacyUI = false;
force force ace_scopes_zeroReferenceBarometricPressure = 1013.25;
force force ace_scopes_zeroReferenceHumidity = 0;
force force ace_scopes_zeroReferenceTemperature = 15;
'@

Set-Content "$d\ACE Sitting.sqf" -Encoding UTF8 -Value @'
// ACE Sitting
force force acex_sitting_enable = true;
'@

Set-Content "$d\ACE Spectator.sqf" -Encoding UTF8 -Value @'
// ACE Spectator
force force ace_spectator_enableAI = true;
ace_spectator_maxFollowDistance = 5;
force force ace_spectator_restrictModes = 0;
force force ace_spectator_restrictVisions = 0;
'@

Set-Content "$d\ACE Switch Units.sqf" -Encoding UTF8 -Value @'
// ACE Switch Units
force force ace_switchunits_enableSafeZone = false;
force force ace_switchunits_enableSwitchUnits = false;
force force ace_switchunits_safeZoneRadius = 100;
force force ace_switchunits_switchToCivilian = false;
force force ace_switchunits_switchToEast = false;
force force ace_switchunits_switchToIndependent = false;
force force ace_switchunits_switchToWest = false;
'@

Set-Content "$d\ACE Trenches.sqf" -Encoding UTF8 -Value @'
// ACE Trenches
force force ace_trenches_bigEnvelopeDigDuration = 25;
force force ace_trenches_bigEnvelopeRemoveDuration = 15;
force force ace_trenches_smallEnvelopeDigDuration = 20;
force force ace_trenches_smallEnvelopeRemoveDuration = 12;
'@

Set-Content "$d\ACE Uncategorized.sqf" -Encoding UTF8 -Value @'
// ACE Uncategorized
force ace_fastroping_autoAddFRIES = true;
force ace_fastroping_requireRopeItems = false;
force force ace_flags_enableCarrying = true;
force force ace_flags_enablePlacing = true;
force ace_gunbag_swapGunbagEnabled = true;
force force ace_hitreactions_minDamageToTrigger = -1;
force force ace_hitreactions_weaponDropChanceArmHitAI = 0;
force force ace_hitreactions_weaponDropChanceArmHitPlayer = 0;
ace_inventory_inventoryDisplaySize = 0;
force force ace_laser_dispersionCount = 2;
force force ace_laser_showLaserOnMap = 0;
force force ace_marker_flags_placeAnywhere = true;
force force ace_microdagr_mapDataAvailable = 2;
force force ace_microdagr_waypointPrecision = 3;
force force ace_noradio_enabled = true;
ace_optionsmenu_showNewsOnMainMenu = true;
force force ace_overpressure_backblastDistanceCoefficient = 1;
force force ace_overpressure_overpressureDistanceCoefficient = 1;
force ace_parachute_failureChance = 0.01;
force force ace_parachute_hideAltimeter = true;
ace_tagging_quickTag = 1;
'@

Set-Content "$d\ACE User Interface.sqf" -Encoding UTF8 -Value @'
// ACE User Interface
force force ace_ui_allowSelectiveUI = true;
force force ace_ui_ammoCount = false;
ace_ui_ammoType = true;
ace_ui_commandMenu = true;
force force ace_ui_enableSpeedIndicator = false;
ace_ui_firingMode = true;
force force ace_ui_groupBar = false;
ace_ui_gunnerAmmoCount = true;
ace_ui_gunnerAmmoType = true;
ace_ui_gunnerFiringMode = true;
ace_ui_gunnerLaunchableCount = true;
ace_ui_gunnerLaunchableName = true;
ace_ui_gunnerMagCount = true;
ace_ui_gunnerWeaponLowerInfoBackground = true;
ace_ui_gunnerWeaponName = true;
ace_ui_gunnerWeaponNameBackground = true;
ace_ui_gunnerZeroing = true;
ace_ui_hideDefaultActionIcon = false;
ace_ui_magCount = true;
ace_ui_soldierVehicleWeaponInfo = true;
ace_ui_staminaBar = true;
ace_ui_stance = true;
ace_ui_throwableCount = true;
ace_ui_throwableName = true;
ace_ui_vehicleAltitude = true;
ace_ui_vehicleCompass = true;
ace_ui_vehicleDamage = true;
ace_ui_vehicleFuelBar = true;
ace_ui_vehicleInfoBackground = true;
ace_ui_vehicleName = true;
ace_ui_vehicleNameBackground = true;
ace_ui_vehicleRadar = true;
ace_ui_vehicleSpeed = true;
ace_ui_weaponLowerInfoBackground = true;
ace_ui_weaponName = true;
ace_ui_weaponNameBackground = true;
ace_ui_zeroing = true;
'@

Set-Content "$d\ACE Vehicle Lock.sqf" -Encoding UTF8 -Value @'
// ACE Vehicle Lock
force force ace_vehiclelock_defaultLockpickStrength = 10;
force force ace_vehiclelock_lockVehicleInventory = true;
force force ace_vehiclelock_vehicleStartingLockState = -1;
'@

Set-Content "$d\ACE Vehicles.sqf" -Encoding UTF8 -Value @'
// ACE Vehicles
force force ace_novehicleclanlogo_enabled = false;
ace_vehicles_hideEjectAction = true;
force force ace_vehicles_keepEngineRunning = true;
ace_vehicles_speedLimiterStep = 5;
force force ace_viewports_enabled = true;
'@

Set-Content "$d\ACE View Distance Limiter.sqf" -Encoding UTF8 -Value @'
// ACE View Distance Limiter
force force ace_viewdistance_enabled = true;
force ace_viewdistance_limitViewDistance = 10000;
ace_viewdistance_objectViewDistanceCoeff = 0;
ace_viewdistance_viewDistanceAirVehicle = 10000;
ace_viewdistance_viewDistanceLandVehicle = 6000;
ace_viewdistance_viewDistanceOnFoot = 3000;
'@

Set-Content "$d\ACE View Restriction.sqf" -Encoding UTF8 -Value @'
// ACE View Restriction
force force acex_viewrestriction_mode = 1;
force force acex_viewrestriction_modeSelectiveAir = 1;
force force acex_viewrestriction_modeSelectiveFoot = 1;
force force acex_viewrestriction_modeSelectiveLand = 1;
force force acex_viewrestriction_modeSelectiveSea = 1;
force force acex_viewrestriction_preserveView = false;
'@

Set-Content "$d\ACE Volume.sqf" -Encoding UTF8 -Value @'
// ACE Volume
acex_volume_enabled = true;
acex_volume_fadeDelay = 1;
acex_volume_lowerInVehicles = true;
acex_volume_reduction = 5;
acex_volume_remindIfLowered = false;
acex_volume_showNotification = true;
'@

Set-Content "$d\ACE Wardrobe.sqf" -Encoding UTF8 -Value @'
// ACE Wardrobe
ace_wardrobe_enableAction = true;
'@

Set-Content "$d\ACE Weapons.sqf" -Encoding UTF8 -Value @'
// ACE Weapons
force force ace_common_persistentLaserEnabled = true;
ace_reload_displayText = true;
ace_reload_showCheckAmmoSelf = false;
ace_reloadlaunchers_displayStatusText = true;
ace_weaponselect_displayText = true;
'@

Set-Content "$d\ACE Weather.sqf" -Encoding UTF8 -Value @'
// ACE Weather
force ace_weather_enabled = false;
force force ace_weather_showCheckAirTemperature = true;
force force ace_weather_updateInterval = 60;
force force ace_weather_windSimulation = false;
'@

Set-Content "$d\ACE Wind Deflection.sqf" -Encoding UTF8 -Value @'
// ACE Wind Deflection
force force ace_winddeflection_enabled = true;
force force ace_winddeflection_simulationInterval = 0.05;
force force ace_winddeflection_vehicleEnabled = true;
'@

Set-Content "$d\ACE Zeus.sqf" -Encoding UTF8 -Value @'
// ACE Zeus
force force ace_zeus_autoAddObjects = true;
force force ace_zeus_canCreateZeus = 0;
force force ace_zeus_radioOrdnance = false;
force force ace_zeus_remoteWind = false;
force force ace_zeus_revealMines = 0;
force force ace_zeus_zeusAscension = false;
force force ace_zeus_zeusBird = false;
'@

Set-Content "$d\Achilles - Available Factions.sqf" -Encoding UTF8 -Value @'
// Achilles - Available Factions
Achilles_var_BLU_CTRG_F = true;
Achilles_var_BLU_F = true;
Achilles_var_BLU_G_F = true;
Achilles_var_BLU_GEN_F = true;
Achilles_var_BLU_T_F = true;
Achilles_var_BLU_W_F = true;
Achilles_var_BWA3_Faction_Fleck = true;
Achilles_var_BWA3_Faction_Multi = true;
Achilles_var_BWA3_Faction_Tropen = true;
Achilles_var_CFP_B_AFARMY = true;
Achilles_var_CFP_B_AFGPOLICE = true;
Achilles_var_CFP_B_CAF = true;
Achilles_var_CFP_B_CDF_SNW = true;
Achilles_var_CFP_B_CZARMY_WDL = true;
Achilles_var_CFP_B_DEARMY_WDL = true;
Achilles_var_CFP_B_GBARMY_WDL = true;
Achilles_var_CFP_B_ILIDF = true;
Achilles_var_CFP_B_IQARMY = true;
Achilles_var_CFP_B_IQPOLICE = true;
Achilles_var_CFP_B_KEARMY = true;
Achilles_var_CFP_B_MLARMY = true;
Achilles_var_CFP_B_NAARMY = true;
Achilles_var_CFP_B_PESH = true;
Achilles_var_CFP_B_UGARMY = true;
Achilles_var_CFP_B_USARMY_1991_DES = true;
Achilles_var_CFP_B_USARMY_1991_WDL = true;
Achilles_var_CFP_B_USARMY_2003_DES = true;
Achilles_var_CFP_B_USARMY_2003_WDL = true;
Achilles_var_CFP_B_USARMY_WDL = true;
Achilles_var_CFP_B_USCIA = true;
Achilles_var_CFP_B_USMC_DES = true;
Achilles_var_CFP_B_USRANGERS_WDL = true;
Achilles_var_CFP_B_USSEALS_DES = true;
Achilles_var_CFP_B_USSEALS_WDL = true;
Achilles_var_CFP_B_YPG = true;
Achilles_var_CFP_C_AFG = true;
Achilles_var_CFP_C_AFRCHRISTIAN = true;
Achilles_var_CFP_C_AFRISLAMIC = true;
Achilles_var_CFP_C_ASIA = true;
Achilles_var_CFP_C_CHERNO_WIN = true;
Achilles_var_CFP_C_MALDEN = true;
Achilles_var_CFP_C_ME = true;
Achilles_var_CFP_I_ALNUSRA = true;
Achilles_var_CFP_I_IS = true;
Achilles_var_CFP_I_SDRebels = true;
Achilles_var_CFP_I_SDRebelsrf = true;
Achilles_var_CFP_I_SSArmy = true;
Achilles_var_CFP_I_TUAREG = true;
Achilles_var_CFP_I_WAGNER = true;
Achilles_var_CFP_I_WAGNER_WDL = true;
Achilles_var_CFP_I_WAGNER_WIN = true;
Achilles_var_CFP_I_WestUltra = true;
Achilles_var_CFP_O_ABUSAYYAF = true;
Achilles_var_CFP_O_ALQAEDA = true;
Achilles_var_CFP_O_ALSHABAAB = true;
Achilles_var_CFP_O_ANSARALLAH = true;
Achilles_var_CFP_O_BOKOHARAM = true;
Achilles_var_CFP_O_CFRebels = true;
Achilles_var_CFP_O_CHDKZ_SNW = true;
Achilles_var_CFP_O_HAMAS = true;
Achilles_var_CFP_O_HEZBOLLAH = true;
Achilles_var_CFP_O_IQARMY = true;
Achilles_var_CFP_O_IRARMY = true;
Achilles_var_CFP_O_IS = true;
Achilles_var_CFP_O_NKARMY = true;
Achilles_var_CFP_O_RUARMY_DES = true;
Achilles_var_CFP_O_RUMVD = true;
Achilles_var_CFP_O_SDARMY = true;
Achilles_var_CFP_O_SDMilitia = true;
Achilles_var_CFP_O_SOREBEL = true;
Achilles_var_CFP_O_SSREBELS = true;
Achilles_var_CFP_O_SYARMY = true;
Achilles_var_CFP_O_TBAN = true;
Achilles_var_CFP_O_WAGNER = true;
Achilles_var_CFP_O_WAGNER_WDL = true;
Achilles_var_CFP_O_WAGNER_WIN = true;
Achilles_var_CIV_F = true;
Achilles_var_CIV_F_AFRICA = true;
Achilles_var_CIV_F_ASIA = true;
Achilles_var_CIV_F_EUROPE = true;
Achilles_var_CIV_F_TANOA = true;
Achilles_var_CIV_IDAP_F = true;
Achilles_var_CUP_B_AFU = true;
Achilles_var_CUP_B_CDF = true;
Achilles_var_CUP_B_CZ = true;
Achilles_var_CUP_B_GB = true;
Achilles_var_CUP_B_GER = true;
Achilles_var_CUP_B_HIL = true;
Achilles_var_CUP_B_RNZN = true;
Achilles_var_CUP_B_US = true;
Achilles_var_CUP_B_US_Army = true;
Achilles_var_CUP_B_US_OFP = true;
Achilles_var_CUP_B_USMC = true;
Achilles_var_CUP_C_CHERNARUS = true;
Achilles_var_CUP_C_PHOENIX = true;
Achilles_var_CUP_C_RU = true;
Achilles_var_CUP_C_SAHRANI = true;
Achilles_var_CUP_C_Special = true;
Achilles_var_CUP_C_TK = true;
Achilles_var_CUP_C_UA = true;
Achilles_var_CUP_I_NAPA = true;
Achilles_var_CUP_I_PMC_ION = true;
Achilles_var_CUP_I_RACS = true;
Achilles_var_CUP_I_TK_GUE = true;
Achilles_var_CUP_I_UN = true;
Achilles_var_CUP_O_ChDKZ = true;
Achilles_var_CUP_O_RU = true;
Achilles_var_CUP_O_RUS_M = true;
Achilles_var_CUP_O_SLA = true;
Achilles_var_CUP_O_TK = true;
Achilles_var_CUP_O_TK_MILITIA = true;
Achilles_var_FIR_AWS_ENEMY_F = true;
Achilles_var_FIR_AWS_FRND_F = true;
Achilles_var_Flex_CUP_NOR = true;
Achilles_var_IND_C_F = true;
Achilles_var_IND_E_F = true;
Achilles_var_IND_F = true;
Achilles_var_IND_G_F = true;
Achilles_var_IND_L_F = true;
Achilles_var_Interactive_F = true;
Achilles_var_OPF_F = true;
Achilles_var_OPF_G_F = true;
Achilles_var_OPF_GEN_F = true;
Achilles_var_OPF_R_F = true;
Achilles_var_OPF_T_F = true;
Achilles_var_OPF_V_F = true;
Achilles_var_rsr = true;
Achilles_var_USAF = true;
Achilles_var_Virtual_F = true;
'@

Set-Content "$d\Achilles - Available Modules.sqf" -Encoding UTF8 -Value @'
// Achilles - Available Modules
Achilles_var_Achilles_ACE_ImmersiveHeal_Module = true;
Achilles_var_Achilles_ACE_Injury_Module = true;
Achilles_var_Achilles_Hide_Objects_Module = true;
Achilles_var_Achilles_Module_Arsenal_AddFull = true;
Achilles_var_Achilles_Module_Arsenal_CopyToClipboard = true;
Achilles_var_Achilles_Module_Arsenal_CreateCustom = true;
Achilles_var_Achilles_Module_Arsenal_Paste = true;
Achilles_var_Achilles_Module_Arsenal_Remove = true;
Achilles_var_Achilles_Module_Manage_Advanced_Compositions = true;
force force Achilles_var_Achilles_Module_Player_Set_Frequencies = false;
Achilles_var_Achilles_Module_Spawn_Advanced_Composition = true;
Achilles_var_Achilles_Module_Supply_Drop = true;
Achilles_var_Achilles_Transfer_Ownership_Module = true;
Achilles_var_Ares_Artillery_Fire_Mission_Module = true;
Achilles_var_Ares_Module_Dev_Tools_Create_Mission_SQF = true;
Achilles_var_Ares_Module_Equipment_Flashlight_IR_ON_OFF = true;
Achilles_var_Ares_Module_Equipment_NVD_TACLIGHT_IR = true;
Achilles_var_Ares_Module_Reinforcements_Create_Lz = true;
Achilles_var_Ares_Module_Reinforcements_Create_Rp = true;
Achilles_var_Ares_Module_Reinforcements_Spawn_Units = true;
Achilles_var_Ares_Module_Spawn_Submarine = true;
Achilles_var_Ares_Module_Spawn_Trawler = true;
Achilles_var_Ares_Module_Zeus_Hint = true;
Achilles_var_Ares_Module_Zeus_Switch_Side = true;
Achilles_var_Ares_Module_Zeus_Visibility = true;
'@

Set-Content "$d\Achilles - Curator Vision Modes.sqf" -Encoding UTF8 -Value @'
// Achilles - Curator Vision Modes
achilles_curator_vision_blackhot = false;
achilles_curator_vision_blackhotgreencold = false;
achilles_curator_vision_blackhotredcold = false;
achilles_curator_vision_greenhotcold = false;
achilles_curator_vision_nvg = true;
achilles_curator_vision_redgreen = false;
achilles_curator_vision_redhot = false;
achilles_curator_vision_whitehot = true;
achilles_curator_vision_whitehotredcold = false;
'@

Set-Content "$d\Achilles - Debug.sqf" -Encoding UTF8 -Value @'
// Achilles - Debug
Achilles_Debug_Output_Enabled = false;
'@

Set-Content "$d\Achilles - Module Defaults.sqf" -Encoding UTF8 -Value @'
// Achilles - Module Defaults
Achilles_var_setRadioFrequenciesLR_Default = "50";
Achilles_var_setRadioFrequenciesSR_Default = "150";
'@

Set-Content "$d\Achilles - User Interface.sqf" -Encoding UTF8 -Value @'
// Achilles - User Interface
Achilles_var_iconSelection = "Achilles_var_iconSelection_Ares";
Achilles_var_moduleTreeCollapse = true;
Achilles_var_moduleTreeDLC = true;
Achilles_var_moduleTreeHelmet = false;
Achilles_var_moduleTreeSearchPatch = false;
'@

Set-Content "$d\ACRE2.sqf" -Encoding UTF8 -Value @'
// ACRE2
acre_sys_core_automaticAntennaDirection = false;
acre_sys_core_defaultRadioVolume = 0.8;
force acre_sys_core_fullDuplex = true;
acre_sys_core_godVolume = 1;
force force acre_sys_core_ignoreAntennaDirection = true;
force force acre_sys_core_interference = false;
acre_sys_core_postmixGlobalVolume = 1;
acre_sys_core_premixGlobalVolume = 1;
force force acre_sys_core_revealToAI = 1;
acre_sys_core_spectatorVolume = 1;
force acre_sys_core_terrainLoss = 0.5;
force force acre_sys_core_ts3ChannelName = "LaufendeMission";
force force acre_sys_core_ts3ChannelPassword = "130";
force force acre_sys_core_ts3ChannelSwitch = true;
acre_sys_core_unmuteClients = true;
force acre_sys_radio_defaultRadio = "ACRE_PRC343";
force force acre_sys_signal_signalModel = 3;
'@

Set-Content "$d\ACRE2 Gestures.sqf" -Encoding UTF8 -Value @'
// ACRE2 Gestures
force force acre_sys_gestures_enabled = true;
force force acre_sys_gestures_showConnectorRopes = true;
force force acre_sys_gestures_stopADS = false;
'@

Set-Content "$d\ACRE2 UI.sqf" -Encoding UTF8 -Value @'
// ACRE2 UI
acre_sys_godmode_rxNotification = true;
acre_sys_godmode_rxNotificationColor = [0.8,0.8,0.8,1];
acre_sys_godmode_txNotification = true;
acre_sys_godmode_txNotificationCurrentChatColor = [0.8,0.8,0.8,1];
acre_sys_godmode_txNotificationGroup1Color = [0.8,0.8,0.8,1];
acre_sys_godmode_txNotificationGroup2Color = [0.8,0.8,0.8,1];
acre_sys_godmode_txNotificationGroup3Color = [0.8,0.8,0.8,1];
acre_sys_gui_volumeColorScale = [[1,1,0,0.5],[1,0.83,0,0.5],[1,0.65,0,0.5],[1,0.44,0,0.5],[1,0,0,0.5]];
acre_sys_list_CycleRadiosColor = [0.66,0.05,1,1];
acre_sys_list_DefaultPTTColor = [1,0.8,0,1];
acre_sys_list_HintBackgroundColor = [0,0,0,0.8];
acre_sys_list_HintTextFont = "RobotoCondensed";
acre_sys_list_LanguageColor = [1,0.29,0.16,1];
acre_sys_list_LanguageHintPersist = true;
acre_sys_list_PTT1Color = [1,0.8,0,1];
acre_sys_list_PTT2Color = [1,0.8,0,1];
acre_sys_list_PTT3Color = [1,0.8,0,1];
acre_sys_list_SwitchChannelColor = [0.66,0.05,1,1];
acre_sys_list_ToggleHeadsetColor = [0.66,0.05,1,1];
'@

Set-Content "$d\ACRE2 Zeus.sqf" -Encoding UTF8 -Value @'
// ACRE2 Zeus
force acre_sys_zeus_zeusCanSpectate = true;
force acre_sys_zeus_zeusCommunicateViaCamera = true;
acre_sys_zeus_zeusDefaultVoiceSource = false;
'@

Set-Content "$d\Auto Weapon Lower.sqf" -Encoding UTF8 -Value @'
// Auto Weapon Lower
force force FARE_ANIM_LOWER = true;
force force FARE_ANIM_RAISE = true;
force force FARE_ANIM_SPEEDUP = 1.3;
FARE_CHECK_ADS = true;
FARE_CHECK_HANDGUN = true;
FARE_CHECK_LASER = true;
FARE_CHECK_LEAN = true;
FARE_CHECK_LIGHT = true;
FARE_CHECK_MOVE = true;
FARE_CHECK_NEAR = false;
FARE_CHECK_RELOAD = true;
FARE_CHECK_REST = true;
FARE_CHECK_SHOOT = true;
FARE_CHECK_TACTICAL = true;
FARE_CHECK_WALK = true;
FARE_DELAY_DAYTIME = 0.8;
FARE_DELAY_DEFAULT = 2;
FARE_DELAY_NEAR = 0;
FARE_DELAY_SHOOT = 3;
FARE_DISTANCE_FIRED = 10;
FARE_ENABLED = true;
FARE_STATE_ACE_MENU = true;
FARE_STATE_DAYTIME = true;
FARE_STATE_GEAR = true;
FARE_STATE_MEDICAL = true;
'@

Set-Content "$d\Backpack On Chest.sqf" -Encoding UTF8 -Value @'
// Backpack On Chest
force force bocr_main_disabled = false;
force force bocr_main_walk = true;
'@

Set-Content "$d\Basic Map Sharing - RCO.sqf" -Encoding UTF8 -Value @'
// Basic Map Sharing - RCO
force RCOBMS_directSharingToggle = true;
force RCOBMS_rangedSharingToggle = true;
'@

Set-Content "$d\Blastcore Murr Edition.sqf" -Encoding UTF8 -Value @'
// Blastcore Murr Edition
WarFXPE_BlastWave = 1;
WarFXPE_HeatHaze = true;
WarFXPE_WeatherEffects = true;
'@

Set-Content "$d\Bundeswehr.sqf" -Encoding UTF8 -Value @'
// Bundeswehr
force force BWA3_Leopard_ClocknumbersDir_Commander = false;
force force BWA3_NaviPad_showMembers = false;
force force BWA3_Puma_ClocknumbersDir_Commander = false;
force force BWA3_Puma_ClocknumbersDir_Gunner = false;
'@

Set-Content "$d\Community Base Addons.sqf" -Encoding UTF8 -Value @'
// Community Base Addons
cba_diagnostic_ConsoleIndentType = -1;
force cba_diagnostic_watchInfoRefreshRate = 0.2;
force force cba_disposable_dropUsedLauncher = 2;
force force cba_disposable_replaceDisposableLauncher = true;
cba_events_repetitionMode = 1;
force force cba_network_loadoutValidation = 2;
cba_optics_usePipOptics = true;
force force cba_quicktime_qteShorten = false;
cba_ui_notifyLifetime = 4;
cba_ui_StorePasswords = 1;
'@

Set-Content "$d\Crows Electronic Warfare.sqf" -Encoding UTF8 -Value @'
// Crows Electronic Warfare
force force crowsEW_main_zeus_jam_immune = true;
force force crowsEW_main_zeus_jam_marker_show = true;
force crowsEW_spectrum_defaultClassForJammingSignal = "UGV_01_base_F,UGV_02_Base_F,UAV_01_base_F,UAV_02_base_F,UAV_03_base_F,UAV_04_base_F,UAV_05_Base_F,UAV_06_base_F";
force force crowsEW_spectrum_defaultRangesForJammingSignal = "298,299,301,3002,3003,3004,3005,306";
force force crowsEW_spectrum_minJamSigStrength = -40;
force force crowsEW_spectrum_selfTracking = false;
force force crowsEW_spectrum_spectrumAutoline = true;
force force crowsEW_spectrum_spectrumAutolineColor1 = 2;
force force crowsEW_spectrum_spectrumAutolineColor2 = 7;
force force crowsEW_spectrum_spectrumAutolineColor3 = 8;
force force crowsEW_spectrum_spectrumAutolineColor4 = 5;
force force crowsEW_spectrum_spectrumAutolineLength = 6000;
force force crowsEW_spectrum_spectrumAutolineNoise = 0;
force force crowsEW_spectrum_spectrumEnable = true;
force force crowsEW_spectrum_tfarSideTrack = false;
force crowsEW_spectrum_UAVterminalUserVisibleInSpectrum = true;
'@

Set-Content "$d\cTab.sqf" -Encoding UTF8 -Value @'
// cTab
force force ctab_compass_enable = false;
force force ctab_core_bft_mode = 1;
ctab_core_defMapStyle = "SAT";
force force ctab_core_drawMainMap = false;
force force ctab_core_gridPrecision = 0;
force force ctab_core_helmetcam_mode = 1;
force force ctab_core_microDagrGroupBFT = false;
force force ctab_core_sync_time = 30;
force force ctab_core_uav_mode = 1;
force force ctab_core_useAceMicroDagr = false;
force force ctab_core_useArmaMarker = true;
ctab_core_useMils = false;
force force ctab_irl_connect_enabled = true;
force force ctab_irl_connect_key = "130130";
force force ctab_irl_connect_syncMap = true;
force force ctab_irl_connect_uri = "https://ctab.plan-ops.fr/hub";
'@

Set-Content "$d\DUI - Squad Radar - Indicators.sqf" -Encoding UTF8 -Value @'
// DUI - Squad Radar - Indicators
diwako_dui_indicators_crew_range_enabled = false;
diwako_dui_indicators_fov_scale = false;
diwako_dui_indicators_icon_buddy = true;
diwako_dui_indicators_icon_leader = true;
diwako_dui_indicators_icon_medic = true;
diwako_dui_indicators_range = 20;
diwako_dui_indicators_range_crew = 300;
diwako_dui_indicators_range_scale = false;
diwako_dui_indicators_rangeLimit = 100;
force force diwako_dui_indicators_show = false;
diwako_dui_indicators_size = 1;
diwako_dui_indicators_style = "standard";
diwako_dui_indicators_useACENametagsRange = true;
'@

Set-Content "$d\DUI - Squad Radar - Line Compass.sqf" -Encoding UTF8 -Value @'
// DUI - Squad Radar - Line Compass
diwako_dui_linecompass_ACEFingeringColor = [1,0.66,0,1];
diwako_dui_linecompass_AllowNumericDrawBearing = true;
diwako_dui_linecompass_CompassAvailableShown = true;
diwako_dui_linecompass_compassRange = 35;
diwako_dui_linecompass_compassRangeLimit = 50;
diwako_dui_linecompass_CustomWaypointColor = [0,0,0.87,1];
diwako_dui_linecompass_DefaultIconColor = [0.5,0.87,0.5,1];
diwako_dui_linecompass_DrawBearing = 2;
force force diwako_dui_linecompass_Enabled = false;
diwako_dui_linecompass_enableOcclusion = false;
diwako_dui_linecompass_IconOutline = 0;
diwako_dui_linecompass_occlusionFadeSpeed = 3.5;
diwako_dui_linecompass_showSpeaking = true;
diwako_dui_linecompass_SwapOrder = false;
diwako_dui_linecompass_WaypointColor = [0,0,0.87,1];
'@

Set-Content "$d\DUI - Squad Radar - Main.sqf" -Encoding UTF8 -Value @'
// DUI - Squad Radar - Main
diwako_dui_ace_hide_interaction = true;
diwako_dui_colors = "standard";
diwako_dui_font = "RobotoCondensed";
diwako_dui_icon_style = "standard";
diwako_dui_main_hide_dialog = true;
diwako_dui_main_hide_ui_by_default = false;
diwako_dui_main_squadBlue = [0,0,1,1];
diwako_dui_main_squadGreen = [0,1,0,1];
diwako_dui_main_squadMain = [1,1,1,1];
diwako_dui_main_squadRed = [1,0,0,1];
diwako_dui_main_squadYellow = [1,1,0,1];
diwako_dui_main_trackingColor = [0.93,0.26,0.93,1];
diwako_dui_reset_ui_pos = false;
'@

Set-Content "$d\DUI - Squad Radar - Nametags.sqf" -Encoding UTF8 -Value @'
// DUI - Squad Radar - Nametags
diwako_dui_nametags_customRankStyle = "[[""PRIVATE"",""CORPORAL"",""SERGEANT"",""LIEUTENANT"",""CAPTAIN"",""MAJOR"",""COLONEL""],[""Pvt."",""Cpl."",""Sgt."",""Lt."",""Capt."",""Maj."",""Col.""]]";
diwako_dui_nametags_deadColor = [0.2,0.2,0.2,1];
diwako_dui_nametags_deadRenderDistance = 3.5;
diwako_dui_nametags_drawRank = true;
force force diwako_dui_nametags_enabled = false;
diwako_dui_nametags_enableFOVBoost = true;
diwako_dui_nametags_enableOcclusion = true;
diwako_dui_nametags_fadeInTime = 0.05;
diwako_dui_nametags_fadeOutTime = 0.5;
diwako_dui_nametags_fontGroup = "RobotoCondensedLight";
diwako_dui_nametags_fontGroupNameSize = 8;
diwako_dui_nametags_fontName = "RobotoCondensedBold";
diwako_dui_nametags_fontNameSize = 10;
diwako_dui_nametags_groupColor = [1,1,1,1];
diwako_dui_nametags_groupFontShadow = 1;
diwako_dui_nametags_groupNameOtherGroupColor = [0.6,0.85,0.6,1];
diwako_dui_nametags_nameFontShadow = 1;
diwako_dui_nametags_nameOtherGroupColor = [0.2,1,0,1];
diwako_dui_nametags_rankNameStyle = "default";
diwako_dui_nametags_renderDistance = 40;
diwako_dui_nametags_showUnconAsDead = true;
diwako_dui_nametags_useLIS = true;
diwako_dui_nametags_useSideIsFriendly = true;
'@

Set-Content "$d\DUI - Squad Radar - Radar.sqf" -Encoding UTF8 -Value @'
// DUI - Squad Radar - Radar
diwako_dui_compass_hide_alone_group = false;
diwako_dui_compass_hide_blip_alone_group = false;
diwako_dui_compass_icon_scale = 1;
diwako_dui_compass_opacity = 1;
diwako_dui_compass_style = ["\z\diwako_dui\addons\radar\UI\compass_styles\standard\compass_limited.paa","\z\diwako_dui\addons\radar\UI\compass_styles\standard\compass.paa"];
force force diwako_dui_compassRange = 35;
diwako_dui_compassRefreshrate = 0;
diwako_dui_dir_showMildot = false;
diwako_dui_dir_size = 1.25;
diwako_dui_distanceWarning = 3;
diwako_dui_enable_compass = true;
diwako_dui_enable_compass_dir = 1;
diwako_dui_enable_occlusion = false;
diwako_dui_enable_occlusion_cone = 360;
diwako_dui_hudScaling = 1.33333;
diwako_dui_namelist = true;
diwako_dui_namelist_bg = 0;
diwako_dui_namelist_only_buddy_icon = false;
diwako_dui_namelist_size = 1.5396;
diwako_dui_namelist_text_shadow = 2;
diwako_dui_namelist_width = 215;
diwako_dui_radar_ace_finger = true;
diwako_dui_radar_ace_medic = true;
diwako_dui_radar_always_show_unit_numbers = false;
force force diwako_dui_radar_compassRangeCrew = 500;
force force diwako_dui_radar_compassRangeLimit = 50;
diwako_dui_radar_dir_padding = 25;
diwako_dui_radar_dir_shadow = 2;
diwako_dui_radar_enable_seat_icons = 2;
diwako_dui_radar_group_by_vehicle = false;
diwako_dui_radar_icon_opacity = 1;
diwako_dui_radar_icon_opacity_no_player = true;
diwako_dui_radar_icon_priority_setting = 1;
diwako_dui_radar_icon_scale_crew = 6;
diwako_dui_radar_leadingZeroes = false;
diwako_dui_radar_namelist_hideWhenLeader = false;
diwako_dui_radar_namelist_vertical_spacing = 0.75;
diwako_dui_radar_occlusion_fade_in_time = 1;
diwako_dui_radar_occlusion_fade_time = 10;
diwako_dui_radar_pointer_color = [1,0.5,0,1];
diwako_dui_radar_pointer_style = "standard";
diwako_dui_radar_show_cardinal_points = true;
diwako_dui_radar_showSpeaking = true;
diwako_dui_radar_showSpeaking_radioOnly = false;
diwako_dui_radar_showSpeaking_replaceIcon = true;
diwako_dui_radar_sortType = "none";
diwako_dui_radar_sqlFirst = false;
force force diwako_dui_radar_syncGroup = false;
diwako_dui_radar_vehicleCompassEnabled = false;
diwako_dui_use_layout_editor = false;
'@

Set-Content "$d\dzn MG Tripod.sqf" -Encoding UTF8 -Value @'
// dzn MG Tripod
force force dzn_MG_Tripod_DeployedAimCoef = 0.25;
force force dzn_MG_Tripod_DeployedRecoilCoef = 0.25;
force force dzn_MG_Tripod_Enabled = true;
force force dzn_MG_Tripod_Enabled_CrouchGesture = true;
force force dzn_MG_Tripod_Enabled_ProneGesture = true;
force force dzn_MG_Tripod_Enabled_StandGesture = true;
force force dzn_MG_Tripod_FallbackToUniversal = false;
'@

Set-Content "$d\Enhanced Movement Rework.sqf" -Encoding UTF8 -Value @'
// Enhanced Movement Rework
force force emr_main_allowClimbOnStandingUnits = true;
force force emr_main_allowMidairClimbing = true;
force force emr_main_animSpeedCoef = 1;
force force emr_main_animSpeedStaminaCoef = 0.4;
force force emr_main_assistDuty = 1.5;
force force emr_main_assistHeight = 1;
force force emr_main_climbingEnabled = true;
force force emr_main_climbOnDuty = 3.4;
force force emr_main_climbOverDuty = 3;
force force emr_main_dropDuty = 0.7;
force force emr_main_dropViewElevation = -0.7;
force force emr_main_enableWalkableSurface = true;
force force emr_main_enableWeightCheck = false;
emr_main_hintType = 2;
emr_main_interactBehaviorInVehicle = "DISMOUNT";
force force emr_main_jumpDuty = 1;
force force emr_main_jumpForwardVelocity = 1.2;
force force emr_main_jumpingEnabled = true;
force force emr_main_jumpingLoadCoefficient = 1;
force force emr_main_jumpVelocity = 3.5;
force force emr_main_maxClimbHeight = 2.6;
force force emr_main_maxDropHeight = 6;
force force emr_main_maxWeightClimb1 = 100;
force force emr_main_maxWeightClimb2 = 85;
force force emr_main_maxWeightClimb3 = 60;
force force emr_main_maxWeightJump = 100;
force force emr_main_minClimbTerrain = 0.3;
emr_main_preventHighVaulting = false;
force force emr_main_staminaCoefficient = 1;
force emr_main_whitelistStr = "";
force force emr_main_yeetCoefficient = 1.4;
'@

Set-Content "$d\Fawks Enhanced NVGs.sqf" -Encoding UTF8 -Value @'
// Fawks' Enhanced NVGs
force force PDT_ENVG_ACE = true;
force force PDT_ENVG_Blacklist = "";
PDT_ENVG_Effect = "mwEffect";
'@

Set-Content "$d\FPV Settings.sqf" -Encoding UTF8 -Value @'
// FPV Settings
force FPV_DefaultText = "TTT";
force force FPV_isUavCaptive = false;
force force FPV_MaxFlightDistance = 1500;
'@

Set-Content "$d\GRAD Trenches.sqf" -Encoding UTF8 -Value @'
// GRAD Trenches
force force grad_trenches_functions_allowBigEnvelope = true;
force force grad_trenches_functions_allowCamouflage = true;
force force grad_trenches_functions_allowDigging = true;
force force grad_trenches_functions_allowEffects = true;
force force grad_trenches_functions_allowGiantEnvelope = true;
force force grad_trenches_functions_allowHitDecay = true;
force force grad_trenches_functions_allowLongEnvelope = true;
force force grad_trenches_functions_allowShortEnvelope = true;
force force grad_trenches_functions_allowSmallEnvelope = true;
force force grad_trenches_functions_allowTextureLock = true;
force grad_trenches_functions_allowTrenchDecay = false;
force force grad_trenches_functions_allowVehicleEnvelope = true;
force force grad_trenches_functions_bigEnvelopeDamageMultiplier = 2;
force force grad_trenches_functions_bigEnvelopeDigTime = 120;
force force grad_trenches_functions_bigEnvelopeRemovalTime = 80;
force force grad_trenches_functions_buildFatigueFactor = 0.895;
force force grad_trenches_functions_camouflageRequireEntrenchmentTool = true;
force force grad_trenches_functions_createTrenchMarker = false;
force grad_trenches_functions_decayTime = 1800;
force force grad_trenches_functions_giantEnvelopeDamageMultiplier = 1;
force force grad_trenches_functions_giantEnvelopeDigTime = 150;
force force grad_trenches_functions_giantEnvelopeRemovalTime = 100;
force force grad_trenches_functions_hitDecayMultiplier = 0.3;
force force grad_trenches_functions_LongEnvelopeDigTime = 150;
force force grad_trenches_functions_LongEnvelopeRemovalTime = 100;
force grad_trenches_functions_playersInAreaRadius = 0;
force force grad_trenches_functions_shortEnvelopeDamageMultiplier = 2;
force force grad_trenches_functions_shortEnvelopeDigTime = 90;
force force grad_trenches_functions_shortEnvelopeRemovalTime = 60;
force force grad_trenches_functions_smallEnvelopeDamageMultiplier = 3;
force force grad_trenches_functions_smallEnvelopeDigTime = 90;
force force grad_trenches_functions_smallEnvelopeRemovalTime = 60;
force force grad_trenches_functions_stopBuildingAtFatigueMax = true;
force force grad_trenches_functions_textureLockDistance = 5;
force grad_trenches_functions_timeoutToDecay = 7200;
force force grad_trenches_functions_vehicleEnvelopeDamageMultiplier = 1;
force force grad_trenches_functions_vehicleEnvelopeDigTime = 180;
force force grad_trenches_functions_vehicleEnvelopeRemovalTime = 120;
force force grad_trenches_functions_vehicleTrenchBuildSpeed = 5;
'@

Set-Content "$d\Hatchet Vehicle Framework.sqf" -Encoding UTF8 -Value @'
// Hatchet Vehicle Framework
hct_interaction_autoclose_actionmenu = false;
hct_interaction_cursorColor = [0.6,0.84,0.47,1];
hct_interaction_pointing = true;
hct_interaction_showDebugMessages = false;
hct_interaction_showLabels = 2;
hct_interaction_trackIR_interaction_cursor = false;
hct_interaction_trackIR_interaction_cursor_invert = false;
hct_interaction_trackIR_interaction_cursorSensitivity = 2.5;
hct_interaction_updateEvery = 5;
'@

Set-Content "$d\IEDD Notebook.sqf" -Encoding UTF8 -Value @'
// IEDD Notebook
force force iedd_ied_actMaxRange = 500;
force force iedd_ied_actMinRange = 300;
force force iedd_ied_addDefusalKit = false;
force force iedd_ied_addNotebook = false;
force iedd_ied_defaultColor = "random";
force iedd_ied_defaultDecals = false;
force iedd_ied_defaultDirection = false;
force iedd_ied_defaultDud = 0.2;
force iedd_ied_defaultFake = 0.25;
force force iedd_ied_defaultOpenClose = 0.1;
force force iedd_ied_defaultOpenCloseEOD = 0.01;
force iedd_ied_defaultRandomTimer = 0;
force iedd_ied_defaultSize = 2;
force iedd_ied_defaultTimer = 0;
force iedd_ied_defaultTimerMax = 150;
force iedd_ied_defaultTimerMin = 60;
force iedd_ied_defaultTimerValue = 120;
force iedd_ied_defaultVariation = 6;
force iedd_ied_defaultVarX = 1;
force force iedd_ied_expMaxRange = 20;
force force iedd_ied_expMinRange = 10;
force force iedd_ied_failChance = 0.1;
force force iedd_ied_failChanceEOD = 0.01;
force force iedd_ied_failExploseChance = 0.8;
force force iedd_ied_ignoreWireCutOrder = false;
force iedd_ied_includeZeus = false;
force force iedd_ied_isBlockedRange = false;
force force iedd_ied_isDefusalKit = true;
force force iedd_ied_isDetectable = true;
force force iedd_ied_isDuds = false;
force force iedd_ied_isEod = false;
force force iedd_ied_maxRange = 10;
force force iedd_ied_minRange = 5;
force force iedd_ied_plrCheck = true;
force force iedd_ied_vehCheck = true;
force force iedd_ied_wireCutTime = 10;
force force iedd_ied_wireCutTimeEOD = 5;
'@

Set-Content "$d\IEDD Notebook VBIED.sqf" -Encoding UTF8 -Value @'
// IEDD Notebook VBIED
force iedd_vbied_defaultDud = 0.2;
force iedd_vbied_defaultEngineOn = 0;
force iedd_vbied_defaultGetIn = 0;
force iedd_vbied_defaultMoving = 0;
force iedd_vbied_defaultRandomTimer = 0;
force iedd_vbied_defaultSize = 3;
force iedd_vbied_defaultSpeed = 45;
force iedd_vbied_defaultTimer = 0;
force iedd_vbied_defaultTimerMax = 150;
force iedd_vbied_defaultTimerMin = 60;
force iedd_vbied_defaultTimerValue = 120;
force iedd_vbied_defaultVariation = 5;
force force iedd_vbied_isDetectable = true;
force force iedd_vbied_maxRange = 15;
force force iedd_vbied_minRange = 10;
force force iedd_vbied_plrCheck = true;
force force iedd_vbied_vehCheck = true;
'@

Set-Content "$d\ITC Land.sqf" -Encoding UTF8 -Value @'
// ITC Land
force ITC_LAND_CIWS = true;
'@

Set-Content "$d\KAT Advanced Medical.sqf" -Encoding UTF8 -Value @'
//KAT Advanced Medical
'@

Set-Content "$d\KAT - ADV Medical Airway.sqf" -Encoding UTF8 -Value @'
// KAT - ADV Medical: Airway
force force kat_airway_Accuvac_time = 8;
force force kat_airway_autoTriage = false;
force force kat_airway_block_headTurning_ifAirwayItem = true;
force force kat_airway_CancelRecoveryPosition_Time = 3;
force force kat_airway_CheckAirway_time = 2;
force force kat_airway_enable = true;
force force kat_airway_Guedeltubus_time = 6;
force force kat_airway_HeadTurn_Interval = 3;
force force kat_airway_Hyperextend_Time = 3;
force force kat_airway_Larynxtubus_time = 3;
force force kat_airway_medLvl_Accuvac = 1;
force force kat_airway_medLvl_Guedeltubus = 1;
force force kat_airway_medLvl_Larynxtubus = 1;
force force kat_airway_medLvl_Suction = 1;
force force kat_airway_occlusion_cooldownPeriod = 300;
force force kat_airway_occlusion_repeatTimer = 60;
force force kat_airway_probability_headturning = 50;
force force kat_airway_probability_obstruction = 15;
force force kat_airway_probability_occluded = 10;
force force kat_airway_RecoveryPosition_Time = 6;
force force kat_airway_RecoveryPosition_TimeToDrain = 10;
force force kat_airway_ReusableAirwayItems = false;
force force kat_airway_string_exit = "";
force force kat_airway_Suction_reuse = true;
force force kat_airway_Suction_time = 12;
'@

Set-Content "$d\KAT - ADV Medical Breathing.sqf" -Encoding UTF8 -Value @'
// KAT - ADV Medical: Breathing
force force kat_breathing_advPtxChance = 5;
force force kat_breathing_advPtxEnable = true;
force force kat_breathing_arrestPneumothorax_interval = 30;
force force kat_breathing_availOxyMask = "'kat_mask_solr'";
force force kat_breathing_BVMOxygen_Multiplier = 1;
force force kat_breathing_clearChestSealAfterTreatment = true;
force force kat_breathing_deepPenetratingInjuryChance = 30;
force force kat_breathing_deterioratingPneumothorax_chance = 50;
force force kat_breathing_deterioratingPneumothorax_interval = 60;
force force kat_breathing_enable = true;
force force kat_breathing_enable_selfChestseal = 1;
force force kat_breathing_enableCheckBreathing = true;
force force kat_breathing_Etco2_Enabled = true;
force force kat_breathing_Etco2_Units = 0;
force force kat_breathing_HPTXBleedAmount = 0.06;
force force kat_breathing_hptxChance = 5;
force force kat_breathing_inspectChest_enable = 2;
force force kat_breathing_inspectChest_medLvl = 1;
force force kat_breathing_inspectChest_time = 6;
force force kat_breathing_locationProvideOxygen = 3;
force force kat_breathing_medLvl_BVM = 0;
force force kat_breathing_medLvl_BVM_Oxygen = 0;
force force kat_breathing_medLvl_Chestseal = 0;
force force kat_breathing_medLvl_hemopneumothoraxTreatment = 1;
force force kat_breathing_medLvl_NasalCannula = 1;
force force kat_breathing_medLvl_PocketBVM = 1;
force force kat_breathing_medLvl_Pulseoximeter = 0;
force force kat_breathing_mildValue = 75;
force force kat_breathing_NasalCannula_time = 3;
force force kat_breathing_paco2Active = false;
force force kat_breathing_PneumothoraxAlwaysVisible = true;
force force kat_breathing_PneumothoraxArrest = true;
force force kat_breathing_pneumothoraxChance = 5;
force force kat_breathing_pneumothoraxDamageThreshold = 0.4;
force force kat_breathing_pneumothoraxDamageThreshold_TakenDamage = true;
force force kat_breathing_PortableOxygenTank_RefillTime = 5;
force force kat_breathing_PulseOximeter_SpO2Warning = 85;
force force kat_breathing_severeValue = 66;
force force kat_breathing_showCyanosis = true;
force force kat_breathing_showPneumothorax_dupe = false;
force force kat_breathing_slightValue = 90;
force force kat_breathing_SpO2_cardiacActive = true;
force force kat_breathing_SpO2_cardiacValue = 75;
force force kat_breathing_SpO2_dieActive = true;
force force kat_breathing_SpO2_dieValue = 65;
force force kat_breathing_SpO2_MultiplyNegative = 1;
force force kat_breathing_SpO2_MultiplyPositive = 1;
force force kat_breathing_SpO2_perfusion = true;
force force kat_breathing_SpO2_PerfusionMultiplier = 1;
force force kat_breathing_SpO2_unconscious = 75;
force force kat_breathing_Stable_spo2 = 85;
force force kat_breathing_staminaLossAtLowSPO2 = true;
force force kat_breathing_stethoscopeListeningTime = 15;
force force kat_breathing_stethoscopeSoundVolume = 2;
force force kat_breathing_TensionHemothoraxAlwaysVisible = true;
'@

Set-Content "$d\KAT - ADV Medical Chemical.sqf" -Encoding UTF8 -Value @'
// KAT - ADV Medical: Chemical
force force kat_chemical_availGasmask = "'G_AirPurifyingRespirator_01_F', 'kat_mask_M50', 'kat_mask_M04'";
force force kat_chemical_gasmask_durability = 900;
force force kat_chemical_gasMaskSoundVolume = 1;
force force kat_chemical_infectionTime = 60;
force force kat_chemical_maskStaminaLoss = false;
force force kat_chemical_showPoisoning = true;
force force kat_chemical_tearGasDropChance = 0;
'@

Set-Content "$d\KAT - ADV Medical Circulation.sqf" -Encoding UTF8 -Value @'
// KAT - ADV Medical: Circulation
force force kat_circulation_abgEnable = false;
force force kat_circulation_AdvRhythm = true;
force force kat_circulation_AdvRhythm_AED_ROSC_Chance = 50;
force force kat_circulation_AdvRhythm_asystoleBloodlossThreshold = 3.6;
force force kat_circulation_AdvRhythm_canDeteriorate = true;
force force kat_circulation_AdvRhythm_CPR_ROSC_Chance = 5;
force force kat_circulation_AdvRhythm_deteriorateAfterTreatment = true;
force force kat_circulation_AdvRhythm_deteriorateTimeMax = 900;
force force kat_circulation_AdvRhythm_deteriorateTimeWeight = 180;
force force kat_circulation_AdvRhythm_Hardcore_Enable = false;
force force kat_circulation_AdvRhythm_hardcoreDeteriorationChance = 10;
force force kat_circulation_AdvRhythm_HTHold = true;
force force kat_circulation_AdvRhythm_PEAChance = 50;
force force kat_circulation_AdvRhythm_PEAEnabled = true;
force force kat_circulation_AdvRhythm_VTChance = 50;
force force kat_circulation_AED_duringCpr = false;
force force kat_circulation_AED_MaxChance = 80;
force force kat_circulation_AED_MinChance = 45;
force force kat_circulation_AED_X_MaxChance = 90;
force force kat_circulation_AED_X_MinChance = 50;
force force kat_circulation_AED_X_Monitor_SpO2Warning = 85;
force force kat_circulation_AED_X_VitalsMonitor_BloodPressureInterval = 0;
force force kat_circulation_AED_X_VitalsMonitor_BloodPressureInterval_Time = 30;
force force kat_circulation_AED_X_VitalsMonitor_SoundsSelect = 1;
force force kat_circulation_AEDX_VitalsMonitor_AttachTime = 6;
force force kat_circulation_AEDX_VitalsMonitor_DetachTime = 3;
force force kat_circulation_blood_draw_limit = 3.6;
force force kat_circulation_blood_drawTime_250ml = 25;
force force kat_circulation_blood_drawTime_500ml = 50;
force force kat_circulation_bloodGroups = false;
force force kat_circulation_bloodTypeCustomList = "O,O,A,A,O_N,B,A_N,AB,B_N,AB_N";
force force kat_circulation_bloodTypeRandomWeighted = true;
force force kat_circulation_bloodTypeSetting = 4;
force force kat_circulation_cardiacArrestBleedRate = 0.05;
force force kat_circulation_CPR_ChanceInterval = 15;
force force kat_circulation_CPR_MaxChance_Default = 20;
force force kat_circulation_CPR_MaxChance_Doctor = 40;
force force kat_circulation_CPR_MaxChance_RegularMedic = 30;
force force kat_circulation_CPR_MinChance_Default = 15;
force force kat_circulation_CPR_MinChance_Doctor = 25;
force force kat_circulation_CPR_MinChance_RegularMedic = 20;
force force kat_circulation_Defibrillator_DistanceLimit = 6;
force force kat_circulation_DefibrillatorPads_AttachTime = 6;
force force kat_circulation_DefibrillatorPads_DetachTime = 3;
force force kat_circulation_deterioratingTamponade_chance = 0;
force force kat_circulation_deterioratingTamponade_interval = 60;
force force kat_circulation_enable = true;
force force kat_circulation_enable_CPR_Chances = true;
force force kat_circulation_enable_selfBloodDraw = 1;
force force kat_circulation_hardcoreDiagnose = false;
force force kat_circulation_medLvl_AED = 0;
force force kat_circulation_medLvl_AED_Station_Interact = 0;
force force kat_circulation_medLvl_AED_X = 0;
force force kat_circulation_medLvl_BPCuff = 0;
force force kat_circulation_medLvl_StethHR = 1;
force force kat_circulation_tamponadeChance = 0;
force force kat_circulation_treatmentTime_BPCuff = 12;
force force kat_circulation_treatmentTime_StethHR = 8;
force force kat_circulation_useLocation_AED = 0;
'@

Set-Content "$d\KAM Feedback.sqf" -Encoding UTF8 -Value @'
//KAM Feedback
force force kat_feedback_effectLowSpO2 = 85;
'@

Set-Content "$d\KAM Hypothermia.sqf" -Encoding UTF8 -Value @'
//KAM Hypothermia
force force kat_hypothermia_hypothermiaActive = false;
'@

Set-Content "$d\KAM MISC.sqf" -Encoding UTF8 -Value @'
//KAM MISC
force force kat_misc_AFAK_Container = 0;
force force kat_misc_AFAK_RemoveWhenEmpty = true;
force force kat_misc_AFAKFifthSlotItem = "[]";
force force kat_misc_AFAKFirstSlotItem = "[]";
force force kat_misc_AFAKFourthSlotItem = "[]";
force force kat_misc_AFAKSecondSlotItem = "[]";
force force kat_misc_AFAKSixthSlotItem = "[]";
force force kat_misc_AFAKThirdSlotItem = "[]";
force force kat_misc_allowSharedVehicleEquipment = 4;
force force kat_misc_armbandSlingLeftArm = "[0.2, -0.39, -0.2]";
force force kat_misc_armbandSlingLeftArmRotation = "[240, 33, 26]";
force force kat_misc_armbandSlingLeftLeg = "[0.435, -0.075, -0.38]";
force force kat_misc_armbandSlingLeftLegRotation = "[-160, -5, 45]";
force force kat_misc_armbandSlingRightArm = "[-0.228, -0.1, -0.43]";
force force kat_misc_armbandSlingRightArmRotation = "[5, -5, -5]";
force force kat_misc_armbandSlingRightLeg = "[-0.32, -0.29, -0.42]";
force force kat_misc_armbandSlingRightLegRotation = "[-30, -5, 38]";
force force kat_misc_enable = true;
force force kat_misc_enableStitchFullBody = false;
force force kat_misc_IFAK_Container = 0;
force force kat_misc_IFAK_RemoveWhenEmpty = true;
force force kat_misc_IFAKFirstSlotItem = "[]";
force force kat_misc_IFAKFourthSlotItem = "[]";
force force kat_misc_IFAKSecondSlotItem = "[]";
force force kat_misc_IFAKThirdSlotItem = "[]";
force force kat_misc_incompatibilityWarning = true;
force force kat_misc_MFAK_Container = 0;
force force kat_misc_MFAK_RemoveWhenEmpty = true;
force force kat_misc_MFAKEighthSlotItem = "[]";
force force kat_misc_MFAKFifthSlotItem = "[]";
force force kat_misc_MFAKFirstSlotItem = "[]";
force force kat_misc_MFAKFourthSlotItem = "[]";
force force kat_misc_MFAKSecondSlotItem = "[]";
force force kat_misc_MFAKSeventhSlotItem = "[]";
force force kat_misc_MFAKSixthSlotItem = "[]";
force force kat_misc_MFAKThirdSlotItem = "[]";
force force kat_misc_tourniquetEffects_Enable = true;
force force kat_misc_tourniquetEffects_NegativeMultiplier = 1;
force force kat_misc_tourniquetEffects_PositiveMultiplier = 1;
force force kat_misc_treatmentTimeDetachTourniquet = 7;
'@

Set-Content "$d\KAM Ophtalmology.sqf" -Encoding UTF8 -Value @'
//KAM Ophtalmology
force force kat_ophthalmology_enable = false;
force force kat_ophthalmology_eyeshield_medic_required = 0;
force force kat_ophthalmology_eyeshield_treatment_time = 2;
force force kat_ophthalmology_eyewash_medic_required = 0;
force force kat_ophthalmology_eyewash_treatment_time = 2;
force force kat_ophthalmology_probability_dust = 5;
force force kat_ophthalmology_probability_dust_heavy = 1;
force force kat_ophthalmology_probability_treatment_dust = 20;
'@

Set-Content "$d\KAM Pharmacy.sqf" -Encoding UTF8 -Value @'
//KAM Pharmacy
force force kat_pharma_allowStackScript_EACA = true;
force force kat_pharma_allowStackScript_TXA = true;
force force kat_pharma_bandageCycleTime_EACA = 8;
force force kat_pharma_bandageCycleTime_TXA = 5;
force force kat_pharma_blockChance = 20;
force force kat_pharma_carbonateChance = 100;
force force kat_pharma_CheckCoag_Location = 0;
force force kat_pharma_CheckCoag_MedLevel = 1;
force force kat_pharma_CheckCoag_TreatmentTime = 10;
force force kat_pharma_coagulation = true;
force force kat_pharma_coagulation_allow_clot_text = true;
force force kat_pharma_coagulation_allow_EACA_script = true;
force force kat_pharma_coagulation_allow_LargeWounds = false;
force force kat_pharma_coagulation_allow_MediumWounds = true;
force force kat_pharma_coagulation_allow_MinorWounds = true;
force force kat_pharma_coagulation_allow_TXA_script = true;
force force kat_pharma_coagulation_allowOnAI = false;
force force kat_pharma_coagulation_factor_count = 30;
force force kat_pharma_coagulation_factor_limit = 60;
force force kat_pharma_coagulation_factor_regenerate_time = 150;
force force kat_pharma_coagulation_on_all_Bodyparts = true;
force force kat_pharma_coagulation_requireBV = 3.6;
force force kat_pharma_coagulation_requireHR = true;
force force kat_pharma_coagulation_time = 10;
force force kat_pharma_coagulation_time_large = 45;
force force kat_pharma_coagulation_time_medium = 30;
force force kat_pharma_coagulation_time_minor = 15;
force force kat_pharma_coagulation_tourniquetBlock = true;
force force kat_pharma_eacaClearTrauma = true;
force force kat_pharma_ivCheckLimbDamage = true;
force force kat_pharma_IVdrop = 600;
force force kat_pharma_IVdropEnable = false;
force force kat_pharma_IVflowControl = false;
force force kat_pharma_IVreuse = false;
force force kat_pharma_keepScriptRunning_EACA = true;
force force kat_pharma_keepScriptRunning_TXA = true;
force force kat_pharma_kidneyAction = false;
force force kat_pharma_MedicationsRequireInsIV = true;
force force kat_pharma_medLvl_Amiodarone = 2;
force force kat_pharma_medLvl_ApplyIO = 1;
force force kat_pharma_medLvl_ApplyIV = 1;
force force kat_pharma_medLvl_Atropine = 2;
force force kat_pharma_medLvl_Caffeine = 0;
force force kat_pharma_medLvl_Carbonate = 2;
force force kat_pharma_medLvl_CWMP = 0;
force force kat_pharma_medLvl_EACA = 2;
force force kat_pharma_medLvl_EpinephrineIV = 1;
force force kat_pharma_medLvl_Etomidate = 2;
force force kat_pharma_medLvl_Fentanyl = 1;
force force kat_pharma_medLvl_Flumezenil = 2;
force force kat_pharma_medLvl_Ketamine = 1;
force force kat_pharma_medLvl_Lidocaine = 1;
force force kat_pharma_medLvl_Lorazepam = 2;
force force kat_pharma_medLvl_Nalbuphine = 1;
force force kat_pharma_medLvl_Naloxone = 1;
force force kat_pharma_medLvl_Nitroglycerin = 2;
force force kat_pharma_medLvl_Norepinephrine = 2;
force force kat_pharma_medLvl_Penthrox = 1;
force force kat_pharma_medLvl_Pervitin = 0;
force force kat_pharma_medLvl_Phenylephrine = 2;
force force kat_pharma_medLvl_Reorientation = 0;
force force kat_pharma_medLvl_TXA = 2;
force force kat_pharma_pervitinSpeed = 1.15;
force force kat_pharma_Reorientation_Enable = true;
force force kat_pharma_Reorientation_Slap = true;
force force kat_pharma_reorientationChance = 50;
force force kat_pharma_RequireInsIV = true;
force force kat_pharma_RequireInsIVBloodDraw = true;
force force kat_pharma_staminaMedication = false;
force force kat_pharma_treatmentTime_Amiodarone = 7;
force force kat_pharma_treatmentTime_ApplyIO = 7;
force force kat_pharma_treatmentTime_ApplyIV = 7;
force force kat_pharma_treatmentTime_Atropine = 7;
force force kat_pharma_treatmentTime_Caffeine = 7;
force force kat_pharma_treatmentTime_Carbonate = 7;
force force kat_pharma_treatmentTime_CWMP = 7;
force force kat_pharma_treatmentTime_EACA = 7;
force force kat_pharma_treatmentTime_EpinephrineIV = 7;
force force kat_pharma_treatmentTime_Etomidate = 2;
force force kat_pharma_treatmentTime_Fentanyl = 7;
force force kat_pharma_treatmentTime_Flumazenil = 2;
force force kat_pharma_treatmentTime_Ketamine = 7;
force force kat_pharma_treatmentTime_Lidocaine = 7;
force force kat_pharma_treatmentTime_Lorazepam = 2;
force force kat_pharma_treatmentTime_Nalbuphine = 7;
force force kat_pharma_treatmentTime_Naloxone = 7;
force force kat_pharma_treatmentTime_Nitroglycerin = 7;
force force kat_pharma_treatmentTime_Norepinephrine = 7;
force force kat_pharma_treatmentTime_Penthrox = 8;
force force kat_pharma_treatmentTime_Pervitin = 5;
force force kat_pharma_treatmentTime_Phenylephrine = 7;
force force kat_pharma_treatmentTime_Reorientation = 2;
force force kat_pharma_treatmentTime_TXA = 7;
force force kat_pharma_weapon_sway_pervitin = true;
'@

Set-Content "$d\KAM Surgery.sqf" -Encoding UTF8 -Value @'
//KAM Surgery
force force kat_surgery_closedLocation = 0;
force force kat_surgery_closedReduction_MedLevel = 2;
force force kat_surgery_closedReductionFailChance = 0;
force force kat_surgery_closedTime = 10;
force force kat_surgery_compoundChance = 0;
force force kat_surgery_enable_fracture = false;
force force kat_surgery_enable_selfCheckFracture = 1;
force force kat_surgery_fractureCheck_MedLevel = 2;
force force kat_surgery_fractureCheck_Time = 10;
force force kat_surgery_incisionTime = 10;
force force kat_surgery_intermediateTime = 8;
force force kat_surgery_npwt_MedLevel = 2;
force force kat_surgery_npwtLocation = 3;
force force kat_surgery_npwtTime = 5;
force force kat_surgery_openTime = 15;
force force kat_surgery_pericardialtap_MedLevel = 2;
force force kat_surgery_pericardialtapLocation = 4;
force force kat_surgery_pericardialtapTime = 8;
force force kat_surgery_reboa_MedLevel = 2;
force force kat_surgery_reboaLocation = 3;
force force kat_surgery_reboaTime = 8;
force force kat_surgery_simpleChance = 0;
force force kat_surgery_Surgery_ConsciousnessRequirement = 0;
force force kat_surgery_surgicalAction_MedLevel = 2;
force force kat_surgery_surgicalLocation = 4;
force force kat_surgery_ultrasound_MedLevel = 2;
force force kat_surgery_ultrasoundLocation = 4;
force force kat_surgery_ultrasoundTime = 8;
'@

Set-Content "$d\KAM Vitals.sqf" -Encoding UTF8 -Value @'
//KAM Vitals
force force kat_vitals_basicDiagnosticTime = 10;
force force kat_vitals_enableBasicDiagnostic = true;
force force kat_vitals_enableFluidShift = true;
force force kat_vitals_enableSimpleMedical = false;
'@

Set-Content "$d\KAM Watches.sqf" -Encoding UTF8 -Value @'
//KAM Watches
force force kat_watch_altitudeUnit = 0;
force force kat_watch_pressureUnit = 0;
force force kat_watch_temperatureUnit = 0;
force force kat_watch_watchInaccuracy = false;
'@

Set-Content "$d\KJWs Two Primary Weapons.sqf" -Encoding UTF8 -Value @'
// KJW's Two Primary Weapons
force KJW_TwoPrimaryWeapons_blacklistedClasses = "[]";
force force KJW_TwoPrimaryWeapons_Enabled = true;
KJW_TwoPrimaryWeapons_selectedPositionPrimary = [["pelvis",[[-0.0943458,-0.427608,0.899012],[-0.967039,0.253845,0.0192545]],[-0.252735,-0.122696,-0.152539]]];
KJW_TwoPrimaryWeapons_selectedPositionSecondary = [["spine3",[[0.748651,-0.66266,-0.012813],[-0.662772,-0.748614,-0.00845503]],[-0.228363,-0.109022,0.067251]]];
force force KJW_TwoPrimaryWeapons_whitelistedClasses = "[]";
'@

Set-Content "$d\LAMBS Danger.sqf" -Encoding UTF8 -Value @'
// LAMBS Danger
force lambs_danger_cqbRange = 150;
force lambs_danger_disableAIAutonomousManoeuvres = false;
force lambs_danger_disableAIDeployStaticWeapons = false;
force lambs_danger_disableAIFindStaticWeapons = false;
force lambs_danger_disableAIHideFromTanksAndAircraft = false;
force force lambs_danger_disableAIPlayerGroup = true;
force force lambs_danger_disableAIPlayerGroupReaction = true;
force lambs_danger_disableAutonomousFlares = false;
force lambs_danger_disableAutonomousSmokeGrenades = false;
force lambs_danger_panicChance = 0.20;
'@

Set-Content "$d\LAMBS Danger Eventhandlers.sqf" -Encoding UTF8 -Value @'
// LAMBS Danger Eventhandlers
force lambs_eventhandlers_ExplosionEventHandlerEnabled = true;
force lambs_eventhandlers_ExplosionReactionTime = 9;
'@

Set-Content "$d\LAMBS Danger WP.sqf" -Encoding UTF8 -Value @'
// LAMBS Danger WP
force lambs_wp_autoAddArtillery = false;
'@

Set-Content "$d\LAMBS Main.sqf" -Encoding UTF8 -Value @'
// LAMBS Main
force lambs_main_combatShareRange = 400;
force lambs_main_debug_drawAllUnitsInVehicles = false;
force lambs_main_debug_Drawing = false;
force lambs_main_debug_FSM = false;
force lambs_main_debug_FSM_civ = false;
force lambs_main_debug_functions = false;
force lambs_main_debug_RenderExpectedDestination = false;
force lambs_main_disableAICallouts = false;
force lambs_main_disableAIDodge = false;
force lambs_main_disableAIFleeing = false;
force lambs_main_disableAIGestures = false;
force lambs_main_disableAutonomousMunitionSwitching = false;
force force lambs_main_disablePlayerGroupSuppression = true;
force lambs_main_indoorMove = 0.502539;
force lambs_main_maxRevealValue = 1;
force lambs_main_minFriendlySuppressionDistance = 5;
force lambs_main_minObstacleProximity = 5;
force lambs_main_minSuppressionRange = 50;
force lambs_main_radioBackpack = 6000;
force lambs_main_radioDisabled = false;
force lambs_main_radioEast = 750;
force lambs_main_radioGuer = 500;
force lambs_main_radioShout = 100;
force lambs_main_radioWest = 555.532;
'@

Set-Content "$d\Laxemann Immerse.sqf" -Encoding UTF8 -Value @'
// Laxemann Immerse
force force L_Immerse_exShake = true;
force force L_Immerse_force = true;
force force L_Immerse_recoil = true;
force force L_Immerse_twitch = true;
'@

Set-Content "$d\LAxemanns Suppress.sqf" -Encoding UTF8 -Value @'
// LAxemann's Suppress
force force L_Suppress_buildup = 0.6;
force force L_Suppress_enabled = true;
force force L_Suppress_flyByEffects = true;
force force L_Suppress_flyByIntensity = 0.3;
force force L_Suppress_halting = true;
force force L_Suppress_intensity = 0.6;
force force L_Suppress_playerSwabEnabled = true;
force force L_Suppress_recovery = 2.5;
'@

Set-Content "$d\Metis Enhanced.sqf" -Encoding UTF8 -Value @'
// Metis Enhanced
force force mts_armory_allowPlayerDBConnection = false;
force force mts_armory_openUIActionMenu = "ace_interaction";
force force mts_cutter_bushcutter_duration = 10;
force force mts_cutter_bushcutter_enabled = true;
force force mts_cutter_bushcutter_requireItem = true;
force force mts_cutter_grasscutter_duration = 5;
force force mts_cutter_grasscutter_enabled = true;
force force mts_cutter_grasscutter_size = 1;
force force mts_drill_UIEnabled = false;
mts_zeus_ACEUnconsciousIconColor = [0.9,0,0,1];
mts_zeus_comments_3DENColor = [0,1,0.75,0.7];
mts_zeus_comments_allowDeleting3DEN = false;
mts_zeus_comments_enabled = true;
mts_zeus_comments_enabled3DEN = true;
mts_zeus_enableACEUnconsciousIcon = true;
mts_zeus_plotting_color = [0.9,0.9,0,1];
'@

Set-Content "$d\Metis Enhanced - Chat Commands.sqf" -Encoding UTF8 -Value @'
// Metis Enhanced - Chat Commands
force force mts_chat_commands_adveng = "admin";
force force mts_chat_commands_doctor = "admin";
force force mts_chat_commands_eng = "admin";
force force mts_chat_commands_heal = "admin";
force force mts_chat_commands_healall = "admin";
force force mts_chat_commands_markers = "admin";
force force mts_chat_commands_medic = "admin";
force force mts_chat_commands_repair = "admin";
force force mts_chat_commands_teleport = "admin";
force force mts_chat_commands_zeus = "admin";
'@

Set-Content "$d\Metis Marker.sqf" -Encoding UTF8 -Value @'
// Metis Marker
mts_markers_defaultMarkerAlpha = 1;
mts_markers_defaultMarkerScale = 1.3;
mts_markers_displayShortDTG = true;
mts_markers_saveLastSelection = false;
mts_markers_useVanillaColors = false;
'@

Set-Content "$d\OCAP - Main.sqf" -Encoding UTF8 -Value @'
// OCAP - Main
force force OCAP_administratorList = "[]";
force OCAP_enabled = true;
force OCAP_isDebug = false;
'@

Set-Content "$d\OCAP - Recorder.sqf" -Encoding UTF8 -Value @'
// OCAP - Recorder
force OCAP_settings_autoStart = true;
force OCAP_settings_excludeClassFromRecord = "['ACE_friesAnchorBar']";
force OCAP_settings_excludeKindFromRecord = "['WeaponHolder']";
force OCAP_settings_excludeMarkerFromRecord = "['SystemMarker_','ACE_BFT_']";
force OCAP_settings_frameCaptureDelay = 1;
force OCAP_settings_minMissionTime = 20;
force OCAP_settings_minPlayerCount = 5;
force OCAP_settings_preferACEUnconscious = true;
force OCAP_settings_saveMissionEnded = true;
force OCAP_settings_saveOnEmpty = true;
force OCAP_settings_saveTag = "Coop";
force OCAP_settings_trackTickets = true;
force OCAP_settings_trackTimeInterval = 10;
force OCAP_settings_trackTimes = false;
'@

Set-Content "$d\Snapping for Eden and Zeus.sqf" -Encoding UTF8 -Value @'
// Snapping for Eden and Zeus
sez_setting_useKeybinds = false;
'@

Set-Content "$d\Tactical Training Team.sqf" -Encoding UTF8 -Value @'
// Tactical Training Team
force ttt_compat_rnt_lafetteDisassembleTime = 10;
force ttt_compat_rnt_lafetteMountTime = 5;
ttt_discord_richpresence_enableDRP = true;
force ttt_dismantle_enable = false;
force ttt_dismantle_neededItem = "";
force ttt_dismantle_neededSkill = 1;
force ttt_dismantle_supportedObjects = "[]";
force ttt_medic_backpack_additionalItems = "[]";
force ttt_medic_backpack_buildAnimation = "Acts_carFixingWheel";
force ttt_medic_backpack_buildTime = 20;
force ttt_medic_backpack_enable = false;
force ttt_medic_backpack_facilityObject = "Land_MedicalTent_01_floor_dark_F";
force ttt_medic_backpack_supportedBackpacks = "[]";
force ttt_medic_backpack_useAnimation = true;
force ttt_medic_vehicle_buildAnimation = "Acts_carFixingWheel";
force ttt_medic_vehicle_buildTime = 30;
force ttt_medic_vehicle_enable = false;
force ttt_medic_vehicle_facilityObject = "Land_MedicalTent_01_NATO_generic_open_F";
force ttt_medic_vehicle_supportedVehicles = "[]";
force ttt_medic_vehicle_useAnimation = true;
force ttt_repair_vehicle_buildAnimation = "Acts_carFixingWheel";
force ttt_repair_vehicle_buildTime = 30;
force ttt_repair_vehicle_enable = false;
force ttt_repair_vehicle_facilityObject = "Land_RepairDepot_01_green_F";
force ttt_repair_vehicle_supportedVehicles = "[]";
force ttt_repair_vehicle_useAnimation = true;
force ttt_signalpanel_buildTime = 6;
force ttt_signalpanel_enable = false;
force ttt_signalpanel_supportedBackpacks = "[]";
force ttt_teleport_enableJIPMoveToRespawn = true;
force ttt_teleport_enableTeleport = true;
'@

Set-Content "$d\TSP Breach.sqf" -Encoding UTF8 -Value @'
// TSP Breach
force force tsp_cba_breach = true;
force force tsp_cba_breach_ace = true;
force tsp_cba_breach_ammo = "[""B_12Gauge_Slug_NoCartridge"",""B_12Gauge_Pellets_Submunition"",""ACE_12Gauge_Pellets_Submunition_No0_Buck"",""rhs_ammo_12g_slug"",""rhs_ammo_12g_00buckshot"",""rhs_ammo_m576_buckshot"",""UK3CB_BAF_B_12Gauge_Slug"",""CUP_12Gauge_Slug"",""CUP_B_12Gauge_Pellets"",""CUP_B_12Gauge_74Slug"",""CUP_12Gauge_Pellets_Submunition_No0_Buck"",""CUP_12Gauge_Pellets_Submunition_No00_Buck"",""UK3CB_BAF_B_12Gauge_Pellets"",""HLC_12G_Buck""]";
force tsp_cba_breach_ammo_multiplier = 0;
force force tsp_cba_breach_auto = 5;
force force tsp_cba_breach_break = true;
force force tsp_cba_breach_fuse = 3;
force tsp_cba_breach_lock_blacklist = "[]";
force force tsp_cba_breach_lock_door = 0;
force force tsp_cba_breach_lock_house = 0;
force force tsp_cba_breach_lockpick = "[0,0.75,0.5,0.05]";
force tsp_cba_breach_military = "[]";
force force tsp_cba_breach_paperclip = "[0,0.5,0.25,0.15]";
force force tsp_cba_breach_picking_time = 20;
force force tsp_cba_breach_ragdoll_distance = 5;
force force tsp_cba_breach_ragdoll_force = 1;
force tsp_cba_breach_reinforced = "[]";
force force tsp_cba_breach_shock = 240;
force force tsp_cba_breach_stun = false;
force force tsp_cba_breach_vanilla = false;
'@

Set-Content "$d\TSP Breach - Flashbang.sqf" -Encoding UTF8 -Value @'
// TSP Breach - Flashbang
force force tsp_cba_flashbang_brightness = 1;
force force tsp_cba_flashbang_distance = 10;
force force tsp_cba_flashbang_fire = true;
force force tsp_cba_flashbang_friends = 0.1;
force force tsp_cba_flashbang_intensity = 1;
force force tsp_cba_flashbang_smoke = true;
force force tsp_cba_flashbang_sparks = true;
force force tsp_cba_flashbang_spray = 0.4;
force force tsp_cba_flashbang_surrender = 0.1;
force force tsp_cba_flashbang_volume = 5;
'@

Set-Content "$d\TSP Core.sqf" -Encoding UTF8 -Value @'
// TSP Core
force force tsp_cba_angle = -0.1;
force force tsp_cba_compat = false;
force force tsp_cba_core_chvd = false;
force force tsp_cba_core_pause = false;
tsp_cba_hint = "ACE";
tsp_cba_hint_distance = 20;
force force tsp_param_faction = false;
'@

Set-Content "$d\Turret Enhanced.sqf" -Encoding UTF8 -Value @'
// Turret Enhanced
Fat_Lurch_Grid = true;
Fat_Lurch_GridNum = 6;
Fat_Lurch_MapSlew = true;
force force Fat_Lurch_Markers = false;
Fat_Lurch_Measure = true;
Fat_Lurch_ShowAz = true;
Fat_Lurch_ShowEl = true;
Fat_Lurch_ShowNorth = true;
Fat_Lurch_ShowTarget = true;
'@

Set-Content "$d\UH-60M.sqf" -Encoding UTF8 -Value @'
// UH-60M
force vtx_ace_viv_loadDistance = 15;
force vtx_ace_viv_timeFactor = 1;
vtx_uh60_anvishud_defaultMode = -1;
vtx_uh60_anvishud_settingBrightness = 0.6;
vtx_uh60_anvishud_settingColor = [0.082,0.608,0.039];
vtx_uh60_flir_setting_AimSlewBlockMouse = true;
vtx_uh60_flir_setting_AimSlewSpeed = 1;
vtx_uh60_flir_setting_AimXFactor = 1;
force vtx_uh60_flir_setting_animateTurret = true;
vtx_uh60_flir_setting_KeySlewSpeed = 1;
vtx_uh60_flir_setting_KeyXFactor = 1;
force vtx_uh60_flir_setting_syncDelay = 0.015;
force force vtx_uh60_hoist_setting_useAttachScript = false;
vtx_uh60_jvmf_defaults = true;
vtx_uh60_sfmPlus_showDamageHints = true;
vtx_uh60_sfmPlusStabilatorEnabled = 1;
vtx_uh60_ui_showDebugMessages = false;
vtx_uh60m_enabled_aar = true;
vtx_uh60m_enabled_cas = true;
vtx_uh60m_enabled_engine = true;
vtx_uh60m_enabled_fd = true;
vtx_uh60m_enabled_flir = true;
vtx_uh60m_enabled_fms = true;
vtx_uh60m_enabled_jvmf = true;
vtx_uh60m_enabled_mfd = true;
vtx_uh60m_simpleCollective = false;
vtx_uh60m_simpleStartup = false;
'@

Set-Content "$d\USAF.sqf" -Encoding UTF8 -Value @'
// USAF
force usaf_afterburner_setting_allow_ai = true;
force USAF_allowNuke = true;
force usaf_debug_setting_enabled_clients = false;
force usaf_debug_setting_enabled_server = false;
force usaf_serviceMenu_setting_allowHangarRearm = true;
force usaf_serviceMenu_setting_allowHangarRefuel = true;
force usaf_serviceMenu_setting_allowHangarRepair = true;
force usaf_serviceMenu_setting_allowLoadoutModification = true;
force usaf_serviceMenu_setting_enabled = true;
force usaf_serviceMenu_setting_refuelTime = "100";
force usaf_serviceMenu_setting_reloadTime = "2";
force usaf_serviceMenu_setting_repairTime = "100";
force usaf_serviceMenu_setting_replaceSources = false;
force usaf_serviceMenu_setting_selectorSearchRadius = "15";
force usaf_setting_allow_aiFormlights = true;
force force usaf_utility_core_allow_move_in_cargo = false;
'@

Set-Content "$d\V1 mods.sqf" -Encoding UTF8 -Value @'
// V1 mods
zeus_additions_main_AABLU_mags = "[""rhs_fim92_mag"",""Titan_AA""]";
zeus_additions_main_AARED_mags = "[""rhs_mag_9k38_rocket"",""Titan_AA""]";
zeus_additions_main_blacklistSettings = "[]";
zeus_additions_main_enableACECargoHint = true;
zeus_additions_main_enableACEDragHint = true;
zeus_additions_main_enableACEMedicalHint = true;
zeus_additions_main_enableExitUnconsciousUnit = false;
zeus_additions_main_enableJIP = false;
zeus_additions_main_enableMissionCounter = false;
zeus_additions_main_enableRHSHint = true;
zeus_additions_main_enableSnowScriptHint = true;
zeus_additions_main_enableTFARHint = true;
zeus_additions_main_HATBLU_mags = "[""UK3CB_BAF_Javelin_Slung_Tube"",""rhs_fgm148_magazine_AT""]";
zeus_additions_main_HATRED_mags = "[""Vorona_HE"",""Vorona_HEAT""]";
zeus_additions_main_LATBLU_mags = "[""UK3CB_BAF_AT4_CS_AP_Launcher"",""UK3CB_BAF_AT4_CS_AT_Launcher"",""rhs_weap_M136"",""rhs_weap_M136_hedp"",""rhs_weap_M136_hp"",""rhs_weap_m72a7""]";
zeus_additions_main_LATRED_mags = "[""rhs_weap_rpg18"",""rhs_weap_rpg26"",""rhs_weap_rshg2"",""rhs_weap_m80"",""rhs_weap_rpg75""]";
zeus_additions_main_MATBLU_mags = "[""rhs_mag_maaws_HE"",""rhs_mag_maaws_HEAT"",""MRAWS_HE_F"",""MRAWS_HEAT_F"",""rhs_mag_smaw_HEDP"",""rhs_mag_smaw_HEAA""]";
zeus_additions_main_MATRED_mags = "[""rhs_rpg7_OG7V_mag"",""rhs_rpg7_PG7V_mag"",""rhs_rpg7_PG7VL_mag"",""rhs_rpg7_PG7VM_mag"",""rhs_rpg7_PG7VR_mag"",""rhs_rpg7_TBG7V_mag"",""rhs_rpg7_type69_airburst_mag"",""RPG7_F"",""RPG32_HE_F"",""RPG32_F""]";
'@

Set-Content "$d\Zeus Enhanced.sqf" -Encoding UTF8 -Value @'
// Zeus Enhanced
force zen_area_markers_editableMarkers = 0;
force force zen_building_markers_enabled = true;
zen_camera_adaptiveSpeed = true;
zen_camera_defaultSpeedCoef = 1;
zen_camera_fastSpeedCoef = 1;
zen_camera_followTerrain = true;
force force zen_common_ascensionMessages = false;
force zen_common_autoAddObjects = true;
force force zen_common_cameraBird = false;
zen_common_darkMode = false;
zen_common_disableGearAnim = true;
zen_common_preferredArsenal = 1;
force force zen_compat_ace_hideModules = true;
zen_context_menu_enabled = 2;
zen_context_menu_overrideWaypoints = false;
zen_editor_addGroupIcons = false;
zen_editor_addModIcons = false;
zen_editor_declutterEmptyTree = true;
zen_editor_disableLiveSearch = false;
zen_editor_moveDisplayToEdge = true;
force zen_editor_parachuteSounds = true;
zen_editor_previews_enabled = true;
zen_editor_randomizeCopyPaste = false;
zen_editor_removeWatermark = true;
zen_editor_unitRadioMessages = 0;
zen_placement_enabled = false;
zen_remote_control_cameraExitPosition = 2;
zen_visibility_enabled = 0;
zen_visibility_maxDistance = 5000;
zen_vision_enableBlackHot = false;
zen_vision_enableBlackHotGreenCold = false;
zen_vision_enableBlackHotRedCold = false;
zen_vision_enableGreenHotCold = false;
zen_vision_enableNVG = true;
zen_vision_enableRedGreenThermal = false;
zen_vision_enableRedHotCold = false;
zen_vision_enableWhiteHot = true;
zen_vision_enableWhiteHotRedCold = false;
'@

Set-Content "$d\Zeus Enhanced - Attributes.sqf" -Encoding UTF8 -Value @'
// Zeus Enhanced - Attributes
zen_attributes_enableAbilities = true;
zen_attributes_enableAmmo = true;
zen_attributes_enableAmmoCargo = true;
zen_attributes_enableArsenal = true;
zen_attributes_enableBuildingMarker = true;
zen_attributes_enableDamage = true;
zen_attributes_enableEngine = true;
zen_attributes_enableExecute = true;
zen_attributes_enableFuel = true;
zen_attributes_enableFuelCargo = true;
zen_attributes_enableGarage = true;
zen_attributes_enableGroupBehaviour = true;
zen_attributes_enableGroupCombatMode = true;
zen_attributes_enableGroupExecute = true;
zen_attributes_enableGroupFormation = true;
zen_attributes_enableGroupID = true;
zen_attributes_enableGroupSide = true;
zen_attributes_enableGroupSkill = true;
zen_attributes_enableGroupSpeed = true;
zen_attributes_enableGroupStance = true;
zen_attributes_enableHealth = true;
zen_attributes_enableInventory = true;
zen_attributes_enableLights = true;
zen_attributes_enableMarkerAlpha = true;
zen_attributes_enableMarkerColor = true;
zen_attributes_enableMarkerText = true;
zen_attributes_enableName = true;
zen_attributes_enablePlateNumber = true;
zen_attributes_enableRank = true;
zen_attributes_enableRepairCargo = true;
zen_attributes_enableRespawnPosition = true;
zen_attributes_enableRespawnVehicle = true;
zen_attributes_enableSensors = true;
zen_attributes_enableSkill = true;
zen_attributes_enableSkills = true;
zen_attributes_enableStance = true;
zen_attributes_enableStates = true;
zen_attributes_enableTraits = true;
zen_attributes_enableVehicleLock = true;
zen_attributes_enableWaypointBehaviour = true;
zen_attributes_enableWaypointCombatMode = true;
zen_attributes_enableWaypointFormation = true;
zen_attributes_enableWaypointLoiterAltitude = true;
zen_attributes_enableWaypointLoiterDirection = true;
zen_attributes_enableWaypointLoiterRadius = true;
zen_attributes_enableWaypointSpeed = true;
zen_attributes_enableWaypointTimeout = true;
zen_attributes_enableWaypointType = true;
'@

Write-Host "Done. Created $(Get-ChildItem $d -Filter '*.sqf' | Measure-Object).Count settings files."
