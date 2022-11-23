/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:18 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/23 13:11:19 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "colors.h"

void	make_contact(PhoneBook *phonebook, std::string *input)
{
	int	nb_contacts;

	nb_contacts = phonebook->getNbOfContacts();
	std::cout << nb_contacts << std::endl;
	phonebook->setContact(input, nb_contacts);
	phonebook->setNbOfContacts();
}

void	do_add(PhoneBook *phonebook)
{
	std::string	input[5];

	std::cout << "First name : ";
	std::getline(std::cin, input[0]);
	std::cout << "Last name : ";
	std::getline(std::cin, input[1]);
	std::cout << "Nickname : ";
	std::getline(std::cin, input[2]);
	std::cout << "Phone number : ";
	std::getline(std::cin, input[3]);
	std::cout << "Darkest Secret : ";
	std::getline(std::cin, input[4]);
	make_contact(phonebook, input);
}

void	do_command(std::string input, PhoneBook *phonebook)
{
	if (input == "ADD")
		do_add(phonebook);
	else if (input == "SEARCH")
		phonebook->print_contacts();
	else if (input == "EXIT")
		exit (0);
	else
		std::cout << "Command not found." << std::endl;
}

int	main(void)
{
	std::string	input;
	PhoneBook	phonebook;
	
	while (1)
	{
		std::cout << RED << "Phonebook >> " << CRESET;
		std::getline(std::cin, input);
		do_command(input, &phonebook);
	}
}
