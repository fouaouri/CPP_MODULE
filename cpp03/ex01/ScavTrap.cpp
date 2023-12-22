/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:16:54 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/19 23:51:21 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->Hit_points = 100;
    this->Ene_points = 50;
    this->Att_damage = 20;
    this->name = "ScavTrap";
    std::cout << "ScavTrap default." << std::endl;
}

ScavTrap::ScavTrap(std::string name):ClapTrap(name){
    this->Hit_points = 100;
    this->Ene_points = 50;
    this->Att_damage = 20;
    std::cout << this->name << " was created." << std::endl;
}

void ScavTrap::attack(const std::string& target){
    if(Hit_points  > 0 && Ene_points > 0)
    {
        std::cout << this->name << " attacks " << target << ", causing ";
        std::cout << this->Att_damage << " points of damage !" << std::endl;
        Ene_points--;
    }
    else
        std::cout << "the ScavTrap have no hit_points to take the damage or doesnt have energy ." << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " is now in Gate keeper mode ." << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap was destroyed ." << std::endl;
}