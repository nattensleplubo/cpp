/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:45:49 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 16:55:28 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _n(0)
{
	return ;
}

Data::Data(int n) : _n(n)
{
	return ;
}

Data::Data(Data const &src)
{
	*this = src;
	return ;
}

Data	&Data::operator=(Data const &src)
{
	if (this != &src)
		_n = src.getValue();
	return *this;
}

int		Data::getValue() const
{
	return _n;
}

void	Data::setValue(int n)
{
	_n = n;
}

Data::~Data()
{
	return ;
}

