/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:38:12 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 18:48:45 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAX_HPP

# define MAX_HPP

template<typename T> T	&max(T &a, T&b)
{
	if (a == b)
		return (b);
	else if (a > b)
		return (a);
	return (b);
}

#endif