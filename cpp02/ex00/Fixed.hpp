/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 13:42:58 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/08 13:20:35 by ngobert          ###   ########.fr       */
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
		~Fixed();
		Fixed& operator=(const Fixed &fixd);

		int 	getRawBits( void ) const;
		void	setRawBits( int const raw);
};



#endif