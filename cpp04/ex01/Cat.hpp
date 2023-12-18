/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:37:38 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/18 00:30:13 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>
#include"Animal.hpp"
#include"Brain.hpp"

class Cat : public Animal{
    private :
        Brain *brain;
    public :
        Cat();
        Cat(Cat const &copy);
        Cat & operator=(Cat const &operat);
        std::string getType( void ) const;
        void makeSound( void ) const;        
        ~Cat();   
};