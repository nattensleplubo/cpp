/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:48:13 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/11 16:58:57 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
	return ;
}

Intern::Intern(Intern const &src)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = src;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return (*this);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	std::cout << "Intern creates " << name << std::endl;
}