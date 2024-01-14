/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:56:19 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/13 21:22:23 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>

struct Data{
    string str;
    string str1;    
};

class Serializer{
    private:
        Serializer();
        Serializer(const Serializer &s);
        Serializer &operator=(const Serializer &s);
        ~Serializer();
    public :
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
};