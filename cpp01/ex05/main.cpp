/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 16:49:44 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/01 21:38:51 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl H;
    std::string a(av[1]);
    if (ac == 2)
        H.complain(a);
    else
        std::cout << "The number of arguments must be one!!" << std::endl;
}