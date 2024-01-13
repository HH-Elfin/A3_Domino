class CfgPatches
{
	class A3_Domino_Characters_F_Domino
	{
		author = "[HH] Elfin";
        name = "TF Domino Factions - Characters and Clothing";
        url = "https://youtu.be/Y4WHiSSri4k";
		requiredAddons[] =
		{
			"A3_Domino_Data_F_Domino",
            "A3_Aegis_Characters_F_Aegis",
			"A3_Characters_F",
			"A3_Characters_F_Heads",
			"A3_Characters_F_Oldman_Heads",	
			"A3_Data_F",
            "A3_Weapons_F",
            "A3_Weapons_F_Exp",
            "A3_Air_F_Beta" // TEMP WHILE I TEST THE HELI
		};
		requiredVersion = 0.1;
		units[] =
        {
            /* cfgJTSEC.hpp */
            "B_JTSEC_Base_F",

            "B_JTSEC_Soldier_Base_F",
            "B_JTSEC_Contractor_Base_F",

            //"B_JTSEC_Soldier_AA_F", // Missile Specialist AA
            //"B_JTSEC_Soldier_AAA_F", // Asst Missile Specialist AA
            //"B_JTSEC_Soldier_AT_F", // Missile Specialist AT
            //"B_JTSEC_Soldier_HeavyGunner_F", // Heavy Gunner
            //"B_JTSEC_Soldier_AAR_F", // Asst Autorifleman
            "B_JTSEC_Soldier_M_F", // Marksman
            //"B_JTSEC_Soldier_Sharpshooter_F", // Sharpshooter
            "B_JTSEC_Soldier_Rifleman_F", // Rifleman
            //"B_JTSEC_Soldier_LAT2_F", // Rifleman Light AT
            "B_JTSEC_Soldier_RadioOperator_F", // Radio Operator
            "B_JTSEC_Soldier_LAT_F", // Rifleman AT
            "B_JTSEC_Soldier_TL_F", // Team Leader
            "B_JTSEC_Soldier_SL_F", // Squad Leader
            "B_JTSEC_Soldier_AR_F", // Autorifleman
            "B_JTSEC_Soldier_GL_F", // Grenadier
            //"B_JTSEC_Soldier_AAT_F", // Asst Missile Specialist AT
            "B_JTSEC_Soldier_A_F", // Ammo Bearer
            "B_JTSEC_Soldier_medic_F", // Combat Life Saver
            //"B_JTSEC_Soldier_crew_F", // Crewman
            //"B_JTSEC_Soldier_engineer_F", // Engineer
            //"B_JTSEC_Soldier_exp_F", // Explosive Specialist
            //"B_JTSEC_Soldier_UAV_F", // UAV Operator
            //"B_JTSEC_Soldier_Helipilot_F", // Helicopter Pilot
            //"B_JTSEC_Soldier_helicrew_F", // Helicopter Crew
            //"B_JTSEC_Soldier_Survivor_F", // Survivor
            //"B_JTSEC_Soldier_Fighter_Pilot_F", // Fighter Pilot
            //"B_JTSEC_Soldier_officer_F", // Officer
            //"B_JTSEC_Soldier_CQ_F", // Shotgunner

            "B_JTSEC_Contractor_Rifleman_F", // Contractor

            "B_JTSEC_Heli_Transport_01_F", // TEMP
            "B_JTSEC_LSV_02_armed_F" // TEMP
        };
		weapons[] = {/* Automated */};
	};
};