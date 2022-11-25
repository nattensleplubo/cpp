/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:22:58 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/25 23:49:59 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name)
{
	Zombie *newZ;

	newZ = new Zombie(name);
	return (newZ);
}

void randomChump( std::string name )
{
	Zombie rando(name);
	rando.announce();
}

int	main(void)
{
	Zombie *newGuy;

	newGuy = newZombie("HEAP");
	randomChump("STACK");
	delete newGuy;
}