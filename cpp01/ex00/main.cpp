/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 23:22:58 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/08 14:52:40 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie(std::string name);
void randomChump( std::string name );

int	main(void)
{
	Zombie *newGuy;

	newGuy = newZombie("HEAP");
	newGuy->announce();
	randomChump("STACK");
	delete newGuy;
}