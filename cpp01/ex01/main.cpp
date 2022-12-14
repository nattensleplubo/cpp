/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 08:59:57 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/08 14:56:36 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <cstdlib>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Valid arguments type : <numberOfZombiesInHord> <zombiesName>" << std::endl;
		return (0);
	}
	Zombie	*horde = zombieHorde(std::atoi(argv[1]), argv[2]);

	for (int i = 0; i < std::atoi(argv[1]); i++)
		horde[i].announce();
	
	delete [] horde;
}