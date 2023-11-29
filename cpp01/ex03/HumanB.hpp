/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:24:08 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/28 15:28:38 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class HumanB{
    private :
        std::string Weapon;
        std::string name;
    public :
        void attack(void);
         HumanB(void);
        HumanB(std::string name);
        ~HumanB(void);
};