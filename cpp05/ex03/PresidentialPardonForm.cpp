/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:23:14 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/10 17:07:55 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << "PresidentialPardonForm contructor called for" << _target << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5), _target("default")
{
	std::cout << "PresidentialPardonForm default contructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src), _target(src._target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	_target = rhs._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->checkExecRequirements(executor, *this))
		throw ;
	else
	{
		std::cout << _target << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}