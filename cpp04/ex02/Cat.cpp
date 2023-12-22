/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:41:25 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/22 03:25:44 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
    this->type = "Cat";
    this->brain = new Brain;
    std::cout << "Cat default constractor ." << std::endl;
}

Cat::Cat(const Cat &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    brain = NULL;
    *this = copy;
}

Cat & Cat::operator=(const Cat &operat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &operat)
    {
        if(brain)
            delete brain;
        brain = new Brain(*operat.brain);
        this->type = operat.type;
    }
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
    delete brain;
}