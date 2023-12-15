/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:13:25 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/15 18:51:55 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : Hit_points(100), Ene_points(50), Att_damage(20){
    this->name = name;
    std::cout << this->name << "was created." << std::endl;
}

void ClapTrap::attack(const std::string& target){
    std::cout << this->name << " attacks " << target << ", causing ";
    std::cout << this->Att_damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if (this->Hit_points > 0)
    {
        this->Hit_points -= 1;
        std::cout << this->name << " lose ";
        std::cout << amount << " hit points ." << std::endl; 
    }
    else
        std::cout << "the ClapTrap have no hit_points to take the damage ." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(this->Hit_points > 0)
    {
        this->Ene_points -= 1;
        std::cout << this->name << " be repaired with ";
        std::cout << amount << " hit points back." << std::endl;
    }
    else
        std::cout << "the ClapTrap have no hit_points to be Repaired ." << std::endl;
}

ClapTrap::~ClapTrap(){
    std::cout << this->name << "was destroyed ." << std::endl;
}