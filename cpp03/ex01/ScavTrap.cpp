/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:16:54 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/15 21:08:22 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Hit_points(100), Ene_points(50), Att_damage(20){
    this->name = name;
    std::cout << this->name << "was created." << std::endl;
}

void ClapTrap::attack(const std::string& target){
    std::cout << this->name << " attacks " << target << ", causing ";
    std::cout << this->Att_damage << " points of damage !" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " is now in Gate keeper mode ." << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << this->name << "was destroyed ." << std::endl;
}