/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:21:10 by eraynald          #+#    #+#             */
/*   Updated: 2022/10/17 17:21:38 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void wrong_input(void)
{
	std::cout << "ERROR: wrong input"<<std::endl;
	std::cout << "You have 3 options: add, search, exit"<<std::endl;
}

void show_privew(PhoneBook page[8])
{
	std::cout << std::right << std::setw(10) << "Index";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "First Name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Last Name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Nick Name";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Cell Phone";
	std::cout << "|";
	std::cout << std::right << std::setw(10) << "Secret";
	std::cout << std::endl;
	
	for(int i=0; i<8; i++)
	{
		page[i].print_privew(i);
	}
}

void select_index(PhoneBook page[8])
{
	int select_index;
	std::string input_index;
	std::stringstream ss;

	std::cout << "Select index : ";
	std::getline(std::cin, input_index);
	
	ss << input_index;
	ss >> select_index;
	
	if (0 <= select_index && select_index <= 8 && ss.fail() == false)
		page[select_index].print_page();
	else
		std::cout << "This is an unauthorized number." << std::endl;
}

int main(void)
{
	std::string command;
	PhoneBook page[8];
	int idx = 0;

	while(std::getline(std::cin, command)) 
	{
		if (command.compare("exit") == 0)
			exit(0);
		else if (command.compare("add") == 0)
		{
			idx %= 8;
			page[idx].input_contact(idx);
			idx++;
		}
		else if (command.compare("search") == 0)
		{
			show_privew(page);
			select_index(page);
		}
		else
			wrong_input();
	}
	return 0;
}
