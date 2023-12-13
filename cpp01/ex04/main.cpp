/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:15:26 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/09 21:28:05 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

void replace(std::ifstream *file, std::ofstream *newFile, char **av)
{
	std::string line;
	std::string a(av[2]), b(av[3]);
	if(a.empty() || b.empty())
		return;
	while(std::getline(*file, line))
	{
		size_t pos = 0, i = 0;
		while((pos = line.find(av[2], pos)) != std::string::npos)
		{
			while (i < pos)
			*newFile << line[i++];
			size_t j = 0;
			while (j < b.length())
				*newFile << b[j++];
			i += a.length();
			pos += a.length();
		}
		if((pos = line.find(av[2], pos)) == std::string::npos)
		{
			while(i < line.length())
			*newFile << line[i++];
		}
		*newFile << std::endl;
	}
}

int main(int ac, char **av)
{
	if (ac == 4)
	{
		std::ifstream  file(av[1]);
		std::ofstream newFile("newfile.txt");
		if(file.is_open() && newFile.is_open())
			replace (&file, &newFile, av);
		else
			std::cout << "Failed to open the file." << std::endl;
	}
	else
		std::cout << "The number of arguments must be three .. Try again!" << std::endl;
}
