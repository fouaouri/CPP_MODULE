/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 15:25:11 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/16 23:28:13 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap{
    private :
        std::string name;
        int Hit_points;
        int Ene_points;
        int Att_damage;
    public :
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ClapTrap & operator=(const ClapTrap& operat);
        ClapTrap(std::string name);
        ~ClapTrap();
};