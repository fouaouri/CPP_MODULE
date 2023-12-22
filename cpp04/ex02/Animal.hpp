/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:29:02 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/20 01:15:43 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Animal{
    protected :
        std::string type;
    public :
        Animal();
        Animal(Animal const &copy);
        Animal & operator=(Animal const &operat);
        std::string getType( void ) const;
        virtual void makeSound( void ) const = 0;
        virtual~Animal();
};
