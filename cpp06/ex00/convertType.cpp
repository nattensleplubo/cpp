/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:53:07 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 16:06:12 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convertType.hpp"

void	convert_to_char(std::string str)
{
	std::cout << "char : "<<static_cast<char>(str[0]) << std::endl;
	std::cout << "int : "<<static_cast<int>(str[0]) << std::endl;
	std::cout << "float : "<<static_cast<float>(str[0]) << std::endl;
	std::cout << "double : "<<static_cast<double>(str[0]) << std::endl;
}

void	convert_to_int(std::string str)
{
	double nbr = std::stod(str.c_str(), NULL);

	if (nbr < 33 || nbr > 126)
		std::cout << "char : Non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(nbr) << std::endl;
	if (nbr > INT_MAX || nbr < INT_MIN)
		std::cout << "int : Non displayable" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nbr) << std::endl;
	if (nbr > FLT_MAX || nbr < FLT_MIN)
		std::cout << "float : Non displayable" << std::endl;
	else
		std::cout << "float : " << static_cast<float>(nbr) << std::endl;
	if (nbr > DBL_MAX || nbr < DBL_MIN)
		std::cout << "double : Non displayable" << std::endl;
	else
		std::cout << "double : " << static_cast<double>(nbr) << std::endl;
}


void convert_to_float(std::string str)
{
	double nbr = strtod(str.c_str(), NULL);

	if (nbr < 33 || nbr > 126)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(nbr) << std::endl;
	if(nbr > INT_MAX || nbr < INT_MIN)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nbr) << std::endl;
	if((nbr < FLT_MIN || nbr > FLT_MAX) && nbr != 0)
	{
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : " << static_cast<double>(nbr) << std::endl;
	}
	else if ((nbr == 0 || static_cast<float>(nbr) / static_cast<int>(nbr) == 1) && nbr > 1000000 && nbr < -1000000)
	{
		std::cout << "float : " << static_cast<float>(nbr) << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(nbr)  << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << nbr << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(nbr) << std::endl;
	}
}

void convert_to_double(std::string str)
{
	double nbr = strtod(str.c_str(), NULL);

	if (nbr < 33 || nbr > 126)
		std::cout << "char : non displayable" << std::endl;
	else
		std::cout << "char : " << static_cast<char>(nbr) << std::endl;
	if(nbr > INT_MAX || nbr < INT_MIN)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(nbr) << std::endl;
	if((nbr < FLT_MIN || nbr > FLT_MAX) && nbr != 0)
	{
		std::cout << "float : impossible" << std::endl;
		std::cout << "double : " << static_cast<double>(nbr) << std::endl;
	}
	else if ((nbr == 0 || static_cast<float>(nbr) / static_cast<int>(nbr) == 1) && nbr > 1000000 && nbr < -1000000)
	{
		std::cout << "float : " << static_cast<float>(nbr) << ".0f" << std::endl;
		std::cout << "double : " << nbr << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " << static_cast<float>(nbr) << "f" << std::endl;
		std::cout << "double : " << nbr << std::endl;
	}
}

void	do_special_type(std::string str)
{
	if(str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << str[0] << "inff" << std::endl;
		std::cout << "double : " << str[0] << "inf" << std::endl;
		return ;
	}
	if(str == "nan" || str == "nanf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << "nanf" << std::endl;
		std::cout << "double : " << "nan" << std::endl;
		return ;
	}
	return ;
}