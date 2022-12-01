/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:26:14 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/01 16:41:40 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>

class PhoneBook
{
	private:
		int		_number_of_contacts;
		int		_IsPhoneBookfull;
		Contact	_contacts[8];
	public:
		PhoneBook();
		~PhoneBook();

		int		getNbOfContacts();
		void	setContact(std::string *input, int nb_contacts);
		void	setNbOfContacts();
		void	print_contacts();
		void		askOneContact();
};

#endif
