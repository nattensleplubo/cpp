/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:20:55 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/25 23:24:16 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::Zombie(std::string name) : _name(name)
{
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << this->_name << " just died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}