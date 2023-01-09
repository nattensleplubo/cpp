/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:46:58 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/06 17:13:08 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign < 1 || gradeToExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

Form::Form(Form const &rhs) : _name(rhs._name), _signed(rhs._signed), _gradeToSign(rhs._gradeToSign), _gradeToExec(rhs._gradeToExec)
{
	*this = rhs;
}

Form &Form::operator=(Form const &rhs)
{
	if (this != &rhs)
	{
		_signed = rhs._signed;
	}
	return *this;
}

void	Form::beSigned(Bureaucrat const &rhs)
{
	if (rhs.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	else
		_signed = true;
}

void	Form::signForm(Bureaucrat const &rhs)
{
	try
	{
		beSigned(rhs);
		std::cout << rhs.getName() << " signs " << _name << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << rhs.getName() << " cannot sign " << _name << " because " << e.what() << std::endl;
	}
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::string const	&Form::getName() const
{
	return (this->_name);
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form " << rhs.getName() << " is " << (rhs.getSigned() ? "" : "not ") << "signed and requires a grade of " << rhs.getGradeToSign() << " to sign and a grade of " << rhs.getGradeToExec() << " to execute." << std::endl;
	return o;
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExec() const
{
	return (this->_gradeToExec);
}

bool	Form::getSigned() const
{
	return (this->_signed);
}