/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook1.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eraynald <eraynald@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:21:26 by eraynald          #+#    #+#             */
/*   Updated: 2022/10/17 17:21:29 by eraynald         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void PhoneBook::input_contact (int id)
{
	idx = id;
	std::cout << "First name : ";
	std::getline(std::cin, first_name);
	std::cout << "Last name : ";
	std::getline(std::cin, last_name);
	std::cout << "Nick name : ";
	std::getline(std::cin, nick_name);
	std::cout << "Phone number : ";
	std::getline(std::cin, phone_number);
	std::cout << "darkest secret... : ";
	std::getline(std::cin, darkest_secret);
}

void PhoneBook::print_page (void) const
{
	std::cout << "First name : " << first_name << std::endl;
	std::cout << "Last name : " << last_name << std::endl;
	std::cout << "Nick name : " << nick_name << std::endl;
	std::cout << "Phone number : " << phone_number << std::endl;
	std::cout << "Darkest secret : " << darkest_secret << std::endl;
}

void PhoneBook::print_column(std::string text) const
{
	if (text.length() <= 10)
		std::cout << std::right << std::setw(10) << text;
	else
	{
		text = text.substr(0,9)+".";
		std::cout<<std::right << std::setw(10) << text;
	}
}

void PhoneBook::print_privew(int index) const
{
	print_column(std::to_string(index));
	std::cout<<"|";
	print_column(first_name);
	std::cout<<"|";
	print_column(last_name);
	std::cout<<"|";
	print_column(nick_name);
	std::cout<<"|";
	print_column(phone_number);
	std::cout<<"|";
	print_column(darkest_secret);
	std::cout<<std::endl;
}
