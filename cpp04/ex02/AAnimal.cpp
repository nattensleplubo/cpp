/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:49:15 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/05 11:20:03 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("No type")
{
	std::cout << "AAnimal created with default constructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &src)
{
	_type = src._type;
	std::cout << "AAnimal created with copy constructor" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &src)
{
	_type = src._type;
	std::cout << "AAnimal created with assignation operator" << std::endl;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destroyed with default constructor" << std::endl;
}

const std::string &AAnimal::getType() const
{
	return (_type);
}
