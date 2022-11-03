/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:29:49 by ngobert           #+#    #+#             */
/*   Updated: 2022/11/03 16:43:40 by ngobert          ###   ########.fr       */
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
		int	set_contact(std::string _first_name_, std::string _last_name_,
			std::string _nickname_, std::string _phone_number_, std::string _darkest_secret_);
		Contact(/* args */);
		~Contact();
};

#endif
