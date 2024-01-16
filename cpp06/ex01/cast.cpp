/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:56:15 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/16 17:36:00 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

uintptr_t Serializer::serialize(Data* ptr){
    uintptr_t raw = reinterpret_cast<uintptr_t>(ptr);
    return (raw);
}

Data* Serializer::deserialize(uintptr_t raw){
    Data *ptr = reinterpret_cast<Data*>(raw);
    return(ptr);
}

int main(){
    Data *ptr = new Data;
    Serializer s;
    ptr->str1 = "Hello How is going !";
    std::cout << ptr->str1 << std::endl;
    std::cout << ptr << std::endl;
    uintptr_t raw = s.serialize(ptr);
    std::cout << raw << std::endl;
    Data *ptr1 = s.deserialize(raw);
    std::cout << ptr1->str1 << std::endl;
    std::cout << ptr << std::endl;
}
