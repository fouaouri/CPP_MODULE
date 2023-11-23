/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 19:24:29 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/23 17:54:41 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook c1;
    std::string input;
    std::string num;
    std::string Fname;
    std::string Lname;
    std::string Nname;
    std::string Phnum;
    std::string Dsecret;
    int n = 1;
    int i = 1;
    std::string phoneNumber;
    c1.start_the_program();
    for(;;)
    {
        std::cout << "Enter an action : ";
        getline(std::cin, input);
        c1.checking();
        if(strcmp(input.c_str(), "ADD") == 0)
        {
            std::cout << "Enter the first name : ";
            getline(std::cin, Fname);
            c1.contact[i % 8].setFirstName(Fname);
            std::cout << "Enter the last name : ";
            getline(std::cin, Lname);
            c1.contact[i % 8].setLastName(Lname);
            std::cout << "Enter the nickname : ";
            getline(std::cin, Nname);
            c1.contact[i % 8].setNickName(Nname);
            std::cout << "Enter the phone number : ";
            getline(std::cin, Phnum);
            c1.contact[i % 8].setPhoneNumber(Phnum);
            std::cout << "Enter the darkest secret : ";
            getline(std::cin, Dsecret);
            c1.contact[i % 8].setDarketsSec(Dsecret);
            i += 1;
        }
        else if (strcmp(input.c_str(), "SEARCH") == 0)
        {
            int j;
            for (j = 1; j < i; j++)
                c1.contact[j % 8].set_len0(j);
            std::cout << "Which index u choose : ";
            getline(std::cin, num);
            n = atoi(num.c_str());
            if (n > j)
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