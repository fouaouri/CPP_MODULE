/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:01:49 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/09 21:17:42 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <stdio.h>
int main(int ac, char **av)
{
    if (ac == 2)
    {
        
        Harl H;
        std::string a(av[1]);
        H.complain(a);
    }
    else
        std::cout << "The number of arguments must be one!!" << std::endl;
}
