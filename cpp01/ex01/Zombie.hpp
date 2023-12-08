/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 13:45:06 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/08 16:47:47 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cstring>

class Zombie{
	private :
		std::string name;
	public :
        void setName(Zombie z, std::string name);
		void announce( void );
		Zombie(void);
		Zombie(std::string n);
		~Zombie(void);
};
Zombie* zombieHorde( int N, std::string name );