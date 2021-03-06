#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_1.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_burgundy") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_2.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_3.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_tricolour") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_4.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_5.jpg"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_6.jpg"];
            };
            if (uniform player isEqualTo "U_C_Commoner1_1") then {
                player setObjectTextureGlobal [0, "textures\civilian_uniform_7.jpg"];
            };
        };
    };

    case west: {
		if (uniform player isEqualTo "U_Rangemaster") then {
            player setObjectTextureGlobal [0, "Textures\Uniform\Praktikant.paa"];
        };
		if (uniform player isEqualTo "U_IG_Guerilla2_1") then {
            player setObjectTextureGlobal [0, "textures\Uniform\Rekrut.paa"];
        };
        if (uniform player isEqualTo "U_IG_Guerrilla_6_1") then {
                if (FETCH_CONST(life_coplevel) >= 1) then {
                    _skinName = ["textures\Uniform\Pol_uniform_",(FETCH_CONST(life_coplevel)),".paa"] joinString "";
                };
            player setObjectTextureGlobal [0, _skinName];
        };
		if (uniform player isEqualTo "U_B_CombatUniform_mcam_worn") then {
                if (FETCH_CONST(life_coplevel) >= 6) then {
                    _skinName = ["textures\Uniform\Pol_uniform_",(FETCH_CONST(life_coplevel)),".paa"] joinString "";
                };
            player setObjectTextureGlobal [0, _skinName];
        };
    };

    case independent: {
            if (uniform player isEqualTo "U_IG_Guerrilla_6_1") then {
                if (FETCH_CONST(life_coplevel) >= 1) then {
                    _skinName = ["textures\Uniform\FW_uniform_",(FETCH_CONST(life_Mediclevel)),".paa"] joinString "";
                };
            player setObjectTextureGlobal [0, _skinName];
		
		if((backpack player) == "B_Bergen_blk")  then {
		(unitBackpack player) setObjectTextureGlobal [0, "textures\Uniform\Rucksack.paa"];
	};
        };
    };
};
