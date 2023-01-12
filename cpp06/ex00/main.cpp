/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:36:38 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 13:39:17 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "detectType.hpp"

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		std::string str(argv[1]);
		int type = -1;

		type = detectType(str);
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
}