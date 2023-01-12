/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convertType.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:52:41 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 16:06:33 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTTYPE_HPP

# define CONVERTTYPE_HPP

#include <iostream>
#include <limits.h>
#include <float.h>
#include <string>
#include <stdlib.h>

void	convert_to_char(std::string str);
void	convert_to_int(std::string str);
void	convert_to_float(std::string str);
void	convert_to_double(std::string str);
void	do_special_type(std::string str);

#endif