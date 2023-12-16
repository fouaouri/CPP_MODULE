/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:52:34 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/16 18:55:37 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public :
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void attack(const std::string& target);
        void highFivesGuys(void);
};