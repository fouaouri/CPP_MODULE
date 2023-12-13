/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:12:18 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/13 11:50:10 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed{
    private :
        int                 store;
        static const int    integer = 8;
    public :
        Fixed();
        Fixed(const Fixed& copy);
        Fixed & operator=(const Fixed& operat);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};
