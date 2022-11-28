/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 08:57:41 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/26 11:09:47 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
	Zombie	*newZ;
	int		i = 0;

	newZ = new Zombie[N];
	while (i < N)
	{
		newZ[i].setName(name);
		i++;
	}
	return (newZ);
}
