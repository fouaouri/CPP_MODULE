/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:24:29 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/22 15:30:04 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
void checking()
{
     if(std::cin.eof())
        return;
}

int main()
{
    PhoneBook c1;
    std::string input;
    std::string num;
    std::string phnum;
    int n = 0;
    int i = 0;
    std::string phoneNumber;
    for(;;)
    {
        std::cout << "Enter an action : ";
        getline(std::cin, input);
        checking();
        if(strcmp(input.c_str(), "ADD") == 0)
        {
            std::cout << "Enter a number : ";
            getline(std::cin, phnum);
            c1.contact[i % 8].setFirstName(phnum);
            i++;
        }
        else if (strcmp(input.c_str(), "SEARCH") == 0)
        {
            std::cout << "I want the number number : ";
            getline(std::cin, num);
            n = atoi(num.c_str());
            std::cout << "the number u want is : " << phnum << std::endl;
        }
        else if (strcmp(input.c_str(), "EXIT") == 0)
            exit (0);
    }
    return (0);
}