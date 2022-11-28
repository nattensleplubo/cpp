/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 11:11:38 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/26 11:20:35 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string	theString = "HI THIS IS BRAIN";
	std::string	*stringPTR = &theString;
	std::string &stringREF = theString;

	std::cout << &theString << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl << std::endl;
	
	std::cout << theString << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}