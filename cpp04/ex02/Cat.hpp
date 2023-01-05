/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:53:26 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/05 11:18:34 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Brain.hpp"

#ifndef CAT_HPP

# define CAT_HPP

class Cat : virtual public AAnimal
{
	private:
		Brain	*_brain;
	public:
		Cat();
		Cat(Cat const &src);
		Cat &operator=(Cat const &src);
		~Cat();

		void	makeSound() const;
};

#endif