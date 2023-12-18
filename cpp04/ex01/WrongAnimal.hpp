/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:05:01 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/17 23:44:20 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

class WrongAnimal{
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(WrongAnimal const &copy);
        WrongAnimal & operator=(WrongAnimal const &operat);
        std::string getType( void ) const;
        void makeSound( void ) const;
        ~WrongAnimal();    
};

class WrongCat : public WrongAnimal{
    public :
        WrongCat();
        WrongCat(WrongCat const &copy);
        WrongCat & operator=(WrongCat const &operat);
        std::string getType( void ) const;
        void makeSound( void ) const;
        ~WrongCat();    
};