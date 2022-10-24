#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombie = newZombie("Buckethead Zombie");
	randomChump("Basic Zombie");
	delete zombie;
	return(0);
}