/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 19:04:28 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 19:05:15 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Iter.hpp"
#include <iostream>

int	addOne(int nbr)
{
	nbr++;
	return(nbr);
}

char	upperCase(char c)
{
	c -= 32;
	return(c);
}

int main()
{
	int nbr[4] = {0, 1, 2, 3};

	iter<int>(nbr, 4, addOne);
	for(int i = 0; i < 4; i++)
	{
		std::cout << nbr[i] << std::endl;
	}

	char chartest[4] = {'a', 'b', 'c', 'd'};

	iter<char>(chartest, 4, upperCase);
	for(int i = 0; i < 4; i++)
	{
		std::cout << chartest[i] << std::endl;
	}
	
	return (0);
}