/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:41:25 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/17 18:56:15 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    std::cout << "Cat default constractor ." << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = copy.type;
}

Cat & Cat::operator=(const Cat &operat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &operat)
        this->type = operat.type;
    return *this;
}

std::string Cat::getType( void ) const{
    return(this->type);
}

void Cat::makeSound( void ) const{
    std::cout << "this Cat make sound ." << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destroyed ." << std::endl;
}