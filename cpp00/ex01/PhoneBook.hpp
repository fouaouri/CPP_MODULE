/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:42:09 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/26 15:38:52 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
// #include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook{
    public :
        Contact contact[8];
        ~ PhoneBook(){
            std::cout << "End of program ." << std::endl;
        };
        void    start_the_program();
        int check_num(std::string str);
        int is_space(std::string str);
};
