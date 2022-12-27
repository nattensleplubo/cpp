/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 16:43:25 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/25 13:27:23 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ScavTrap robot("SCAVTRAP");
	ScavTrap bis(robot);
	FragTrap fragrobot("FRAGRAP");

	bis = robot;
	
	robot.attack("test");
	robot.attack("haha");
	fragrobot.highFiveGuys();
	robot.takeDamage(5);
	robot.beRepaired(10);
	robot.takeDamage(50);
	robot.takeDamage(50);
	robot.beRepaired(10);
	robot.attack("bladee");
	robot.guardGate();
	
	return (0);
}