/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:50:19 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/28 15:03:36 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int main()
{
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "The memory address of the string variable is : " << &string << std::endl;
    std::cout << "The memory address held by stringPTR is      : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF is      : " << &stringREF << std::endl;
    std::cout << "The value of the string variable is          : " << string << std::endl;
    std::cout << "The value pointed to by stringPTR is         : " << *stringPTR << std::endl;
    std::cout << "• The value pointed to by stringREF is       : " << stringREF << std::endl;
}