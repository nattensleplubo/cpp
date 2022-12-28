/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:47:11 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/28 18:25:48 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef ANIMAL_HPP

# define ANIMAL_HPP

class Animal
{
	protected:
		std::string _type;
	public:
		Animal();
		Animal(Animal const &src);
		Animal &operator=(Animal const &src);
		virtual ~Animal();

		virtual const std::string &getType(void) const;
		virtual void	makeSound() const;
};

#endif