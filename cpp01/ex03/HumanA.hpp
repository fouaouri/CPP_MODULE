/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:20:38 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/29 19:49:37 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class HumanA{
    private :
        std::string Weapon;
        std::string name;
    public :
        void attack(void);
        HumanA(void);
        HumanA(std::string name, Weapon club);
        ~HumanA(void);
};