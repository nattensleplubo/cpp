/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:26:13 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/09 18:53:41 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP

# define BUREAUCRAT_HPP 

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &rhs);
		Bureaucrat& operator=(const Bureaucrat &rhs);
		~Bureaucrat();

		std::string const	&getName() const;
		int					getGrade() const;

		void				incrementGrade();
		void				decrementGrade();

		void				signForm(Form &form) const;

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

std::ostream	&operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif
