/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:44:55 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/08 16:53:13 by fouaouri         ###   ########.fr       */
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
    std::cout << this->name << " was destroyed ." << std::endl;
}

Zombie::Zombie(void){
}