/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:24:35 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/29 16:57:22 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(){
    std::cout << "PresidentialPardonForm Default Constractor ." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("Presidential", 0, 0), target(target){
    std::cout << name << " was created ." << std::endl;
    this->is_sign = 0;
    if(gets_Grade() < 1 || gete_Grade() < 1)
        throw PresidentialPardonForm::GradeTooHighException();
    else if (gets_Grade() > 25)
        throw PresidentialPardonForm::GradeTooLowException();
    else if (gets_Grade() > 5)
        throw PresidentialPardonForm::GradeTooLowException();
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy){
    *this = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &operat){
    if(this != &operat)
        this->target = operat.target;
    return *this;
}

void    PresidentialPardonForm::Inform(std::string &target){
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destroyed ." << std::endl;
}
