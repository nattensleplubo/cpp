/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 18:58:19 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 19:04:22 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP

# define ITER_HPP

template <typename T> void	iter(T arr[], int len, T (*f)(T))
{
	for (int i = 0; i < len; i++)
	{
		arr[i] = f(arr[i]);
	}
}

#endif