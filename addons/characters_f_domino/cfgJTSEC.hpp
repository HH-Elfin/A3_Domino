class B_JTSEC_Base_F: B_soldier_F
{
	author = "[HH] Elfin";																	// The name of the author of the asset, which is displayed in the editor.
	scope = 0;																				// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
	scopeCurator = 0;																		// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
	scopeArsenal = 0;																		// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
	icon = "iconMan";
	//nameSound = "veh_infantry_s";
	identityTypes[] = { "LanguageENG_F","Head_JTSEC","G_NATO_default" };						// Identity Types are explained in the Headgear section of this guide.
	genericNames = "ScottishNamesJTSEC";
	displayName = "Man (JTSEC)";															// The name of the soldier, which is displayed in the editor.
	faction = "BLU_JTSEC_F"; 																// Unit faction
	//editorSubcategory = ""; 																// vehicleClass
	//nakedUniform = "U_BasicBody"; 															// Body when not in uniform
	//cost = 200000;																			// How likely the enemies attack this character among some others.
	//camouflage = 1.5;																		// How likely this character is spotted (smaller number = more stealthy).
	//sensitivity = 2.5;																		// How likely this character spots enemies when controlled by AI.
	//threat[] = { 1, 1, 0.8 };																// Multiplier of the cost of the character in the eyes of soft, armoured and air enemies.
	//model = "\A3\Characters_F\BLUFOR\b_soldier_01.p3d";										// The path to the model this character uses.
	//uniformClass = "U_B_soldier_new";														// This links this soldier to a particular uniform. For the details, see below.
	//hiddenSelections[] = { "camo" };														// List of model selections which can be changed with hiddenSelectionTextures[] and hiddenSelectionMaterials[] properties. If empty, model textures are used. 
	//hiddenSelectionsTextures[] = { "\A3\Characters_F_New\BLUFOR\Data\b_soldier_new.paa" };	// The textures for the selections defined above.
	//canDeactivateMines = 0;																	// Can this character deactivate mines?
	//engineer = 0;																			// Can this character repair vehicles?
	//attendant = 0;																			// Can this character heal soldiers?																				// If a character has a special role, a special icon shall be used.
	//picture = "";																			// The same as above, but for the squad picture.
	backpack = "";																			// Which backpack the character is wearing.
	weapons[] = {"Throw", "Put"};															// Which weapons the character has.
	respawnWeapons[] = {"Throw", "Put"};													// Which weapons the character respawns with.
	Items[] = {};																			// Which items the character has.
	RespawnItems[] = {};																	// Which items the character respawns with.
	magazines[] = {};																		// What ammunition the character has.
	respawnMagazines[] = {};																// What ammunition the character respawns with.
	linkedItems[] = {};																		// Which items the character has.
	respawnLinkedItems[] = {};																// Which items the character respawns with.
};

class B_JTSEC_Soldier_Base_F: B_JTSEC_Base_F
{
	displayName = "Soldier (Base)";
	editorSubcategory = "EdSubcat_JTSEC_Men_Army";
	uniformClass = "U_B_JTSEC_Uniform01_F";
	hiddenSelections[] = {"camo","insignia"};
	items[] = {"FirstAidKit"};
	respawnItems[] = {"FirstAidKit"};
	linkedItems[] = 
	{
		"V_PlateCarrier1_blk",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
	respawnLinkedItems[] = 
	{
		"V_PlateCarrier1_blk",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
	weapons[] = {"arifle_MX_Black_JT_Holo_F","hgun_Rook40_F","Throw","Put"};
	respawnweapons[] = {"arifle_MX_Black_JT_Holo_F","hgun_Rook40_F","Throw","Put"};
	magazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
	respawnMagazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
};

class B_JTSEC_Soldier_M_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Marksman";
    weapons[] = {"arifle_MXM_Black_JT_SOS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
	respawnweapons[] = {"arifle_MXM_Black_JT_SOS_F","hgun_Rook40_F","Throw","Put","Rangefinder"};
	magazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
	respawnMagazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
	linkedItems[] = 
	{
		"V_PlateCarrier1_blk",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles",
		"Rangefinder"
	};
	respawnLinkedItems[] = 
	{
		"V_PlateCarrier1_blk",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
};

class B_JTSEC_Soldier_Rifleman_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Rifleman";
};

class B_JTSEC_Soldier_RadioOperator_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	displayName = "Radio Operator";
	backpack = "B_RadioBag_01_black_F";
};

class B_JTSEC_Soldier_LAT_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Rifleman (AT)";
    icon = "iconManAT";
    backpack = "B_AssaultPack_blk_JT_LAT"
    weapons[] = {"arifle_MX_Black_JT_Holo_F","hgun_Rook40_F","launch_MRAWS_black_F","Throw","Put"};
	respawnweapons[] = {"arifle_MX_Black_JT_Holo_F","hgun_Rook40_F","launch_MRAWS_black_F","Throw","Put"};
	magazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"MRAWS_HEAT_F",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
	respawnMagazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"MRAWS_HEAT_F",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
    linkedItems[] = 
	{
		"V_PlateCarrier2_blk",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
	respawnLinkedItems[] = 
	{
		"V_PlateCarrier2_blk",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
};

class B_JTSEC_Soldier_GL_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Grenadier"; //TODO
};

class B_JTSEC_Soldier_TL_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Team Leader";
    icon = "iconManLeader";
    weapons[] = {"arifle_MX_Black_JT_RCO_F","hgun_Rook40_F","Throw","Put","Binocular"};
	respawnweapons[] = {"arifle_MX_Black_JT_RCO_F","hgun_Rook40_F","Throw","Put","Binocular"};
	magazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"B_IR_Grenade",
		"B_IR_Grenade",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellRed",
		"SmokeShellRed",
		"Chemlight_red",
		"Chemlight_red"
	};
	respawnMagazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"B_IR_Grenade",
		"B_IR_Grenade",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellRed",
		"SmokeShellRed",
		"Chemlight_red",
		"Chemlight_red"
	};
    linkedItems[] = 
    {
		"V_PlateCarrierGL_blk_JTSEC",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
	respawnLinkedItems[] = 
	{
		"V_PlateCarrierGL_blk_JTSEC",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
	//TODO fix this - currently a copy of the SL
};

class B_JTSEC_Soldier_SL_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Squad Leader";
    icon = "iconManLeader";
    weapons[] = {"arifle_MX_Black_JT_RCO_F","hgun_Rook40_F","Throw","Put","Binocular"};
	respawnweapons[] = {"arifle_MX_Black_JT_RCO_F","hgun_Rook40_F","Throw","Put","Binocular"};
	magazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"B_IR_Grenade",
		"B_IR_Grenade",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellRed",
		"SmokeShellRed",
		"Chemlight_red",
		"Chemlight_red"
	};
	respawnMagazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"B_IR_Grenade",
		"B_IR_Grenade",
		"SmokeShell",
		"SmokeShell",
		"SmokeShellRed",
		"SmokeShellRed",
		"Chemlight_red",
		"Chemlight_red"
	};
    linkedItems[] = 
    {
		"V_PlateCarrierGL_blk_JTSEC",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"

	};
	respawnLinkedItems[] = 
	{
		"V_PlateCarrierGL_blk_JTSEC",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"

	};
};

class B_JTSEC_Soldier_AR_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Autorifleman";
    icon = "iconManMG";
    weapons[] = {"arifle_MX_SW_Black_JT_RCO_F","hgun_Rook40_F","Throw","Put"};
	respawnweapons[] = {"arifle_MX_SW_Black_JT_RCO_F","hgun_Rook40_F","Throw","Put"};
	magazines[] =
	{
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
	respawnMagazines[] =
	{
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"100Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
    linkedItems[] = 
	{
		"V_PlateCarrier2_blk",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
	respawnLinkedItems[] = 
	{
		"V_PlateCarrier2_blk",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
};

class B_JTSEC_Soldier_A_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Ammo Bearer";
    backpack = "B_Carryall_blk_JT_Ammo";
	magazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
	respawnMagazines[] =
	{
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"30Rnd_65x39_caseless_black_mag",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"HandGrenade",
		"HandGrenade",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
};

class B_JTSEC_Soldier_medic_F: B_JTSEC_Soldier_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Combat Life Saver";
    icon = "iconManMedic";
	backpack = "B_AssaultPack_blk_JT_Medic";
    linkedItems[] =
    {
		"V_PlateCarrierGL_blk_JTSEC",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
	respawnLinkedItems[] = 
	{
		"V_PlateCarrierGL_blk_JTSEC",
		"Aegis_H_Helmet_FASTMT_Headset_tan_F",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio",
		"NVGoggles"
	};
};

class B_JTSEC_Contractor_Base_F: B_JTSEC_Base_F
{
	displayName = "Contractor (Base)";
	editorSubcategory = "EdSubcat_JTSEC_Men_Contractors";
	//uniformClass = "";
	linkedItems[] = 
	{
		"V_Rangemaster_belt",
		"H_Cap_tan",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	respawnLinkedItems[] = 
	{
		"V_Rangemaster_belt",
		"H_Cap_tan",
		"ItemMap",
		"ItemCompass",
		"ItemWatch",
		"ItemRadio"
	};
	weapons[] = {"arifle_SPAR_01_blk_F","hgun_Rook40_F","Throw","Put"};
	respawnweapons[] = {"arifle_SPAR_01_blk_F","hgun_Rook40_F","Throw","Put"};
	magazines[] =
	{
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
	respawnMagazines[] =
	{
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"30Rnd_556x45_Stanag_red",
		"16Rnd_9x21_Mag",
		"16Rnd_9x21_Mag",
		"SmokeShell",
		"SmokeShell",
		"Chemlight_red",
		"Chemlight_red"
	};
};

class B_JTSEC_Contractor_Rifleman_F: B_JTSEC_Contractor_Base_F
{
	scope = 2;
    scopeCurator = 2;
    scopeArsenal = 2;
    displayName = "Contractor";
};

class B_Heli_Transport_01_F; // TEMP TODO GET RID OF THIS
class B_JTSEC_Heli_Transport_01_F: B_Heli_Transport_01_F
{
	author = "[HH] Elfin";																	
	scope = 2;
	scopeCurator = 2;
	scopeArsenal = 2;
	side = 1;
	faction = "BLU_JTSEC_F";
	crew = "B_Helipilot_F";
	typicalCargo[] = {"B_Helipilot_F"};
	displayName = "UH-666 Bald Hawk";
};

class LSV_02_armed_base_F;
class B_JTSEC_LSV_02_armed_F: LSV_02_armed_base_F
{
	author = "[HH] Elfin";
	class SimpleObject
	{
		eden = true;
		animate[] =
        {
            {damagehide,0},
            {damagehidevez,0},
            {damagehidehlaven,0},
            {wheel_1_1_destruct,0},
            {wheel_1_2_destruct,0},
            {wheel_1_3_destruct,0},
            {wheel_1_4_destruct,0},
            {wheel_2_1_destruct,0},
            {wheel_2_2_destruct,0},
            {wheel_2_3_destruct,0},
            {wheel_2_4_destruct,0},
            {wheel_1_1_destruct_unhide,0},
            {wheel_1_2_destruct_unhide,0},
            {wheel_1_3_destruct_unhide,0},
            {wheel_1_4_destruct_unhide,0},
            {wheel_2_1_destruct_unhide,0},
            {wheel_2_2_destruct_unhide,0},
            {wheel_2_3_destruct_unhide,0},
            {wheel_2_4_destruct_unhide,0},
            {wheel_1_3_damage,0},
            {wheel_1_4_damage,0},
            {wheel_2_3_damage,0},
            {wheel_2_4_damage,0},
            {wheel_1_3_damper_damage_backanim,0},
            {wheel_1_4_damper_damage_backanim,0},
            {wheel_2_3_damper_damage_backanim,0},
            {wheel_2_4_damper_damage_backanim,0},
            {wheel_1_1,0},
            {wheel_2_1,0},
            {wheel_1_2,0},
            {wheel_2_2,0},
            {daylights,0},
            {reverse_light,1},
            {wheel_1_1_damage,0},
            {wheel_1_2_damage,0},
            {wheel_2_1_damage,0},
            {wheel_2_2_damage,0},
            {wheel_1_1_damper_damage_backanim,0},
            {wheel_1_2_damper_damage_backanim,0},
            {wheel_2_1_damper_damage_backanim,0},
            {wheel_2_2_damper_damage_backanim,0},
            {wheel_1_1_damper,0},
            {wheel_2_1_damper,0},
            {wheel_1_2_damper,0},
            {wheel_2_2_damper,0},
            {drivingwheel,0},
            {indicatorspeed,0},
            {fuel,1},
            {steering_1_1,0},
            {steering_2_1,0},
            {hidegunner,0},
            {mainturret,0},
            {maingun,0},
            {minigun,0.33},
            {zasleh_rot,498},
            {zasleh_hide,0},
            {opticsfix,0},
            {wheel_1_1_damper_land_hack,0},
            {wheel_1_2_damper_land_hack,0},
            {wheel_2_1_damper_land_hack,0},
            {wheel_2_2_damper_land_hack,0},
            {magazine_reload_hide_1,0}
        };
		hide[] =
        {
            clan,
            zasleh,
            light_1,
            light_2,
            "zadni svetlo",
            "brzdove svetlo",
            "podsvit pristroju",
            poskozeni
        };
		verticalOffset = 1.599;
		verticalOffsetWorld = -0.131;
		init = "[this, '', []] call bis_fnc_initVehicle";
	};
	//editorPreview = "\A3_Aegis\EditorPreviews_F_Aegis\Data\CfgVehicles\O_R_LSV_02_armed_F.jpg";
	scope = 2;
	scopeCurator = 2;
	displayName = "Ford Focus ST 2.0";
	side = 1;
	faction = "BLU_JTSEC_F";
	crew = "B_JTSEC_Soldier_Rifleman_F";
	typicalCargo[] = {"B_JTSEC_Soldier_Rifleman_F"};
	textureList[] = {Green,1};
	hiddenSelectionsTextures[] =
	{
		"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_01_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_02_RUkhk_CO.paa",
		"\A3_Aegis\Soft_F_Aegis\LSV_02\Data\CSAT_LSV_03_RUkhk_CO.paa"
	};
	class TransportMagazines
	{

	};
	class TransportItems
	{

	};
	class TransportWeapons
	{

	};
};