/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:52:37 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/16 19:00:12 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap("Titim");
    ScavTrap scav("Tom");
    FragTrap frag("Frag");
    clap.attack("target");
    clap.takeDamage(2);
    clap.beRepaired(2);
    scav.attack("target");
    scav.guardGate();
    scav.takeDamage(2);
    scav.beRepaired(2);
    frag.attack("target");
    frag.highFivesGuys();
    frag.takeDamage(2);
    frag.beRepaired(2);
}