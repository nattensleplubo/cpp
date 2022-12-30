/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:53:34 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/30 16:07:31 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal anil;
	Dog tom;
	Cat jerry;

	Cat other;

	std::cout << anil.getType() << std::endl;
	anil.makeSound();

	std::cout << tom.getType() << std::endl;
	tom.makeSound();

	std::cout << jerry.getType() << std::endl;
	jerry.makeSound();

	other = jerry;

	std::cout << other.getType() << std::endl;
	other.makeSound();

	std::cout << tom.getType() << std::endl;

	return (0);
}


// int main()
// {
// 	const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	delete meta;
// 	delete j;
// 	delete i;
	
// 	return 0;
// }

// int main()
// {
// 	const WrongAnimal* meta = new WrongAnimal();
// 	const Animal* j = new Dog();
// 	const WrongAnimal* i = new WrongCat();
// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;
// 	i->makeSound(); //will output the cat sound!
// 	j->makeSound();
// 	meta->makeSound();

// 	delete meta;
// 	delete j;
// 	delete i;
	
// 	return 0;
// }