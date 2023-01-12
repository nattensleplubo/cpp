/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:43:15 by ngobert           #+#    #+#             */
/*   Updated: 2023/01/12 16:56:06 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int main()
{
	Data	objct(42);
	
	std::cout << "Serialization" << std::endl;
	std::cout << "Value before deserialization : " << objct.getValue() << std::endl;
	
	uintptr_t ptr = serialize(&objct);
	std::cout << "Serialization : " << ptr << std::endl;
	
	std::cout << std::endl;
	std::cout << "Deserialization" << std::endl;
	Data *restore = deserialize(ptr);
	std::cout << "Value after deserialization : " << restore->getValue() << std::endl;
	
	return (0);
}