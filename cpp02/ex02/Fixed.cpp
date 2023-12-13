/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:50:52 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/13 19:52:30 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->store = 0;
}


Fixed::Fixed(const Fixed &copy)
{
    this->store = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &operat)
{
    if (this != &operat)
        this->store = operat.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
    return (this->store);
}

void Fixed::setRawBits(int const raw)
{
    this->store = raw;
}

Fixed::Fixed(const int Integer) : store(Integer << fractional)
{
    
}

Fixed::Fixed(const float Float) : store(roundf(Float * (1 << fractional)))
{
    
}

float Fixed::toFloat( void ) const
{
    float Float = (1 << fractional);
    return(getRawBits() / Float);
}

int Fixed::toInt( void ) const
{
    int Integer;
    Integer = getRawBits() / (1 << fractional);
    return Integer;
}

std::ostream &operator<<(std::ostream &out, const Fixed &overloaded)
{
    out <<overloaded.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed& operat)
{
    return(this->getRawBits() > operat.getRawBits());
}

bool Fixed::operator<(const Fixed& operat)
{
    return(this->getRawBits() < operat.getRawBits());
}

bool Fixed::operator>=(const Fixed& operat)
{
    return(this->getRawBits() >= operat.getRawBits());
}

bool Fixed::operator<=(const Fixed& operat)
{
    return(this->getRawBits() <= operat.getRawBits());
}

bool Fixed::operator==(const Fixed& operat)
{
    return(this->getRawBits() == operat.getRawBits());
}

bool Fixed::operator!=(const Fixed& operat)
{
    return(this->getRawBits() != operat.getRawBits());
}

Fixed Fixed::operator+(const Fixed& operat)
{
    return Fixed((this->toFloat() + operat.toFloat()));
}

Fixed Fixed::operator-(const Fixed& operat)
{
    return Fixed((this->toFloat() - operat.toFloat()));
}

Fixed Fixed::operator*(const Fixed& operat)
{
    return Fixed((this->toFloat() * operat.toFloat()));
}

Fixed Fixed::operator/(const Fixed& operat)
{
    return Fixed((this->toFloat() / operat.toFloat()));
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
    if(a.getRawBits() < b.getRawBits())
        return(a);
    return(b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b){
    if(a.getRawBits() < b.getRawBits())
        return(a);
    return(b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
    if(a.getRawBits() > b.getRawBits())
        return(a);
    return(b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b){
    if(a.getRawBits() > b.getRawBits())
        return(a);
    return(b);
}

Fixed Fixed::operator--( void ){
    --this->store;
    return *this;
}

Fixed Fixed::operator++( void ){
    ++this->store;
    return *this;
}

Fixed Fixed::operator++( int ){
    Fixed a(*this);
    this->store++;
    return(a);
}

Fixed Fixed::operator--( int ){
    Fixed a(*this);
    this->store--;
    return(a);
} 