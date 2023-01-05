/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:53:32 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/05 11:18:40 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

#ifndef DOG_HPP

# define DOG_HPP

class Dog : virtual public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Dog();
		Dog(Dog const &src);
		Dog &operator=(Dog const &src);
		~Dog();

		void	makeSound() const;
};

#endif 