/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:52:34 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/18 18:47:29 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
    public :
        FragTrap();
        FragTrap(const FragTrap& copy);
        FragTrap & operator=(const FragTrap& operat);
        FragTrap(std::string name);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};