/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:49:15 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/09 14:21:54 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Harl{
    private :
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
    public:
        Harl( void );
        ~Harl( void );
        void complain(std::string level);
};