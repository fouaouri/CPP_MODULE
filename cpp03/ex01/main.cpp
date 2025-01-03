/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:12:48 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/16 18:59:13 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ClapTrap clap;
    ScavTrap scav;
    clap.attack("target");
    clap.takeDamage(2);
    clap.beRepaired(2);
    scav.attack("target");
    scav.guardGate();
    scav.takeDamage(2);
    scav.beRepaired(2);
}