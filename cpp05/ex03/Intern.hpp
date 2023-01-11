/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:48:46 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/11 16:59:31 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP

# define INTERN_HPP

#include <iostream>
#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern const &src);
		Intern &operator=(Intern const &src);
		virtual ~Intern();

		Form *makeForm(std::string name, std::string target);
};

#endif