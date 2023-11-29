/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:29:10 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/29 20:00:00 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Weapon.hpp"

void HumanA::attack(void)
{
    std::cout << this->name << "attacks with their " << this->type << std::endl;
}