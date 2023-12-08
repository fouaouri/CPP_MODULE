/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zomvieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:44:59 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/08 16:47:37 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::setName(Zombie z, std::string name)
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
        zombie->setName(zombie[i], name);
        zombie->announce();
    }
    return zombie;
}