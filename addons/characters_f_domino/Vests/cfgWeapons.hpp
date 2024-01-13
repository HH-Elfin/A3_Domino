class CfgWeapons
{
	class ItemCore;
	class VestItem;

	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo;
	};
	class Vest_NoCamo_Base: ItemCore
	{
		class ItemInfo;
	};

	class V_PlateCarrierGL_blk;

	class V_PlateCarrierGL_blk_JTSEC: V_PlateCarrierGL_blk
	{
		author = "[HH] Elfin";
		displayName = "Carrier GL Rig [JTSEC] (Black)";
		//picture = "\A3_Domino\Characters_F_Domino\Vests\Data\UI\icon_V_PlateCarrierGL_blk_JTSEC_CA.paa"; TODO
		hiddenSelectionsTextures[] = {"\Characters_F_Domino\Vests\Data\V_PlateCarrierGL_blk_JTSEC_CO.paa"};
	};
};