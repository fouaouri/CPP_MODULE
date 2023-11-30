/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:15:26 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/30 19:13:24 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>


std::string    replace(std::string s1, int start, int lenght, std::string s2)
{
    std::string replaced;
    int i = 0;
    for(;;)
    {
        if((size_t)start == std::string::npos)
            break;
        else
        {
            replaced.append(s2, i, i + start);
            while(i < start)
                i++;
            i += lenght;
            // while(start != lenght)
            replaced.append(s2, start, lenght);
        }
    }
    return (replaced);
}

int main(int ac, char **av)
{
    int i  = 0;
    if (ac > 4)
    {
        std::ifstream  file(av[1]);
        std::ofstream newFile("newfile.txt");
        std::string a(av[2]);
        std::string b(av[3]);
        if(file.is_open())
        {
            while(!file.eof())
            {
                std::string line;
                getline(file, line);
                newFile.seekp(i);
                line =  replace(a, line.find(a), a.length(), b);
                i++;
                newFile << line;
            } 
        }
    }
    else
        std::cout << "The number of arguments must be three .. Try again!" << std::endl;
}