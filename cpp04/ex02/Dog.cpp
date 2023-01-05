/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:53:29 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/05 10:58:43 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "AAnimal.hpp"

Dog::Dog()
{
	_type = "Dog";
	this->_brain = new Brain();
	std::cout << _type << " : default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : AAnimal(src)
{
	std::cout << _type << " : copy constructor called" << std::endl;	
}

Dog & Dog::operator=(const Dog& rhs)
{
	AAnimal::operator=(rhs);
	std::cout << _type << " : assignment constructor called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << _type << " : default destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Dog woof" << std::endl;
}