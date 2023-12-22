/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:37:59 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/18 00:30:45 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal{
    private :
        Brain *brain;
    public :
        Dog();
        Dog(Dog const &copy);
        Dog & operator=(Dog const &operat);
        std::string getType( void ) const;
        void makeSound( void ) const;
        ~Dog();    
};