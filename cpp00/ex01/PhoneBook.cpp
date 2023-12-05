/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:48:21 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/03 21:08:35 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void Contact::set_len(int index)
{
	std::cout << "index          : " << index << std::endl;
	std::cout << "First Name     : " << getFirstName() << std::endl;
	std::cout << "Last Name      : " << getLastName() << std::endl;
	std::cout << "Nick Name      : " << getNickName() << std::endl;
	std::cout << "Phone Number   : " << getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << getDarkestSec() << std::endl;
}

void Contact::set_len0(int index)
{
	if (index > 8)
		index = 8;
	std::cout << std::setw(10) << index << " |";
	if (getFirstName().length() > 10)
		std::cout << std::setw(10) << getFirstName().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << getFirstName() << " |";
	if (getLastName().length() > 10)
		std::cout << std::setw(10) << getLastName().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << getLastName() << " |";
	if (getNickName().length() > 10)
		std::cout << std::setw(10) << getNickName().substr(0, 9) << ".|";
	else
		std::cout << std::setw(10) << getNickName() << " |";
	std::cout << std::endl;
}

void PhoneBook::start_the_program()
{
	std::cout << "        ** WELCOME TO PHONEBOOK PROGRAM **       " << std::endl;
	std::cout << "     You have to choose one of the following actions :     " << std::endl;
	std::cout << "             **  ADD | SEARCH | EXIT  **       " << std::endl;
	std::cout << "     ADD  : to save a new contact ." << std::endl;
	std::cout << "     SEARCH  : to display a specific contact ." << std::endl;
	std::cout << "     EXIT  : to quit the program ." << std::endl;
	std::cout << "               **  So here we go  **" << std::endl;
}

int PhoneBook::check_num(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (1);
	}
	return (0);
}

int PhoneBook::is_space(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isspace(str[i]))
			return (0);
	}
	return (1);
}