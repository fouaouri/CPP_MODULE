/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:27:50 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/08 16:25:34 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void){    
}

Zombie::Zombie(std::string n){
            this->name = n;
			std::cout << n << " was created ." << std::endl;
}

void Zombie::announce( void ){
	std::cout << this->name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
    std::cout << this->name << " destroyed" << std::endl;
}