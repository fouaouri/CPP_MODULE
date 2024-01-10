/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 10:20:44 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/10 18:28:15 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
    
}

Intern::Intern(const Intern &copy){
    *this = copy;
}

Intern &Intern::operator=(const Intern &operat){
    (void)operat;
    return *this;
}

AForm    *Intern::makeForm(const std::string &name, const std::string &target){
    std::string str[3] = {"PresidentialPardonForm", "RobotomyRequestForm", "ShrubberyCreationForm"};
    AForm    *ptr[3];
    ptr[0] = new PresidentialPardonForm(target);
    ptr[1] = new RobotomyRequestForm(target);
    ptr[2] = new ShrubberyCreationForm(target);

    for (int i = 0; i < 3; i++)
    {
        if(str[i] == name)
        {
            std::cout << "Intern creates " << str[i] << std::endl;
            for(int k = 0; k < 3; k++)
            {
                if(k != i)
                    delete ptr[k];
            }
            return ( ptr[i]);
        }
    }
    std::cout << name << " form doesnt exist try to change it !" << std::endl;
    for(int k = 0; k < 3; k++)
        delete ptr[k];
    return(NULL);
}

Intern::~Intern(){
    
}