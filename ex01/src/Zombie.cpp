#include "Zombie.hpp"

//Constructor
Zombie::Zombie()
{
}

//Destructor
Zombie::~Zombie()
{
	std::cout << _name << " stepped on a Potato Mine and died.\n" << std::endl;
}

//Public method
void Zombie::announce(void) const
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n" << std::endl;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
}