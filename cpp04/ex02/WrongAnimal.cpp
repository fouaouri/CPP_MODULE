/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 23:42:17 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/17 23:51:34 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "Animal";
    std::cout << "Animal default constractor ." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = copy.type;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &operat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &operat)
        this->type = operat.type;
    return *this;
}

std::string WrongAnimal::getType( void ) const{
    return(this->type);
}

void WrongAnimal::makeSound( void ) const{
    std::cout <<  "Wrong Animal make sound ." << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Animal destroyed ." << std::endl;
}

//*************************************************************************

WrongCat::WrongCat(){
    this->type = "Cat";
    std::cout << "Cat default constractor ." << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->type = copy.type;
}

WrongCat & WrongCat::operator=(const WrongCat &operat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &operat)
        this->type = operat.type;
    return *this;
}

std::string WrongCat::getType( void ) const{
    return(this->type);
}

void WrongCat::makeSound( void ) const{
    std::cout << "this Cat make sound ." << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "Cat destroyed ." << std::endl;
}