/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:29:16 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/30 12:45:23 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

void HumanB::setWeapon(Weapon &club)
{
    this->gun = &club;
}

void HumanB::attack(void)
{
    if(gun->getType().empty())
        std::cout << this->name << "attacks with their hainds ." << std::endl;
    else
        std::cout << this->name << "attacks with their " << gun->getType() << std::endl;
}

HumanB::~HumanB(void)
{
    
}
