/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 12:31:29 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/05 12:36:24 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;
	
	if (argc != 2)
	{
		std::cout << "Arguments error" << std::endl;
		return (1);
	}
	else
	{
		harl.complain(argv[1]);
	}
}