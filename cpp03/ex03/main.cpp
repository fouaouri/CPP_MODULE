/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:52:37 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/18 18:59:24 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    ClapTrap clap("Claap");
    ScavTrap scav("Scav");
    FragTrap frag("Frag");
    DiamondTrap diam("diamond");
    diam.whoAmI();
    diam.attack("target");
    // diam.beRepaired(3);
    // diam.takeDamage(2);
    // diam.highFivesGuys();
    // diam.guardGate();
}