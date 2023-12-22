/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:41:47 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/17 23:42:13 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this->type = "Animal";
    std::cout << "Animal default constractor ." << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = copy.type;
}

Animal & Animal::operator=(const Animal &operat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &operat)
        this->type = operat.type;
    return *this;
}

std::string Animal::getType( void ) const{
    return(this->type);
}

void Animal::makeSound( void ) const{
    std::cout <<  "Animal make sound ." << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destroyed ." << std::endl;
}
