/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:18 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/03 16:47:33 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"
#include "colors.h"

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
}

void	do_command(std::string input, PhoneBook *phonebook)
{
	if (input == "ADD")
		do_add(phonebook);
	else if (input == "SEARCH")
		std::cout << "SEARCH" << std::endl;
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
