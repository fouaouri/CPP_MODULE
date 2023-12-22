/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 00:28:18 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/20 01:08:08 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Brain{
    private :
        std::string *ideas;
    public :
        Brain( void );
        Brain(Brain &copy);
        Brain & operator=(Brain &operat);
        ~Brain( void );
    
};