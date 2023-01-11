/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:48:46 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/11 17:28:13 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &src);
		virtual ~Intern();

		Form *makeForm(std::string name, std::string target);
		Form *makeShrubberyForm(std::string target);
		Form *makeRobotomyForm(std::string target);
		Form *makePresidentialForm(std::string target);
		
		class NoMatchingForm : virtual public std::exception
		{
			public :
				virtual const char* what() const throw();
		};
};

#endif