/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:11:40 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/07 13:36:16 by fouaouri         ###   ########.fr       */
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
        bool operator>(const Fixed& operat) const;
        bool operator<(const Fixed& operat)  const;
        bool operator>=(const Fixed& operat) const;
        bool operator<=(const Fixed& operat) const;
        bool operator==(const Fixed& operat) const;
        bool operator!=(const Fixed& operat) const;
        Fixed operator+(const Fixed& operat) const;
        Fixed operator-(const Fixed& operat) const;
        Fixed operator*(const Fixed& operat) const;
        Fixed operator/(const Fixed& operat) const;
        Fixed & min( Fixed &a, Fixed &b);
        Fixed & max( Fixed &a, Fixed &b);
        static const Fixed & min(const Fixed &a, const Fixed &b);
        static const Fixed & max(const Fixed &a, const Fixed &b);
        Fixed & operator++( void );
        Fixed operator++( int );
        Fixed & operator--( void );
        Fixed operator--( int );
        
};
std::ostream & operator<<(std::ostream &output, const Fixed& operat);
