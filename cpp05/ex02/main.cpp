/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:26:11 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/09 14:39:59 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	Bureaucrat boss("Elon", 1);
	std::cout << boss;
	
	Bureaucrat sousfifre("Paul",150);
	std::cout << sousfifre;

	Form form42("NOC", 25, 60);
	std::cout << form42;
	boss.signForm(form42);
	sousfifre.signForm(form42);

	return (0);
}

// Why isnt my code compiling?
// 