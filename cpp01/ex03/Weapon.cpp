/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:00:10 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/26 17:24:04 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Default constructor called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destructor called" << std::endl;
}

const std::string &Weapon::getType(void)
{
	return(this->_type);
}

void	Weapon::setType(std::string str)
{
	this->_type = str;
}