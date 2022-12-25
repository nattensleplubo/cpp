/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 17:36:44 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/23 17:42:35 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

#ifndef SCAVTRAP_HPP

# define SCAVTRAP_HPP

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const ScavTrap &scav);
		ScavTrap(std::string name);
		ScavTrap &operator=(const ScavTrap& copy);
		~ScavTrap();

		void	guardGate();
		void	attack(const std::string& target);
};

#endif