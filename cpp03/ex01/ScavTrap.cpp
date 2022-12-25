/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:38:03 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/23 18:24:50 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << _name << " : ScavTrap Constructor Called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << _name << " : ScavTrap Constructor Called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& rhs) : ClapTrap(rhs)
{
	std::cout << _name << " : ScavTrap Copy Constructor Called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << _name << " : ScavTrap Copy Assignment Called" << std::endl;
	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout <<  "ScavTrap " << _name << " attacks " << target<< ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
	else if (_hitPoints <= 0)
		std::cout <<  "ScavTrap " << _name << " is dead" << std::endl;
	else if ( _energyPoints <= 0)
		std::cout <<  "ScavTrap " << _name << " don't have enought energy point to attack" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout  << "ScavTrap " << _name << " is now in Gatekeeper mode." << std::endl;
}