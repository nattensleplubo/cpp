/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:30:46 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/23 14:55:18 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Contact::setContact(std::string _first_name_, std::string _last_name_, std::string _nickname_, std::string _phone_number_, std::string _darkest_secret_)
{
	this->_first_name_ = _first_name_;
	this->_last_name_ = _last_name_;
	this->_nickname_ = _nickname_;
	this->_phone_number_ = _phone_number_;
	this->_darkest_secret_ = _darkest_secret_;

	return (1);
}

void	Contact::printString(std::string str)
{
	int	i = 0;
	
	if (str.size() < 10)
	{
		while (i++ + str.size() < 10)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		while (i < 9)
		{
			std::cout << str[i];
			i++;
		}
		std::cout << ".";
	}
}

void	Contact::print_self(int i)
{
	std::cout << "|          |          |          |          |" << std::endl;
	std::cout << "|     " << i << "    |";
	printString(this->_first_name_);
	std::cout << "|";
	printString(_last_name_);
	std::cout << "|";
	printString(_nickname_);
	std::cout << "|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
}
