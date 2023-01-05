/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:53:21 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/05 10:58:51 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	this->_brain = new Brain();
	std::cout << _type << " : default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : AAnimal(src)
{
	std::cout << _type << " : copy constructor called" << std::endl;	
}

Cat & Cat::operator=(const Cat& rhs)
{
	AAnimal::operator=(rhs);
	std::cout << _type << " : assignment constructor called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << _type << " : default destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "Cat meow" << std::endl;
}