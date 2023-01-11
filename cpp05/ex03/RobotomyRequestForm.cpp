/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:10:07 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/10 17:04:13 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm contructor called for" << _target << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45), _target("default")
{
	std::cout << "RobotomyRequestForm default contructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src), _target(src._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	_target = rhs._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->checkExecRequirements(executor, *this))
		throw ;
	else
	{
		std::cout << "*LOUD BRUIT DE PERCEUSE FROM " << executor.getName() << " AND " << this->getName() << " *" << std::endl;
		if (rand() % 100 > 50)
			std::cout << _target << " has been robotomized succesfully !!" << std::endl;
		else
			std::cout << _target << "'s robotmy failed..." << std::endl;
	}
}
