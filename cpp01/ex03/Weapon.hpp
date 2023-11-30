/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:16:59 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/30 11:31:08 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Weapon{
    private :
        std::string type;
    public :
        const std::string& getType(void);
        void setType(std::string Ntype);
        Weapon(void);
        Weapon(std::string t);
        ~Weapon(void);
};