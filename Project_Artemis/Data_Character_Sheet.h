#pragma once
#include <string>
#include "CS_Data.h"

class Character_Data {

	//Header Data
	//!Please note many of these strings will most likely be
	//converted to enums for dankness
	CS_Data _character_name;
	CS_Data _player_name;
	CS_Data _character_class;
	CS_Data _culture;
	CS_Data _background;
	CS_Data _shadow_weakness;
	CS_Data _eyes;
	CS_Data _skin;
	CS_Data _hair;
	CS_Data _age;
	CS_Data _height;
	CS_Data _weight;
	CS_Data _level;
	CS_Data _experience_points;

	//Stats
	CS_Data _strength;
	CS_Data _dexerity;
	CS_Data _constitution;
	CS_Data _intelligence;
	CS_Data _wisdom;
	CS_Data _charisma;
	CS_Data _temp_shadows;
	CS_Data _perm_shadows;

	//Modifiers
	CS_Data _strength_mod;
	CS_Data _dexerity_mod;
	CS_Data _constitution_mod;
	CS_Data _intelligence_mod;
	CS_Data _wisdom_mod;
	CS_Data _charisma_mod;

	//Saving Throws
	CS_Data _strength_ST;
	CS_Data _dexerity_ST;
	CS_Data _constitution_ST;
	CS_Data _intelligence_ST;
	CS_Data _wisdom_ST;
	CS_Data _charisma_ST;

	//Skills
	CS_Data _acrobatics;
	CS_Data _animal_handling;
	CS_Data _athletes;
	CS_Data _deception;
	CS_Data _history;
	CS_Data _insight;
	CS_Data _intimidation;
	CS_Data _investigation;
	CS_Data _lore;
	CS_Data _medicine;
	CS_Data _nature;
	CS_Data _perception;
	CS_Data _performance;
	CS_Data _persuasion;
	CS_Data _riddle;
	CS_Data _shadow_lore;
	CS_Data _sleight_of_hand;
	CS_Data _stealth;
	CS_Data _survival;
	CS_Data _traditions;
	CS_Data _passive_perception;

	//Character Stats
	CS_Data _armour_class;
	CS_Data _initiative;
	CS_Data _speed;
	CS_Data _current_hit_points;
	CS_Data _hit_point_maximum;
	CS_Data _temporary_hit_points;
	CS_Data _miserable;
	CS_Data _hit_dice;
	CS_Data _hit_dice_total;
	CS_Data _death_saves_suc;
	CS_Data _death_save_fail;

	//Character Traits
	CS_Data _distinctive_quality;
	CS_Data _specialty;
	CS_Data _hope;
	CS_Data _despair;

	//Weapons
	CS_Data _weapon;

	//Equipment
	CS_Data _equipment;
	CS_Data _standard_of_living;
	CS_Data _gold;
	CS_Data _silver;
	CS_Data _copper;


	//Features, Traits, and Virtues;
	CS_Data _FTV;

	//Other Proficiencies and Languages
	CS_Data _OPL;

	//Second Page Data
	CS_Data _character_appearance;
	CS_Data _allies_and_patrons;
	CS_Data _additional_features_traits;
	CS_Data _character_backstory;
	CS_Data _treasure;
};