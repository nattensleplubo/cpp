/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 17:22:43 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 17:57:05 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

Base *generate(void)
{
	time_t t;
	
	srand((unsigned) time(&t));
	int nbr = 1 + (rand() % 100);
	std::cout << "nbr value = " << nbr << std::endl;
	if(nbr <= 33)
	{
		A *p = new A();
		std::cout << "A Class generated" << std::endl;
		return(static_cast<Base *>(p));
	}
	if(nbr > 33 && nbr <= 66)
	{
		B *p = new B();
		std::cout << "B Class generated" << std::endl;
		return(static_cast<Base *>(p));
	}
	if(nbr > 66)
	{
		C *p = new C();
		std::cout << "C Class generated" << std::endl;
		return(static_cast<Base *>(p));
	}
	else return(NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		A & ref = dynamic_cast<A&>(p);
		(void) ref;
		std::cout << "It s an A class Object" << std::endl;	
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		B & ref = dynamic_cast<B&>(p);
		(void) ref;
		std::cout << "It s an B class Object" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		C & ref = dynamic_cast<C&>(p);
		(void) ref;
		std::cout << "It s an C class Object" << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main()
{
	Base* ptrbase = generate();
	
	std::cout << "------------Try with pointer----------" << std::endl;
	identify(ptrbase);
	std::cout << "------------Try with reference----------" << std::endl;
	identify(*ptrbase);
	std::cout << "------------Try with NULL----------" << std::endl;
	identify(NULL);
	
	delete ptrbase;
	return (0);
}