/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 11:58:38 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/05 12:20:13 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

#include <iostream>
#include <stdlib.h>

class Harl
{
	private:
		void	_debug();
		void	_info();
		void	_warning();
		void	_error();
	public:
		Harl();
		~Harl();

		void	complain(std::string level);
};

#endif