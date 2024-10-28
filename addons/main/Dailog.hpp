class RscText;
class RscFrameworkStatic: RscText {
    idc = -1;
    sizeEx = 0;
    colorBackground[] = {0, 0, 0, 0};
    colorText[] = {0, 0, 0, 0};
    colorShadow[] = {0, 0, 0, 0};
};
class RscFrameworkBackground: RscFrameworkStatic {
    colorBackground[] = {0, 0, 0, 0.8};
};
class RscFrameworkLabel: RscFrameworkStatic {
    colorText[] = {1, 1, 1, 1};
    sizeEx = QUOTE(SIZEEX);
};
