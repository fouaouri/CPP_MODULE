/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:47:14 by fouaouri          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/09 23:14:57 by fouaouri         ###   ########.fr       */
=======
/*   Updated: 2024/01/12 15:52:32 by fouaouri         ###   ########.fr       */
>>>>>>> 52297049e7358b69f881e2bdd35bcdfef4d385a5
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(){
    std::cout << "Default Constractor ." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137){
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy){
    *this = copy;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &operat){
    if(this != &operat)
    {
        AForm::operator=(operat);
        this->target = operat.target;
    }
    return *this;
}

void    ShrubberyCreationForm::Inform() const{
    std::string filename = this->target + "_shrubbery";
    std::ofstream newFile(filename.c_str());
    if(newFile.is_open())
    {
        newFile << "           *" << std::endl;
        newFile << "          * *" << std::endl;
        newFile << "         *   *" << std::endl;
        newFile << "        *     *" << std::endl;
        newFile << "       *       *" << std::endl;
        newFile << "      *         *" << std::endl;
        newFile << "     *           *" << std::endl;
        newFile << "    *             *" << std::endl;
        newFile << "   *               *" << std::endl;
        newFile << "  *                 *" << std::endl;
        newFile << " *                   *" << std::endl;
        newFile << "* * * * * * * * * * * *" << std::endl;
        newFile << "          | |" << std::endl;
        newFile << "          | |" << std::endl;
        newFile << "          | |" << std::endl;
    }
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    if(this->getIs_sign() && this->gete_Grade() > executor.getGrade())
        Inform();
    else
        throw AForm::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destroyed ." << std::endl;
}