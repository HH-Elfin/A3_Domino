class cfgGroups
{
	class West
	{
		name = $STR_A3_CfgGroups_West0;
		side = 1;
		class BLU_JTSEC_F
		{
			name = "JT Security";
			side = 1;
			class Infantry_Army
			{
				name = "Infantry (Army)";
				side = 1;
				class B_JTSEC_Army_InfSquad
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad0;
					side = 1;
					faction = "BLU_JTSEC_F";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="B_JTSEC_Soldier_SL_F";
						rank="SERGEANT";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="B_JTSEC_Soldier_RadioOperator_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="B_JTSEC_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={-5,-5,0};
					};
					class Unit3
					{
						side=1;
						vehicle="B_JTSEC_Soldier_M_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					class Unit4
					{
						side=1;
						vehicle="B_JTSEC_Soldier_TL_F";
						rank="CORPORAL";
						position[]={-10,-10,0};
					};
					class Unit5
					{
						side=1;
						vehicle="B_JTSEC_Soldier_AR_F";
						rank="PRIVATE";
						position[]={15,-15,0};
					};
					class Unit6
					{
						side=1;
						vehicle="B_JTSEC_Soldier_A_F";
						rank="PRIVATE";	
						position[]={-15,-15,0};
					};
					class Unit7
					{
						side=1;
						vehicle="B_JTSEC_Soldier_medic_F";
						rank="PRIVATE";
						position[]={20,-20,0};
					};
				};
				/*
				class B_JTSEC_Army_InfSquad_Weapons
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSquad_Weapons0;
					side = 1;
					faction = "BLU_JTSEC_F";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
				};
				*/
				class B_JTSEC_Army_InfTeam
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam0;
					side = 1;
					faction = "BLU_JTSEC_F";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
					class Unit0
					{
						side=1;
						vehicle="B_JTSEC_Soldier_TL_F";
						rank="CORPORAL";
						position[]={0,0,0};
					};
					class Unit1
					{
						side=1;
						vehicle="B_JTSEC_Soldier_AR_F";
						rank="PRIVATE";
						position[]={5,-5,0};
					};
					class Unit2
					{
						side=1;
						vehicle="B_JTSEC_Soldier_GL_F";
						rank="PRIVATE";
						position[]={-5,-5};
					};
					class Unit3
					{
						side=1;
						vehicle="B_JTSEC_Soldier_LAT_F";
						rank="PRIVATE";
						position[]={10,-10,0};
					};
					
				};
				/*
				class B_JTSEC_Army_InfTeam_AT
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AT0;
					side = 1;
					faction = "BLU_JTSEC_F";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
				};
				class B_JTSEC_Army_InfTeam_AA
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfTeam_AA;
					side = 1;
					faction = "BLU_JTSEC_F";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
				};
				class B_JTSEC_Army_InfSentry
				{
					name = $STR_A3_CfgGroups_West_BLU_F_Infantry_BUS_InfSentry0;
					side = 1;
					faction = "BLU_JTSEC_F";
					icon = "\A3\UI_F\Data\Map\Markers\NATO\b_inf.paa";
				};
				class B_JTSEC_Army_InfTeam_Light
				{
					name = "Fire Team (Light)";
					side = 1;
					faction = "BLU_JTSEC_F";
				};
				class B_JTSEC_Army_InfSquad_Assault
				{
					name = "Assault Squad";
					side = 1;
					faction = "BLU_JTSEC_F";
				};
				*/
			};
			/*
			class Infantry_Contractors
			{
				name = "Infantry (Contractors)";
				class B_JTSEC_Inf_Contractor_GuardTeam
				{
					name = "Guard Team";
				};
				class B_JTSEC_Inf_Contractor_Patrol
				{
					name = "Patrol";
				};
			};
			class SpecOps
			{
				name = "Special Forces";
				class B_JTSEC_SpecOps_LH
				{
					name = "Lightning Hellhounds";
				};
			};
			*/
		};
	};
};