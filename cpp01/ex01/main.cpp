/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 08:59:57 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/26 11:09:38 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	Zombie	*horde = zombieHorde(5, "John doe");

	for (int i = 0; i < 5; i++)
		horde[i].announce();
	
	delete [] horde;
}