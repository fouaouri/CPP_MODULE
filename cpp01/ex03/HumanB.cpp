/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:29:16 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/09 21:22:28 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
    gun = NULL;
}

void HumanB::setWeapon(Weapon &club)
{
    this->gun = &club;
}

void HumanB::attack(void)
{
    if(!gun)
        std::cout << this->name << " attacks with their hainds ." << std::endl;
    else
        std::cout << this->name << " attacks with their " << gun->getType() << std::endl;
}

HumanB::~HumanB(void)
{
    
}
