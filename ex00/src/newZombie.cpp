#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *buckethead_zombie = new Zombie(name);
	buckethead_zombie->announce();//or (*buckethead_zombie).announce();
	return (buckethead_zombie);
}