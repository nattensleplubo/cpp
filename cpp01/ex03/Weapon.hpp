/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 16:48:58 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/27 21:45:11 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	Weapon(void);
	~Weapon(void);
	const std::string &getType(void);
	void setType(std::string str);
};

#endif