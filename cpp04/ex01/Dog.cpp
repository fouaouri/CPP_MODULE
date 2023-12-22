/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:41:10 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/20 01:14:22 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
    this->brain = new Brain;
    this->type = "Dog";
    std::cout << "Dog default constractor ." << std::endl;
}

Dog::Dog(const Dog &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    brain = NULL;
    *this = copy;
}

Dog & Dog::operator=(const Dog &operat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &operat)
    {
        if(brain)
            delete brain;
        brain = new Brain(*operat.brain);
        this->type = operat.type;
        
    }
    return *this;
}

std::string Dog::getType( void ) const{
    return(this->type);
}

void Dog::makeSound( void ) const{
    std::cout << "this Dog make sound ." << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destroyed ." << std::endl;
    delete brain;
}