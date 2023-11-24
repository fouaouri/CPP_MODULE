/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:24:29 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/24 17:48:13 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int check_num(std::string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] >= '9' || str[i] <= '0')
			return(1);
	}
	return(0);
}

int is_space(std::string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
			return(1);
	}
	return(0);
}

int main()
{
	PhoneBook c1;
	std::string input, num, Fname, Lname, Nname, Phnum, Dsecret;
	int n = 1, i = 1;
	c1.start_the_program();
	for(;;)
	{
		std::cout << "             **  ADD | SEARCH | EXIT  **       " << std::endl;
		std::cout << "Enter an action : ";
		getline(std::cin, input);
		if(std::cin.eof())
			return 0;
		else if(strcmp(input.c_str(), "ADD") == 0)
		{
			if(std::cin.eof())
				return 0;
			else{
				std::cout << "Enter the first name : ";
				getline(std::cin, Fname);
				if(Fname.empty() || is_space(Fname))
				{
					std::cout << "U may enter an empty information..try again ." << std::endl;
					continue ;
				}
				c1.contact[i % 8].setFirstName(Fname);
				std::cout << "Enter the last name : ";
				getline(std::cin, Lname);
				if(Lname.empty() || is_space(Lname))
				{
					std::cout << "U may enter an empty information..try again ." << std::endl;
					continue ;
				}
				c1.contact[i % 8].setLastName(Lname);
				std::cout << "Enter the nickname : ";
				getline(std::cin, Nname);
				if(Nname.empty() || is_space(Nname))
				{
					std::cout << "U may enter an empty information..try again ." << std::endl;
					continue ;
				}
				c1.contact[i % 8].setNickName(Nname);
				std::cout << "Enter the phone number : ";
				getline(std::cin, Phnum);
				if(Phnum.empty() || is_space(Phnum))
				{
					std::cout << "U may enter an empty information..try again ." << std::endl;
					continue ;
				}
				c1.contact[i % 8].setPhoneNumber(Phnum);
				std::cout << "Enter the darkest secret : ";
				getline(std::cin, Dsecret);
				if(Dsecret.empty() || is_space(Dsecret))
				{
					std::cout << "U may enter an empty information..try again ." << std::endl;
					continue ;
				}
				c1.contact[i % 8].setDarketsSec(Dsecret);
				i += 1;  
			}
		}
		else if (strcmp(input.c_str(), "SEARCH") == 0)
		{
			int j;
			int k;
			if(i > 8)
				k = 9;
			else
				k = i;
			for (j = 1; j < k; j++)
				c1.contact[j % 8].set_len0(j);
			std::cout << "Which index u choose : ";
			getline(std::cin, num);
			if(check_num(num))
			{
				std::cout << "OOOOOPS! the input have a non numerique ." << std::endl;   
				continue ;
			}
			n = atoi(num.c_str());
			if (n <= 0 || n >= j)
				std::cout << "OOOOOPS! the number u choose doses not exist .. try again" << std::endl;
			else
				c1.contact[n % 8].set_len(n);
		}
		else if (strcmp(input.c_str(), "EXIT") == 0)
			exit (0);
		else
			std::cout << "* INCORRECT INPUT ! TRY AGAIN *" << std::endl;
	}
	return (0);
}
