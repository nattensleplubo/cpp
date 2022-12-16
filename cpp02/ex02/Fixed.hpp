/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:01:41 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/16 16:59:51 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_raw_val;
		static const int	_bits_val = 8;
	public:
		Fixed();
		Fixed(const Fixed &fixd);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		Fixed& operator=(const Fixed &fixd);

		bool	operator>(const Fixed& rhs);
		bool	operator<(const Fixed& rhs);
		bool	operator>=(const Fixed& rhs);
		bool	operator<=(const Fixed& rhs);
		bool	operator==(const Fixed& rhs);
		bool	operator!=(const Fixed& rhs);

		Fixed	operator+(const Fixed& rhs);
		Fixed	operator-(const Fixed& rhs);
		Fixed	operator*(const Fixed& rhs);
		Fixed	operator/(const Fixed& rhs);

		Fixed&	operator++();
		Fixed&	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);

		int 	getRawBits( void ) const;
		void	setRawBits( int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		static Fixed & min(const Fixed& fxt1, const Fixed& fxt2);
		static Fixed & min(Fixed& fxt1, Fixed& fxt2);
		static Fixed & max(const Fixed& fxt1, const Fixed& fxt2);
		static Fixed & max(Fixed& fxt1, Fixed& fxt2);
};

std::ostream& operator<<(std::ostream &os, const Fixed &rhs);

#endif