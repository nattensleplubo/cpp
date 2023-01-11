/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 12:04:40 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/10 16:31:14 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

#ifndef ROBOTOMYREQUESTFORM_HPP

# define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm : virtual public Form
{
private:
	std::string _target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &src);
	RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
	
	virtual ~RobotomyRequestForm();

	virtual void execute(Bureaucrat const & executor) const;
};

#endif