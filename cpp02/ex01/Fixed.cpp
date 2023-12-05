/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 15:38:51 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/04 17:11:00 by fouaouri         ###   ########.fr       */
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

std::ostream &Fixed::operator<<(std::ostream &output, const Fixed &operat)
{
    output << operat.
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