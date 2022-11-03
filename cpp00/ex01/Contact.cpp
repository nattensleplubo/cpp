/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:30:46 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/03 14:32:11 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
	std::cout << "Constructor called" << std::endl;
}

Contact::~Contact(void)
{
	std::cout << "Destructor called" << std::endl;
}
