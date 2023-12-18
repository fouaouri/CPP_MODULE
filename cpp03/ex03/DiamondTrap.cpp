/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:54:11 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/18 19:01:16 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap(){
    ClapTrap();
    this->Hit_points = FragTrap::Hit_points;
    this->Ene_points = ScavTrap::Ene_points;
    this->Att_damage = FragTrap::Att_damage;
    this->name = "FragTrap";
    std::cout << "DiamondTrap default ." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(), ScavTrap()
{
    ClapTrap::name = name + "_clap_name";
    this->Hit_points = 100;
    this->Ene_points = 50;
    this->Att_damage = 30;
    this->name = name;
    std::cout << "DiamondTrap was created ." << std::endl;
}

void DiamondTrap::attack(const std::string &target){
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI(){
    std::cout << "My name is : " << this->name << std::endl;
    std::cout << "The ClapTrap name is : " << this->getname() << std::endl;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap was destroyed ." << std::endl;
}
