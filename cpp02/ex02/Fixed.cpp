/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:11:28 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/06 14:56:29 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->store = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intgr) : store(intgr * pow(2, fractional))
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float floating) : store((int)( floating * ( 1 << fractional )))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed &copy )
{
    std::cout << "Copy constructor called" << std::endl;
    this->store = copy.getRawBits();
}

Fixed &Fixed::operator=( const Fixed &operat )
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &operat)
        this->store = operat.getRawBits();
    return *this;
}


Fixed::~Fixed()
{
    std::cout << "Destractor called" << std::endl;
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

Fixed operator+(const Fixed& operat) const
{
    return Fixed((this->getRawBits() + operat.getRawBits()));
}

Fixed operator-(const Fixed& operat) const
{
    return Fixed((this->getRawBits() - operat.getRawBits()));
}

Fixed operator*(const Fixed& operat) const
{
    return Fixed((this->getRawBits() * operat.getRawBits()));
}

Fixed operator/(const Fixed& operat) const
{
    return Fixed((this->getRawBits() / operat.getRawBits()));
}

