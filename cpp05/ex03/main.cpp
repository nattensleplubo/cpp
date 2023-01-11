/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/04 12:26:11 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/11 16:26:16 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat boss("Elon", 1);
	std::cout << boss;
	Bureaucrat sousfifre("Paul",150);
	std::cout << sousfifre;
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "----SHRUBBERYCREATIONFORM TEST-----"<< std::endl;
	ShrubberyCreationForm formShub("TREE");
	std::cout << formShub;
	boss.executeForm(formShub);
	boss.signForm(formShub);
	boss.executeForm(formShub);
	sousfifre.signForm(formShub);
	sousfifre.executeForm(formShub);
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "----ROBOTOMYREQUESTFORM TEST-----"<< std::endl;
	RobotomyRequestForm  formRobot("Population");
	std::cout << formRobot;
	boss.executeForm(formRobot);
	boss.signForm(formRobot);
	boss.executeForm(formRobot);
	sousfifre.signForm(formRobot);
	sousfifre.executeForm(formRobot);
	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "----PRESIDENTIALPARDONFORM TEST-----"<< std::endl;
	PresidentialPardonForm formPrez("Nobody");
	PresidentialPardonForm test;
	test = formPrez;
	std::cout << test << std::endl;
	std::cout << formPrez;
	boss.executeForm(formPrez);
	boss.signForm(formPrez);
	boss.executeForm(formPrez);
	sousfifre.signForm(formPrez);
	sousfifre.executeForm(formPrez);
	return (0);
}