/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:18 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/02 18:42:54 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "PhoneBook.hpp"
#include "colors.h"

void	make_contact(PhoneBook *phonebook, std::string *input)
{
	int	nb_contacts;

	nb_contacts = phonebook->getNbOfContacts();
	phonebook->setContact(input, nb_contacts);
	phonebook->setNbOfContacts();
}

void	do_add(PhoneBook *phonebook)
{
	std::string	input[5];
	
	while (input[0].size() == 0)
	{
		std::cout << "First name : ";
		if (!std::getline(std::cin, input[0]))
			return ;
	}
	while (input[1].size() == 0)
	{
		std::cout << "Last name : ";
		if (!std::getline(std::cin, input[1]))
			return ;
	}
	while (input[2].size() == 0)
	{
		std::cout << "Nickname : ";
		if (!std::getline(std::cin, input[2]))
			return ;
	}
	while (input[3].size() == 0)
	{
		std::cout << "Phone number : ";
		if (!std::getline(std::cin, input[3]))
			return ;
	}
	while (input[4].size() == 0)
	{
		std::cout << "Darkest Secret : ";
		if (!std::getline(std::cin, input[4]))
			return ;
	}
	make_contact(phonebook, input);
}

void	do_command(std::string input, PhoneBook *phonebook)
{
	if (input == "ADD")
		do_add(phonebook);
	else if (input == "SEARCH")
	{
		phonebook->print_contacts();
	}
	else if (input == "EXIT")
		std::exit(0);
	else
		std::cout << "Command not found." << std::endl;
}

int	main(void)
{
	std::string	input;
	PhoneBook	phonebook;
	
	while (input != "EXIT")
	{
		std::cout << RED << "Phonebook >> " << CRESET;
		if (!std::getline(std::cin, input))
		{
			std::cout << "Bye bye ;)" << std::endl;
			return (0);
		}
		do_command(input, &phonebook);
	}
}
