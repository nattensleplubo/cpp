/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:43:25 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/23 18:25:56 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap robot("zizou");
	ScavTrap bis(robot);

	bis = robot;
	
	robot.attack("zazou");
	robot.attack("zazou");
	
	robot.takeDamage(5);
	robot.beRepaired(10);
	robot.takeDamage(50);
	robot.takeDamage(50);
	robot.beRepaired(10);

	robot.attack("zazou");
	robot.guardGate();
	
	return (0);
}