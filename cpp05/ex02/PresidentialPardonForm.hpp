/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:22:05 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/10 16:30:41 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#ifndef PRESIDENTIALPARDONFORM_HPP

# define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm : virtual public Form
{
private:
	std::string _target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &src);
	PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
	
	virtual ~PresidentialPardonForm();

	virtual void execute(Bureaucrat const & executor) const;
	
};

#endif