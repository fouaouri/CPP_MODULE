/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zomvieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:44:59 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/28 14:45:24 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::getName(Zombie z, std::string name)
{
    this->name = name;
    z = Zombie(name);
}

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombie;
    int i;
        zombie = new Zombie[N];
    for(i = 0; i < N; i++)
    {
        zombie->getName(zombie[i], name);
        zombie->announce();
    }
    return zombie;
}