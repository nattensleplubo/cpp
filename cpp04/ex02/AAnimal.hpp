/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/28 17:47:11 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/05 12:02:10 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef AANIMAL_HPP

# define AANIMAL_HPP

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(AAnimal const &src);
		AAnimal &operator=(AAnimal const &src);
		virtual ~AAnimal();

		virtual const std::string &getType(void) const;
		virtual void	makeSound() const = 0;
};

#endif