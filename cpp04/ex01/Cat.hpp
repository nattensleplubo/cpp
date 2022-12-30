/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:53:26 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/28 18:18:48 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

#ifndef CAT_HPP

# define CAT_HPP

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &src);
		virtual ~Cat();

		virtual void	makeSound() const;
};

#endif