/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:44:12 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/08 16:02:02 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie *z1 = newZombie("John");
    z1->announce();
    Zombie *z2 = newZombie("Tom");
    z2->announce();
    randomChump("john");
    randomChump("tom");
    delete(z1);
    delete(z2);
    return(0);
}