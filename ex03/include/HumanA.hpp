// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>
#include "Weapon.hpp"

// classes
class HumanA
{
	private:
		std::string _name;
		Weapon &_weapon;
	public:
	// Constructor
		HumanA(std::string name, Weapon &weapon);
	// Deconstructor
		~HumanA(void);
	// Getter

	// Setter

	// Pubilc Methods
		void attack(void);
};
