/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:35:48 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/28 13:38:07 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Zombie{
	private :
		std::string name;
	public :
		void announce( void );
		
		std::string getName(void);
		
		Zombie(void);
		Zombie(std::string n);
		~Zombie(void);
};
void randomChump(std::string name);
Zombie* newZombie( std::string name );