/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 12:30:31 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/13 13:13:24 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->store = 0;
    std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;

    this->store = copy.getRawBits();
}

Fixed &Fixed::operator=(const Fixed &operat)
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

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->store);
}

void Fixed::setRawBits(int const raw)
{
    this->store = raw;
}
