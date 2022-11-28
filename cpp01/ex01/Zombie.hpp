/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 08:56:27 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/26 10:45:32 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	Zombie(std::string name);
	~Zombie();

	void	setName(std::string name);
	void	announce(void);
};

Zombie*    zombieHorde( int N, std::string name );

#endif