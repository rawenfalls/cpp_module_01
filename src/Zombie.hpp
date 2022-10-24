/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:21:20 by eraynald          #+#    #+#             */
/*   Updated: 2022/10/17 17:42:40 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string> //std::string
//#include <sstream> // std::stringstream


class Zombie
{	
	public:
	//Constructor
	Zombie(std::string s);
	//Destructor
	~Zombie();
	//Public methods
	void announce(void)const;

	private:
		std::string _name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
