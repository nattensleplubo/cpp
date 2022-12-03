/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngobert <ngobert@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 11:43:34 by ngobert           #+#    #+#             */
/*   Updated: 2022/12/02 18:35:14 by ngobert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>

int	main(int argc, char **argv)
{
	std::ofstream	outfile;
	std::ifstream	infile;
	std::string		fileNameDotReplace;
	std::string		buf, tmp;

	size_t			startPos = 0;
	
	std::string		str1 = argv[2];
	std::string		str2 = argv[3];

	if (argc != 4)
	{
		std::cout << "Wrong parameter settigns; please use <file> <str2replace> <replacingString>" << std::endl;
		return (0);
	}

	fileNameDotReplace = argv[1];
	fileNameDotReplace.append(".replace");

	outfile.open(fileNameDotReplace);
	infile.open(argv[1]);
	
	while (std::getline(infile, buf))
		tmp += buf + '\n';

	while (1)
	{
		size_t	i = tmp.find(str1, startPos);
		startPos = i + str1.size();
		if (i >= std::string::npos)
			break ;
		tmp.erase(i, str1.size());
		buf = tmp.insert(i, str2);
	}
	outfile << buf;
	infile.close();
	outfile.close();
}