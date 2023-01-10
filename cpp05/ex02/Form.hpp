/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:47:23 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/10 16:52:39 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <stdlib.h>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		bool				 _signed;
		int const			 _gradeToSign;
		int const			 _gradeToExec;
	public:
		virtual ~Form();
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(Form const &rhs);
		Form	&operator=(Form const &rhs);

		void				beSigned(Bureaucrat const &rhs);
		void				signForm(Bureaucrat const &rhs);
		std::string const	&getName() const;
		int					getGradeToSign() const;
		int					getGradeToExec() const;
		bool				getSigned() const;
		bool				checkExecRequirements(Bureaucrat const &buro, Form const &form) const;
		bool				checkSignRequirements(Bureaucrat const &buro, Form const &form) const;

		virtual void execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class AlreadySigned : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
		
		class NotSignedYet : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif