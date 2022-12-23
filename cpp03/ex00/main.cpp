/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 15:46:44 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/21 17:21:27 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap kiki("kiki");

	kiki.attack("bob");
	kiki.takeDamage(5);
	kiki.beRepaired(3);
	kiki.takeDamage(30);
	kiki.attack("bob");
	kiki.beRepaired(5);

	return (0);
}