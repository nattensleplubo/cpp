/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:49:15 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/28 18:32:41 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("No type")
{
	std::cout << "Animal created with default constructor" << std::endl;
}

Animal::Animal(const Animal &src)
{
	_type = src._type;
	std::cout << "Animal created with copy constructor" << std::endl;
}

Animal& Animal::operator=(const Animal &src)
{
	_type = src._type;
	std::cout << "Animal created with assignation operator" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destroyed with default constructor" << std::endl;
}

const std::string &Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "The animal makes a silly little sound" << std::endl;
}