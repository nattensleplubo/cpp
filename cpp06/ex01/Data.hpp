/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:43:27 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 16:55:09 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP

# define DATA_HPP

#include <stdint.h>
#include <iostream>

class Data
{
	private:
		int _n;
	public:
		Data();
		Data(int n);
		Data(Data const &src);
		Data &operator=(Data const &src);
		
		int getValue() const;
		void setValue(int n);
		~Data();
};


#endif 