/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:28:51 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/30 12:48:00 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
    
}
Weapon::Weapon(std::string t):type(t)
{
    
}

const std::string& Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string Ntype)
{
    type = Ntype;
}
Weapon::~Weapon(void)
{}