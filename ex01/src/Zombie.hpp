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
	Zombie();
	//Destructor
	~Zombie();
	//Public methods
	void	announce(void)const;
	void	set_name(std::string name);

	private:
		std::string _name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
