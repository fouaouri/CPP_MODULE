/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:40:17 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/14 23:40:51 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stdint.h>
#include <cmath>

class Base {
    public :
        virtual ~Base(){
            
        };
};

class A : public Base{
    public :
        ~A(){

        };
};

class B : public Base{
    public :
        ~B(){

        };
};

class C : public Base{
    public :
        ~C(){

        };
};