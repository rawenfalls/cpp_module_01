#include "Zombie.hpp"

//Constructor
Zombie::Zombie(std::string s) : _name(s)
{
	std::cout << "Hello i am about to launch an all out attack on your house. Sincerely, " << _name << "\n" <<std::endl;
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