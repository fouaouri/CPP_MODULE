/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:47:14 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/29 16:57:32 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(){
    std::cout << "Default Constractor ." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, int s_grade, int e_grade) : AForm("Shrubbery", 0, 0){
    std::cout << name << " was created ." << std::endl;
    this->is_sign = 0;
    if(gets_Grade() < 1 || gete_Grade() < 1)
        throw ShrubberyCreationForm::GradeTooHighException();
    else if (gets_Grade() > 145)
        throw ShrubberyCreationForm::GradeTooLowException();
    else if (gets_Grade() > 137)
        throw ShrubberyCreationForm::GradeTooLowException();
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy){
    *this = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &operat){
    if(this != &operat)
        this->target = operat.target;
    return *this;
}

void    ShrubberyCreationForm::Inform(std::string &target){
    std::string filename = target + "_shrubbery";
    std::ofstream newFile(filename);
    if(newFile.is_open())
    {
        std::cout << "           *" << std::endl;
        std::cout << "          * *" << std::endl;
        std::cout << "         *   *" << std::endl;
        std::cout << "        *     *" << std::endl;
        std::cout << "       *       *" << std::endl;
        std::cout << "      *         *" << std::endl;
        std::cout << "     *           *" << std::endl;
        std::cout << "    *             *" << std::endl;
        std::cout << "   *               *" << std::endl;
        std::cout << "  *                 *" << std::endl;
        std::cout << " *                   *" << std::endl;
        std::cout << "* * * * * * * * * * * *" << std::endl;
        std::cout << "           | |" << std::endl;
        std::cout << "           | |" << std::endl;
        std::cout << "           | |" << std::endl;
    }
}

ShrubberyCreationForm::ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destroyed ." << std::endl;
}