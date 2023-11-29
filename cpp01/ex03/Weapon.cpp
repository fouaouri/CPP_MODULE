/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:28:51 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/29 19:59:33 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include " Weapon.hpp"

Weapon Weapon(std::string type)
{
       
}

const std::string& Weapon::getType(void)
{
    return type;
}

void Weapon::setType(std::string Ntype)
{
    type = Ntype;
}