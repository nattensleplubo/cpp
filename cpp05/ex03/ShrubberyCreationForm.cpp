/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 19:16:01 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/10 16:56:53 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm ::ShrubberyCreationForm () : Form("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "Default shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Shrubbery constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src), _target(src._target)
{
	std::cout << "Shrubbery copy constructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	std::cout << "Shrubbery assignation constructor called" << std::endl;
	_target = rhs._target;
	return (*this);
}

ShrubberyCreationForm ::~ShrubberyCreationForm ()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!this->checkExecRequirements(executor, *this))
		throw ;
	else
	{
		std::string filename = _target + "_shrubbery";
		std::ofstream file(filename.c_str());
		file << "       _-_"  << std::endl;
		file << "    /~~   ~~\\"  << std::endl;
		file << " /~~         ~~\\"  << std::endl;
		file << "{               }"  << std::endl;
		file << "\\  _-     -_  /"  << std::endl;
		file << "   ~  \\ //  ~"  << std::endl;
		file << "_- -   | | _- _"  << std::endl;
		file << "  _ -  | |   -_"  << std::endl;
		file << "      // \\"  << std::endl;
		file.close();
		std::cout << executor.getName() << " execute " << this->getName() << std::endl;
	}
}