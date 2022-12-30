/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:53:29 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/28 18:36:25 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << _type << " : default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << _type << " : copy constructor called" << std::endl;	
}

Dog & Dog::operator=(const Dog& rhs)
{
	Animal::operator=(rhs);
	std::cout << _type << " : assignment constructor called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	std::cout << _type << " : default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog woof" << std::endl;
}