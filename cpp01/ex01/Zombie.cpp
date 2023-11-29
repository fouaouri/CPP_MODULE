/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:44:55 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/28 13:55:16 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string n){
    this->name = n;
	std::cout << n << " was created ." << std::endl;
}

void Zombie::announce( void ){
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void)
{
    
}

Zombie::Zombie(void)
{
    
}