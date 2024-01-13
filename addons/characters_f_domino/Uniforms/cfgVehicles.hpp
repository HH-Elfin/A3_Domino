class CfgVehicles
{
	class Item_Base_F;
	
	class Item_U_B_CombatUniform_mcam_tshirt: Item_Base_F
	{
		displayName = $STR_A3_A_CfgWeapons_U_B_CombatUniform_mcam_tshirt0;
	};

	class B_AssaultPack_blk;

	class B_AssaultPack_blk_JT_Medic: B_AssaultPack_blk
	{
		_generalMacro="B_AssaultPack_blk_JT_Medic";
		scope = 1;
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
			class _xx_Medkit
			{
				name = "Medkit";
				count = 1;
			};
		};
	};

	class B_AssaultPack_blk_JT_LAT: B_AssaultPack_blk
	{
		_generalMacro="B_AssaultPack_blk_JT_LAT";
		scope = 1;
		class TransportMagazines
		{
			class _xx_MRAWS_HEAT_F
			{
				magazine = "MRAWS_HEAT_F";
				count = 2;
			};
		};
	};

	class B_Carryall_blk;

	class B_Carryall_blk_JT_Ammo: B_Carryall_blk
	{
		_generalMacro="B_Carryall_blk_JT_Ammo";
		scope = 1;
		class TransportMagazines
		{
			class _xx_30Rnd_65x39_caseless_black_mag { magazine = "30Rnd_65x39_caseless_black_mag"; count = 6; };
			class _xx_100Rnd_65x39_caseless_black_mag { magazine = "100Rnd_65x39_caseless_black_mag"; count = 1; };
			class _xx_MRAWS_HEAT_F { magazine = "MRAWS_HEAT_F"; count = 1; };
			class _xx_20Rnd_762x51_Mag { magazine = "20Rnd_762x51_Mag"; count = 2; };
			class _xx_1Rnd_HE_Grenade_shell { magazine = "1Rnd_HE_Grenade_shell"; count = 3; };
			class _xx_3Rnd_HE_Grenade_shell { magazine = "3Rnd_HE_Grenade_shell"; count = 1; };
		};
		class TransportItems
		{
			class _xx_HandGrenade { name = "HandGrenade"; count = 2; };
			class _xx_MiniGrenade { name = "MiniGrenade"; count = 2; };
			class _xx_FirstAidKit { name = "FirstAidKit"; count = 2; };
		};
	};
};