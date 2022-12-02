/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:30:46 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/02 13:35:31 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
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

void	Contact::printAllInfos()
{
	std::cout << "First name : " << this->_first_name_ << std::endl;
	std::cout << "Last name : " << this->_last_name_ << std::endl;
	std::cout << "Nickname : " << this->_nickname_ << std::endl;
	std::cout << "Phone number : " << this->_phone_number_ << std::endl;
	std::cout << "Darkest secret : " << this->_darkest_secret_ << std::endl;
}

int	Contact::contactExists()
{
	if (this->_first_name_.size() != 0)
		return (1);
	else
		return (0);
}