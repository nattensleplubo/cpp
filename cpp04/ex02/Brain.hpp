/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/30 16:30:53 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/30 16:31:11 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>

class Brain
{
	private:
		std::string _ideas[100];
	public:
		Brain();
		Brain(Brain const &src);
		Brain &operator=(Brain const &src);
		virtual ~Brain();

		std::string	getIdea(int i) const;
		void		setIdea(int i, std::string idea);
};

#endif
