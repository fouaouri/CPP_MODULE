/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:54:11 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/16 22:37:59 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
    this->Hit_points = FragTrap::Hit_points;
    this->Ene_points = ScavTrap::Ene_points;
    this->Att_damage = FragTrap::Att_damage;
    this->name = "FragTrap";
    std::cout << "DiamondTrap default ." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap("Fragtrap"), ScavTrap("ScavTrap") 
{
    this->Hit_points = FragTrap::Hit_points;
    this->Ene_points = ScavTrap::Ene_points;
    this->Att_damage = FragTrap::Att_damage;
    std::cout << "DiamondTrap was created ." << std::endl;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "DiamondTrap was destroyed ." << std::endl;
}



