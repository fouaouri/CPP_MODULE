/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:42:09 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/17 16:16:25 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include <string>
#include "Contact.hpp"

class PhoneBook{
    public :
        Contact contact[8];
        ~ PhoneBook(){
            std::cout << "End of program ." << std::endl;
        };
};
