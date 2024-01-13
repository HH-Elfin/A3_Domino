class arifle_MX_Black_F;

class arifle_MX_Black_JT_Holo_F: arifle_MX_Black_F
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "optic_Holosight_blk_F";
		};	
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "";
		};
	};
};

class arifle_MX_Black_JT_RCO_F: arifle_MX_Black_F
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "optic_Hamr";
		};	
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "";
		};
	};
}; // TODO move these guns somewhere else

class arifle_MX_SW_Black_F;

class arifle_MX_SW_Black_JT_RCO_F: arifle_MX_SW_Black_F
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "optic_Hamr";
		};	
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "bipod_01_f_blk";
		};
	};
};

class arifle_MXM_Black_F;

class arifle_MXM_Black_JT_SOS_F: arifle_MXM_Black_F
{
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
			slot = "CowsSlot";
			item = "optic_SOS";
		};	
		class LinkedItemsAcc
		{
			slot = "PointerSlot";
			item = "acc_pointer_IR";
		};
		class LinkedItemsMuzzle
		{
			slot = "MuzzleSlot";
			item = "";
		};
		class LinkedItemsUnder
		{
			slot = "UnderBarrelSlot";
			item = "bipod_01_f_blk";
		};
	};
};

class U_B_JTSEC_Uniform01_F: Uniform_Base
{
	_generalMacro = "U_B_JTSEC_Uniform01_F"
	author = "[HH] Elfin";
	scope = 2;
	displayName = "Combat Uniform (JTSEC)";
	//picture = "\Characters_F_Domino\Uniforms\Data\UI\icon_U_B_JTSEC_Uniform01_CA.paa";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
	hiddenSelections[] = {"camo"};
	hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Suitpacks\Data\suitpack_soldier_blufor_co.paa"};
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "B_JTSEC_Uniform01_F";
		containerClass = Supply40;
		mass = 40;
	};
};