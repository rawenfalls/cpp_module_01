#include "Zombie.hpp"

Zombie *zombieHorde(int n, std::string name)
{
	//Zombie *horde = NULL;
	if (n<1)
	{
		std::cout << "A Horde can not contain less than 1 Zombie." << std::endl;
		return(NULL);
	}
	Zombie *horde = new Zombie[n];
	if (horde == NULL)
	{
		std::cout << "Allocation of the horde failed." << std::endl;
		return (NULL);
	}
	for (int i = 0; i< n; i++)
		horde[i].set_name(name);
	return (horde);
}