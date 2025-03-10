class CfgMainMenuSpotlight { // RscDisplayMain >> Spotlight works but is considered obsolete since SPOTREP #00064
    class spotlight_cup {
        text = QUOTE(Tactical Training Team - CUP Server); // Text displayed on the square button, converted to upper-case
        textIsQuote = 0; // 1 to add quotation marks around the text
        picture = QPATHTOEF(common,data\ttt_logo_co.paa); // Square picture, ideally 512x512
        //video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
        action = QUOTE(_this call (uiNamespace getVariable QQFUNC(joinServer))); // Code called upon clicking, passed arguments are [<button:Control>]
        actionText = CSTRING(joinHover); // Text displayed in top left corner of on-hover white frame
        condition = "true"; // Condition for showing the spotlight
    };

    //deactivate all other menus
    delete ApexProtocol;
    delete BootCamp;
    delete EastWind;

    delete Orange_CampaignGerman;
    delete Orange_Showcase_IDAP;
    delete Orange_Showcase_LoW;
    delete Orange_Campaign;

    delete Showcase_TankDestroyers;

    delete Tacops_Campaign_03;
    delete Tacops_Campaign_02;
    delete Tacops_Campaign_01;

    delete Tanks_Campaign_01;

    delete OldMan;

    delete Contact_Campaign;

    delete gm_campaign_01;

    delete SP_FD14;

    delete AoW_Showcase_AoW;
    delete AoW_Showcase_Future;

    delete Extraction_lxWS;
    delete Showcase_Alchemist_lxWS;
    delete Showcase_VR_lxWS;

    delete vn_showcase_macv;
    delete vn_showcase_macv_13;
    delete vn_showcase_pavn;
    delete vn_showcase_pavn_13;
    delete vn_sogba;

    delete SPE_Arsenal;
    delete SPE_Campagin_OperationCobra_04;
    delete SPE_Coop_Der_Zahnarzt;
    delete SPE_Faction_Showcase_GER;
    delete SPE_Faction_Showcase_US;
    delete SPE_Coop_Attack_on_Mortain;
    delete SPE_Coop_Battle_of_St_Barthelemy;
    delete SPE_Coop_Panzerkampfwagen;
    delete SPE_Coop_Prizefighter;

    delete Scenario_TrainingDay_RF;
    delete Scenario_FireSeason_RF;
    delete Scenario_AirControl_RF;
};