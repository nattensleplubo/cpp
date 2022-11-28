/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:27:14 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/28 11:45:40 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->_number_of_contacts = 0;
	this->_IsPhoneBookfull = 0;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

int	PhoneBook::getNbOfContacts()
{
	return (this->_number_of_contacts);
}

void	PhoneBook::setContact(std::string *input, int nb_contacts)
{
	this->_contacts[nb_contacts].setContact(input[0], input[1], input[2], input[3], input[4]);
}

void	PhoneBook::setNbOfContacts()
{
	if (this->_number_of_contacts == 7 && this->_IsPhoneBookfull == 0)
	{
		this->_IsPhoneBookfull = 1;
		this->_number_of_contacts = 0;
	}
	else if (this->_number_of_contacts == 7 && this->_IsPhoneBookfull == 1)
		this->_number_of_contacts = 0;
	else
		this->_number_of_contacts++;
}

void	PhoneBook::print_contacts()
{
	int	i = 0;
	
	std::cout << " ___________________________________________ " <<  std::endl;
	std::cout << "|          |          |          |          |" <<  std::endl;
	std::cout << "|   INDX   |FIRST NAME| LST NAME | NICKNAME |" <<  std::endl;
	std::cout << "|__________|__________|__________|__________|" <<  std::endl;
	if (this->_IsPhoneBookfull == 0)
	{
		while (i < this->_number_of_contacts)
		{
			this->_contacts[i].print_self(i);
			i++;
		}
	}
	else
	{
		while (i < 8)
		{
			this->_contacts[i].print_self(i);
				i++;
		}
	}
}
