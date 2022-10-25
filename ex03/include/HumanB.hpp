
// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Weapon.hpp"

// classes
class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;
		bool _is_armed;
	public:
	// Constructor
		HumanB(std::string name);
	// Deconstructor
		~HumanB(void);
	// Getter

	// Setter
		void setWeapon(Weapon &weapon);
	// Public Methods
		void attack(void);
};