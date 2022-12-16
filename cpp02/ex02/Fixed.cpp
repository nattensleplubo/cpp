/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:01:27 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/16 17:00:39 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed()
{
	this->_raw_val = 0;
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int num)
{
	_raw_val = num << this->_bits_val;
	// std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num)
{
	// std::cout << "Float constructor called" << std::endl;
	_raw_val = roundf(num *(1 << _bits_val));
}

Fixed::Fixed(const Fixed &fixd)
{
	*this = fixd;
	// std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed &Fixed::operator=(const Fixed &fixd)
{
	if (this != &fixd)
		this->_raw_val = fixd.getRawBits();
	// std::cout << "Copy assignement operator called" << std::endl;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (this->_raw_val);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "setRawBits member function called" << std::endl;
	this->_raw_val = raw;
}

float	Fixed::toFloat(void)const
{
	return (this->_raw_val / (float)(1 << _bits_val));
}

int	Fixed::toInt(void) const
{
	return (this->_raw_val >> _bits_val);
}

std::ostream & operator<<(std::ostream &os, const Fixed &rhs)
{
	os << rhs.toFloat();
	return (os);
};


//! OPERATOR OVERLOADS

bool Fixed::operator>(const Fixed& rhs)
{
	return (this->_raw_val > rhs._raw_val);
}

bool Fixed::operator<(const Fixed& rhs)
{
	return (this->_raw_val < rhs._raw_val);
}

bool Fixed::operator>=(const Fixed& rhs)
{
	return (this->_raw_val >= rhs._raw_val);
}

bool Fixed::operator<=(const Fixed& rhs)
{
	return (this->_raw_val <= rhs._raw_val);
}

bool Fixed::operator==(const Fixed& rhs)
{
	return (this->_raw_val == rhs._raw_val);
}

bool Fixed::operator!=(const Fixed& rhs)
{
	return (this->_raw_val != rhs._raw_val);
}

//!##########################################

Fixed	Fixed::operator+(const Fixed& rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

//! ###############################################

Fixed&	Fixed::operator++()
{
	Fixed	tmp;

	tmp.setRawBits(1);
	*this = *this + tmp;
	
	return *this;
}

Fixed&	Fixed::operator--()
{
	Fixed tmp;
	
	tmp.setRawBits(1);
	*this = *this - tmp;

	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp;
	Fixed retour(*this);

	tmp.setRawBits(1);
	*this = *this + tmp;
	return retour;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp;
	Fixed retour(*this);

	tmp.setRawBits(1);
	*this = *this - tmp;
	return retour;
}

Fixed & Fixed::min(const Fixed& fxt1, const Fixed& fxt2)
{
	if ((Fixed)fxt1 < (Fixed)fxt2)
		return ((Fixed &)fxt1);
	else
		return ((Fixed &)fxt2);
}

Fixed & Fixed::min(Fixed& fxt1, Fixed& fxt2)
{
	if (fxt1 < fxt2)
		return (fxt1);
	else
		return (fxt2);
}

Fixed & Fixed::max(const Fixed& fxt1, const Fixed& fxt2)
{
	if ((Fixed)fxt1 < (Fixed)fxt2)
		return ((Fixed &)fxt2);
	else
		return ((Fixed &)fxt1);
}

Fixed & Fixed::max(Fixed& fxt1, Fixed& fxt2)
{
	if (fxt1 < fxt2)
		return (fxt2);
	else
		return (fxt1);
}
