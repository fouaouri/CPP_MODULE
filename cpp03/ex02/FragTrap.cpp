/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:52:32 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/16 19:00:57 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->Hit_points = 100;
    this->Ene_points = 100;
    this->Att_damage = 30;
    this->name = "FragTrap";
    std::cout << "FragTrap default." << std::endl;
}

FragTrap::FragTrap(std::string name):ClapTrap(name){
    this->Hit_points = 100;
    this->Ene_points = 100;
    this->Att_damage = 30;
    std::cout << this->name << " was created." << std::endl;
}

void FragTrap::attack(const std::string& target){
    std::cout << this->name << " attacks " << target << ", causing ";
    std::cout << this->Att_damage << " points of damage !" << std::endl;
}

void FragTrap:: highFivesGuys()
{
    std::cout << this->name << " is giving you a high five ." << std::endl;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap was destroyed ." << std::endl;
}