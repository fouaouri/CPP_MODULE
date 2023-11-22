/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:02:08 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/13 19:02:11 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    int i, j;
    if (ac >= 2)
    {
        for(i = 1; av[i]; i++)
        {
            j = 0;
            for(j = 0; av[i][j]; j++)
                std::cout << (char)toupper(av[i][j]);
            // std::cout << ' ';
        }
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return(0);
}