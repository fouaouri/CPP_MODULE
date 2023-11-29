/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:44:12 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/28 13:48:36 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie *z1 = newZombie("Titim");
    Zombie *z2 = newZombie("Saad");
    randomChump("titim");
    randomChump("saad");
    z1->announce();
    z2->announce();
    return(0);
}