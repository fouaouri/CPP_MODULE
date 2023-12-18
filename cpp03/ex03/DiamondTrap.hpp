/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 21:46:53 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/18 18:57:50 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    private :
        std::string name;
    public :
        DiamondTrap();
        DiamondTrap(const DiamondTrap& copy);
        DiamondTrap & operator=(const DiamondTrap& operat);
        DiamondTrap(std::string name);
        void attack(const std::string &target);
        void whoAmI();
        ~DiamondTrap();
};