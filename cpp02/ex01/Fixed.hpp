/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:38:33 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/06 10:11:57 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed{
    private :
        int                 store;
        static const int    fractional = 8;
    public :
        Fixed();
        Fixed(const int intgr);
        Fixed(const float floating);
        Fixed(const Fixed& copy);
        Fixed & operator=(const Fixed& operat);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
};
std::ostream & operator<<(std::ostream &output, const Fixed& operat);

