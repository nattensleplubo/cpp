/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 13:47:23 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/06 13:59:00 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP

# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string const	_name;
		bool				 _signed;
		int const			 _gradeToSign;
		int const			 _gradeToExec;
	public:
		~Form();
		Form(std::string name, int gradeToSign, int gradeToExec);
		Form(Form const &rhs);
		Form	&operator=(Form const &rhs);

		void	beSigned(Bureaucrat const &rhs);
		void	signForm(Bureaucrat const &rhs) const;

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
};

std::ostream	&operator<<(std::ostream &o, Form const &rhs);

#endif