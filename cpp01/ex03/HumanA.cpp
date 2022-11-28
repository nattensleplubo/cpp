/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 21:28:36 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/27 21:52:21 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{
	std::cout << "Human A constructor called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Human A destructor called" << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << ": attacks with their " << this->_weapon.getType() <<std::endl;
}