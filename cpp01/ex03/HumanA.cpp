/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:29:10 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/30 11:57:02 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name,Weapon &  club):name(name),gun(club)
{
}
void HumanA::attack(void)
{
    std::cout << this->name << "attacks with their " << gun.getType() << std::endl;
}
 HumanA::~HumanA(void)
 {
    
 }