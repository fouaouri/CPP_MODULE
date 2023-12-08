/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:00:59 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/08 17:12:50 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my";
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout << std::endl;
    std::cout << std::endl;
}

void Harl::info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didnt put";
    std::cout << "enough bacon in my burger! If you did, I wouldnt be asking for more!";
    std::cout << std::endl;
    std::cout << std::endl;
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. Ive been coming for";
    std::cout << "years whereas you started working here since last month.";
    std::cout << std::endl;
    std::cout << std::endl;
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level)
{
    void    (Harl::*pointer_fun[4])();
    pointer_fun[0] = &Harl::debug;
    pointer_fun[1] = &Harl::info;
    pointer_fun[2] = &Harl::warning;
    pointer_fun[3] = &Harl::error;
    std::string str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while(i < 4 && str[i] != level)
        i++;
    switch (i)
    {
    case 0:
        (this->*pointer_fun[0])();
    case 1:
        (this->*pointer_fun[1])();
    case 2:
        (this->*pointer_fun[2])();
    case 3:
        (this->*pointer_fun[3])();
        break;
    default :
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
}