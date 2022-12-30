/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:53:21 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/28 18:35:27 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << _type << " : default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << _type << " : copy constructor called" << std::endl;	
}

Cat & Cat::operator=(const Cat& rhs)
{
	Animal::operator=(rhs);
	std::cout << _type << " : assignment constructor called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	std::cout << _type << " : default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat meow" << std::endl;
}