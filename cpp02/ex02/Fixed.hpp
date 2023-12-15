/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:50:38 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/14 22:00:16 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed{
    public :
        int                 store;
        static const int    fractional = 8;
    public :
        Fixed();
        Fixed(const int Integer);
        Fixed(const float Float);
        Fixed(const Fixed& copy);
        Fixed & operator=(const Fixed& operat);
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(const Fixed& operat);
        bool operator<(const Fixed& operat);
        bool operator>=(const Fixed& operat);
        bool operator<=(const Fixed& operat);
        bool operator==(const Fixed& operat);
        bool operator!=(const Fixed& operat);
        Fixed operator+(const Fixed& operat);
        Fixed operator-(const Fixed& operat);
        Fixed operator*(const Fixed& operat);
        Fixed operator/(const Fixed& operat);
        Fixed operator--( void );
        Fixed operator--( int );
        Fixed operator++( void );
        Fixed operator++( int );
        Fixed &min(Fixed &a, Fixed &b);
        static const Fixed &min(const Fixed &a, const Fixed &b);
        Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &max(const Fixed &a, const Fixed &b);
        
};
std::ostream &operator<<(std::ostream &out,const Fixed &overloaded);

