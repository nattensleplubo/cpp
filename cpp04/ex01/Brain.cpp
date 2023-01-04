/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:30:39 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/30 16:59:59 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::Brain(const Brain& src)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
}

Brain & Brain::operator=(const Brain& rhs)
{
	std::cout << "Brain assignment constructor called" << std::endl;
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

std::string Brain::getIdea(int i) const
{
	if (i < 0 || i > 99)
	{
		std::cout << "Index out of range" << std::endl;
		return ("");
	}
	else
		return (_ideas[i]);
}

void Brain::setIdea(int i, std::string idea)
{
	if (i < 0 || i > 99)
		std::cout << "Index out of range" << std::endl;
	else
		_ideas[i] = idea;
}
