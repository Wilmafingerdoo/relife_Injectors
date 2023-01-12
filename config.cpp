class CfgPatches
{
	class relife_Injectors
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Scripts"
		};
	};
};
class CfgMods
{
	class relife_Injectors
	{
		dir = "relife_Injectors";
		name = "relife_Injectors";
		author = "VirusomanVS";
		authorID = "0";
		version = "0.1";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] =
					{
						"relife_Injectors/scripts/4_World"
					};
			};
		};
	};
};

class CfgVehicles {
	class Inventory_Base;	// External class reference
	class RLF_Injector_Base: Inventory_Base
	{
		displayName="$STR_Injector_Base_Name";
		model="\dz\gear\medical\Epinephrine.p3d";
		rotationFlags=17;
		varQuantityInit=1;
		varQuantityMin=0;
		varQuantityMax=1;
		itemSize[]={1,2};
		weight=60;
		lootCategory="Medical";
		lootTag[]=
		{
			"Medic"
		};
		hiddenSelections[]=
        {
            "zbytek"
        };
		inventorySlot[]=
		{
			"epinephrine",
			"morphine"
		};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
					healthLevels[]=
					{
						
						{
							1,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.69999999,
							
							{
								"DZ\gear\medical\data\epipen.rvmat"
							}
						},
						
						{
							0.5,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0.30000001,
							
							{
								"DZ\gear\medical\data\epipen_damage.rvmat"
							}
						},
						
						{
							0,
							
							{
								"DZ\gear\medical\data\epipen_destruct.rvmat"
							}
						}
					};
				};
			};
		};
		
		class AnimEvents
		{
			class SoundWeapon
			{
				class Morphine_spear
				{
					soundSet="Morphine_spear_SoundSet";
					id=201;
				};
				class Morphine_out
				{
					soundSet="Morphine_out_SoundSet";
					id=202;
				};
			};
		};
	};
	
	class RLF_BrokenLegs_Injector_Cure: RLF_Injector_Base
	{
		scope=2;
		displayName="$STR_BL_Injector_Name";
		descriptionShort="$STR_BL_Injector_Desc";
		hiddenSelectionsTextures[]=
		{
			"relife_injectors\data\anti_bl_co.paa"
		};
	};
	class RLF_Wound_Injector_Cure: RLF_Injector_Base
	{
		scope=2;
		displayName="$STR_Wound_Injector_Name";
		descriptionShort="$STR_Wound_Injector_Desc";
		hiddenSelectionsTextures[]=
		{
			"relife_injectors\data\anti_bl_co.paa"
		};
	};
	class RLF_Kuru_Injector_Cure: RLF_Injector_Base
	{
		scope=2;
		displayName="$STR_Kuru_Injector_Name";
		descriptionShort="$STR_Kuru_Injector_Desc";
		hiddenSelectionsTextures[]=
		{
			"relife_injectors\data\anti_kuru_co.paa"
		};
	};
	
	class RLF_Salmonella_Injector_Cure: RLF_Injector_Base
	{
		scope=2;
		displayName="$STR_Salmonella_Injector_Name";
		descriptionShort="$STR_Salmonella_Injector_Desc";
		hiddenSelectionsTextures[]=
		{
			"relife_injectors\data\anti_salm_co.paa"
		};
	};
	
	
	class RLF_Influenza_Injector_Cure: RLF_Injector_Base
	{
		scope=2;
		displayName="$STR_Influenza_Injector_Name";
		descriptionShort="$STR_Influenza_Injector_Desc";
		hiddenSelectionsTextures[]=
		{
			"relife_injectors\data\anti_gripp_co.paa"
		};
	};

	class RLF_Cholera_Injector_Cure: RLF_Injector_Base
	{
		scope=2;
		displayName="$STR_Cholera_Injector_Name";
		descriptionShort="$STR_Cholera_Injector_Desc";
		hiddenSelectionsTextures[]=
		{
			"relife_injectors\data\anti_cholera_co.paa"
		};
	};
};
