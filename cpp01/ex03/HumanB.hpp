/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:24:08 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/30 12:44:55 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class HumanB{
    private :
        std::string name;
        Weapon *gun;
    public :
        void attack(void);
        void setWeapon(Weapon &club);
        HumanB(void);
        HumanB(std::string name);
        ~HumanB(void);
};