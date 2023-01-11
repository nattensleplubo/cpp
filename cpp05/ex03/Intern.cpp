/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:48:13 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/11 17:39:46 by ngobert          ###   ########.fr       */
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

Form	*Intern::makePresidentialForm(std::string target)
{
	Form *form = new PresidentialPardonForm(target);
	return (form);
}

Form	*Intern::makeRobotomyForm(std::string target)
{
	Form *form = new RobotomyRequestForm(target);
	return (form);
}

Form	*Intern::makeShrubberyForm(std::string target)
{
	Form *form = new ShrubberyCreationForm(target);
	return (form);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form	*ret;
	int i = 0;
	Form* (Intern::*f[3])(std::string) = {&Intern::makeShrubberyForm, &Intern::makeRobotomyForm, &Intern::makePresidentialForm };
	std::string formtab[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	try
	{
		while (i < 3)
		{
			if (name == formtab[i])
			{
				ret = (this->*f[i])(target);
				std::cout << "Intern created" << ret->getName() << std::endl;
				return (ret);
			}
			i++;
		}
		throw
			Intern::NoMatchingForm();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error with " << name << e.what() << std::endl;
		return (NULL);
	}
	
}

const char* Intern::NoMatchingForm::what() const throw()
{
	return "No matching form";
}