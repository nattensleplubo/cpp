/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   detectType.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 21:16:10 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/11 21:20:30 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DETECTTYPE_HPP

# define DETECTTYPE_HPP

# include <iostream>

# define CHAR 0
# define INT 1
# define FLOAT 2
# define DOUBLE 3

int	detectType(std::string str);

#endif