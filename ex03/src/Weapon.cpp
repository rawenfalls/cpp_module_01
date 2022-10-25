
#include "Weapon.hpp"


// // Constructor

Weapon::Weapon(const std::string &weapon)
{
	this->setType(weapon);
}

// // Deconstructor
Weapon::~Weapon()
{
	std::cout << this->getType() << " dropped to the floor and broke." << std::endl;
}

// Getter
std::string Weapon::getType() const
{
	return (_type);
}

// Setter
void Weapon::setType(const std::string &weapon)
{
	_type = weapon;
}
