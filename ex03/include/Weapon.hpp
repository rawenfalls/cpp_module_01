
// Header-protection
#pragma once

// Includes
#include <string>
#include <iostream>

// classes
class Weapon
{
	private:
		std::string	_type;

	public:
	// Constructor
		Weapon(const std::string &weapon);
	// Deconstructors
		~Weapon();
	// Getter
		std::string getType() const;
	// Setter
		void setType(const std::string &weapon);
	// Public Methods

};
