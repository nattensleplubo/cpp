/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:16:00 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 16:04:40 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "detectType.hpp"

bool	ft_ischar(std::string str)
{
	if (str.size() == 1 && !isdigit(str[0]))
		return (true);
	else
		return (false);	
}

bool	ft_isint(std::string str)
{
	int j=0;
	for (int i = 0; str[i] && (str[i] != '+' || str[i] != '-'); i++)
		;
	while (str[j])
	{
		if (!isdigit(str[j]))
			return (false);
		j++;
	}
	return (true);
}

bool	ft_isfloat(std::string str)
{
	int i = 0;
	int dots = 0;

	while (str[i]&& (str[i] == '+' || str[i] == '-')) 
		i++;
	while (str[i] && (isdigit(str[i]) || str[i] == '.'))
	{
		if(str[i] == '.')
			dots++;
		i++;
	}
	if(str[i] && str[str.length() - 1] == 'f' && isdigit(str[i - 1]) && dots < 2)
		return (true);
	else
		return (false);
	
}

bool	ft_isdouble(std::string str)
{
	int i = 0;

	while (str[i]&& (str[i] == '+' || str[i] == '-')) 
		i++;
	while (str[i] && isdigit(str[i]))
		i++;
	if(str[i] && str[i] == '.')
		i++;
	else
		return(false);
	while (str[i])
	{
		if(!isdigit(str[i]))
			return(false);
		i++;
	}
	if(str[str.length() -1] == '.')
		return (false);
	return (true);
}

int	detectType(std::string str)
{
	int	type = -1;
	
	if (ft_ischar(str))
		type = CHAR;
	else if (ft_isint(str))
		type = INT;
	else if (ft_isfloat(str))
		type = FLOAT;
	else if (ft_isdouble(str))
		type = DOUBLE;
	return (type);
}

bool	is_special_type(std::string str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff")
		return (true);
	else
		return (false);
}