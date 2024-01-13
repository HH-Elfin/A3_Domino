class CfgVehicles
{
	class FlagCarrier;
	class Flag_JTSEC_F: FlagCarrier
	{
		author = "[HH] Elfin";
		class SimpleObject
		{
			animate[]=
			{
				{flag,0}
			};
			hide[] = {};
			verticalOffset = 3.977;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\EditorPreviews_F_Domino\Data\CfgVehicles\Flag_JTSEC_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Flag (JT Security)";
		hiddenSelectionsTextures[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil_CO.paa"};
		hiddenSelectionsMaterials[] = {"\A3\Structures_F\Mil\Flags\Data\Mast_mil.rvmat"};
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture '\Data_F_Domino\Flags\Flag_JTSEC_CO.paa'";
		};
	};
	class Banner_01_base_F;
	class Banner_01_JTSEC_F: Banner_01_base_F
	{
		author = "[HH] Elfin";
		class SimpleObject
		{
			animate[] = {};
			hide[] = {};
			verticalOffset = 0.469;
			verticalOffsetWorld = 0;
			init = "''";
		};
		editorPreview = "\EditorPreviews_F_Domino\Data\CfgVehicles\Banner_01_JTSEC_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Banner (JT Security)";
		hiddenSelectionsTextures[] = {"\Data_F_Domino\Flags\flag_JTSEC_CO.paa"};
	};
};