/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:11:57 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/05 12:36:07 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	typedef void(Harl::*func)(void);

	func funcs[4] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*funcs[i])();
			return ;
		}
	}
	std::cout << "Command not found." << std::endl;
}

void	Harl::_debug(void)
{
	std::cout << "Debug message" << std::endl;
	return ;
}

void	Harl::_info(void)
{
	std::cout << "Info message" << std::endl;
	return ;
}

void	Harl::_warning(void)
{
	std::cout << "Warning message" << std::endl;
	return ;
}

void	Harl::_error(void)
{
	std::cout << "Error message" << std::endl;
	return ;
}

Harl::Harl()
{
	return ;
}

Harl::~Harl()
{
	return ;
}