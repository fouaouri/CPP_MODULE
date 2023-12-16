/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:52:40 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/16 22:20:22 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

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
    std::cout << this->name << " attacks " << target << ", causing ";
    std::cout << this->Att_damage << " points of damage !" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " is now in Gate keeper mode ." << std::endl;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap was destroyed ." << std::endl;
}