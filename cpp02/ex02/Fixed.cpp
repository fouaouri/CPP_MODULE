/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:11:28 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/13 16:12:48 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->store = 0;
}

Fixed::Fixed(const int intgr) : store(intgr * pow(2, fractional))
{
}

Fixed::Fixed(const float floating) : store((int)( floating * (1 << fractional)))
{
    
}

Fixed::Fixed( const Fixed &copy )
{
    //this->store = copy.getRawBits();
    *this = copy;
}

Fixed &Fixed::operator=( const Fixed &operat )
{
    if (this != &operat)
        this->store = operat.getRawBits();
    return *this;
}


Fixed::~Fixed()
{

}

int Fixed::getRawBits( void ) const
{
    return (this->store);
}

void Fixed::setRawBits( int const raw )
{
    this->store = raw;
}

float   Fixed::toFloat( void ) const
{
    float ToFloat;
    ToFloat = static_cast<float>(this->getRawBits()) / (1 << fractional);
    return ToFloat;
}

int Fixed::toInt( void ) const
{
    int ToInt;
    ToInt = this->store / pow(2, fractional);
    return ToInt;
}

std::ostream & operator<<(std::ostream &output, const Fixed &operat)
{
    output << operat.toFloat();
    return (output);
}

bool Fixed::operator>(const Fixed& operat) const
{
    return(this->getRawBits() > operat.getRawBits());
}

bool Fixed::operator<(const Fixed& operat) const
{
    return(this->getRawBits() < operat.getRawBits());
}

bool Fixed::operator>=(const Fixed& operat) const
{
    return(this->getRawBits() >= operat.getRawBits());
}

bool Fixed::operator<=(const Fixed& operat) const
{
    return(this->getRawBits() <= operat.getRawBits());
}

bool Fixed::operator==(const Fixed& operat) const
{
    return(this->getRawBits() == operat.getRawBits());
}

bool Fixed::operator!=(const Fixed& operat) const
{
    return(this->getRawBits() != operat.getRawBits());
}

Fixed Fixed::operator+(const Fixed& operat) const
{
    return Fixed((this->toFloat() + operat.toFloat()));
}

Fixed Fixed::operator-(const Fixed& operat) const
{
    return Fixed((this->toFloat() - operat.toFloat()));
}

Fixed Fixed::operator*(const Fixed& operat) const
{
    return Fixed((this->toFloat() * operat.toFloat()));
}

Fixed Fixed::operator/(const Fixed& operat) const
{
    return Fixed((this->toFloat() / operat.toFloat()));
}

Fixed& Fixed::min( Fixed &a, Fixed &b )
{
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::min( const Fixed &a, const Fixed &b )
{
    if ( a.getRawBits() < b.getRawBits() )
        return a;
    return b;
}

Fixed& Fixed::max( Fixed &a, Fixed &b )
{
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

const Fixed& Fixed::max( const Fixed &a, const Fixed &b )
{
    if ( a.getRawBits() > b.getRawBits() )
        return a;
    return b;
}

Fixed&   Fixed::operator++( void )
{
    ++this->store;
    return *this;
}

Fixed   Fixed::operator++( int ) {
    Fixed operat( *this );
    operat.store = this->store++;
    return operat;
}

Fixed& Fixed::operator--( void )
{
    --this->store;
    return *this;
}

Fixed Fixed::operator--( int ) {
    Fixed operat( *this );
    operat.store = this->store--;
    return operat;
}