class CfgMainMenuSpotlight { // RscDisplayMain >> Spotlight works but is considered obsolete since SPOTREP #00064
    class spotlight_cup {
        text = CSTRING(text); // Text displayed on the square button, converted to upper-case
        textIsQuote = 0; // 1 to add quotation marks around the text
        picture = QPATHTOEF(common,data\ttt_logo_co.paa); // Square picture, ideally 512x512
        //video = "\a3\Ui_f\Video\spotlight_1_Apex.ogv"; // Video played on mouse hover
        action = QUOTE(ARR_3([_this,'game.tacticalteam.de',2322]) call (uiNamespace getVariable QQEFUNC(common,join)));
        actionText = CSTRING(joinHover); // Text displayed in top left corner of on-hover white frame
        condition = QUOTE(true); // Condition for showing the spotlight
    };
};
