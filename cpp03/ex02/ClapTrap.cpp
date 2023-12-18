/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:52:26 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/17 17:52:08 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Hit_points(10), Ene_points(10), Att_damage(0){
    this->name = "ClapTrap";
    std::cout << "Claptrap default" << std::endl;

}

ClapTrap::ClapTrap(std::string name) : Hit_points(10), Ene_points(10), Att_damage(0){
    this->name = name;
    std::cout << this->name << " is a ClapTrap that created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    this->name = copy.name;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &operat)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &operat)
        this->name = operat.name;
    return *this;
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
        std::cout << this->name << " have no hit_points to take the damage ." << std::endl;
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
    std::cout << "ClapTrap was destroyed ." << std::endl;
}