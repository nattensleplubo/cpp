/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 16:36:38 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 16:07:43 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "detectType.hpp"
#include "convertType.hpp"

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		std::string str(argv[1]);
		int type = -1;

		type = detectType(str);
		if (is_special_type(str))
		{
			do_special_type(str);
			return (0);
		}
		switch (type)
		{
			case CHAR :
				convert_to_char(str);
				break ;
			case INT :
				convert_to_int(str);
				break ;
			case FLOAT :
				convert_to_float(str);
				break ;
			case DOUBLE : 
				convert_to_double(str);
				break ;
			default :
				std::cout << "Impossible" << std::endl;
				break ;
		}
	}
	else
		std::cout << "Wrong number of arguments" << std::endl;
}