/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:29:49 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/23 14:23:03 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>

class Contact
{
	private:
		std::string	_first_name_;
		std::string	_last_name_;
		std::string	_nickname_;
		std::string	_phone_number_;
		std::string	_darkest_secret_;
	public:
		Contact();
		~Contact();

		int	setContact(std::string _first_name_, std::string _last_name_,
			std::string _nickname_, std::string _phone_number_, std::string _darkest_secret_);
			
		void	print_self(int i);
		void	printString(std::string str);
};

#endif
