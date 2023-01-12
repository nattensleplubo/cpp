/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   min.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:38:14 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 18:50:14 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MIN_HPP

# define MIN_HPP

template<typename T> T	&min(T &a, T&b)
{
	if (a == b)
		return (b);
	else if (a < b)
		return (a);
	return (b);
}

#endif