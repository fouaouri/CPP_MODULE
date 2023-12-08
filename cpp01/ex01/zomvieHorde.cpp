/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zomvieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:44:59 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/08 18:12:59 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName(std::string name)
{
    this->name = name;
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie;
    zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        zombie[i].setName(name);
        zombie->announce();
    }
    return zombie;
}