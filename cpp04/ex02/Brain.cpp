/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 00:27:55 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/20 00:37:04 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain default Constractor ." << std::endl;
}

Brain::Brain(Brain &copy){
    std::cout << "Copy constractor ." << std::endl;
    *this = copy;
}

Brain & Brain::operator=(Brain &operat){
    for(int i = 0; i < 100; i++)
        ideas[i] = operat.ideas[i];
    return *this;
}
        
Brain::~Brain(){
    std::cout << "Brain destractor ." << std::endl;
}