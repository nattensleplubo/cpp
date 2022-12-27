
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " : FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << _name << " : FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& rhs) : ClapTrap(rhs)
{
	std::cout << _name << " : FragTrap Copy Constructor Called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& rhs)
{
	ClapTrap::operator=(rhs);
	std::cout << _name << " : FragTrap Copy Assignment Called" << std::endl;
	return (*this);
}

FragTrap ::~FragTrap(void)
{
	std::cout << _name << " : FragTrap Constructor Called" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
	std::cout  << "FragTrap " << _name << " HIGH FIVES GUYS" << std::endl;
}