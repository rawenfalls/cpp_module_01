#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie basic_zombie(name);
	basic_zombie.announce();
}