/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:15:18 by ngobert           #+#    #+#             */
/*   Updated: 2022/10/28 19:42:53 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"

void	do_command(std::string input, PhoneBook *phonebook)
{
	if (input == "ADD")
		std::cout << "ADD" << std::endl;
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
