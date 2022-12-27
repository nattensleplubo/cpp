/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:48:34 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/23 18:24:40 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << " constructor called (he has been asigned Default as a name" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	*this = clap;
	std::cout << this->_name << " copy construcotr called" << std::endl; 
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	this->_name = clap._name;
	this->_attackDamage = clap._attackDamage;
	this->_energyPoints = clap._energyPoints;
	this->_hitPoints = clap._hitPoints;
	return (*this);
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << _name << " constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << _name << " destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " cannot attack, he's dead !" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " cannot attack, he's out of energy !" << std::endl;
		return ;
	}
	std::cout << this->_name << " attacked " << target << " dealing " << this->_attackDamage << " damage !" << std::endl;
	this->_energyPoints--;
}


void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " cannot heal, he's dead !" << std::endl;
		return ;
	}
	if (this->_energyPoints <= 0)
	{
		std::cout << this->_name << " cannot heal, he's out of energy !" << std::endl;
		return ;
	}
	std::cout << this->_name << " is healing itself for " << amount << " of hit points" << std::endl;
	this->_energyPoints--;
	this->_hitPoints += amount;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << this->_name << " is already dead, stop !" << std::endl;
		return ;
	}
	this->_hitPoints = this->_hitPoints - amount;
}