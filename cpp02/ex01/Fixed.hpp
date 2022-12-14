/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 14:01:41 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/15 13:21:22 by ngobert          ###   ########.fr       */
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

		int 	getRawBits( void ) const;
		void	setRawBits( int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed &rhs);

#endif