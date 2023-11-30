/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:20:38 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/30 11:55:13 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>
#include "Weapon.hpp"
class Weapon;
class HumanA{
    private :
        std::string name;
        Weapon& gun;
        
    public :
        void attack(void);
        HumanA(void);
        HumanA(std::string n, Weapon &club);
        ~HumanA(void);
};