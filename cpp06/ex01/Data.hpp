/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:43:27 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 16:44:50 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP

# define DATA_HPP

class Data
{
	private:
		int _n;
	public:
		Data();
		Data(int n);
		Data(Data const &src);
		Data &operator=(Data const &src);
		
		int getN() const;
		void setN(int n);
		~Data();
};


#endif 