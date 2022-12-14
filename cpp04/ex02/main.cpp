/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/05 12:09:12 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/05 12:09:22 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	int k = 0;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	// AAnimal anil = new AAnimal();

	AAnimal * arrayA_Animal[4];
	while (k < 2)
	{
		arrayA_Animal[k] = new Dog();
		k++;
	}
	while (k < 4)
	{
		arrayA_Animal[k] = new Cat();
		k++;
	}
	k = 0;
	while (k < 4)
	{
		std::cout << "AAnimal : " << arrayA_Animal[k]->getType() << std::endl;
		arrayA_Animal[k]->makeSound();
		k++;
	}
	k = 0;
	while(k < 4)
	{
		delete arrayA_Animal[k];
		k++;
	}
	
	Cat chat_vnr;
	{
		Cat tmp = chat_vnr;
	}
	Dog chien_vnr;
	{
		Dog tmp = chien_vnr;
	}

	return 0;
}
