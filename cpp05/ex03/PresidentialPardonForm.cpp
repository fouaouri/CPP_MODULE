/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:24:35 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/01 10:13:06 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(){
    std::cout << "PresidentialPardonForm Default Constractor ." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target){

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy){
    *this = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &operat){
    if(this != &operat)
        this->target = operat.target;
    return *this;
}

void  PresidentialPardonForm::Inform()const{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(this->getIs_sign() && this->gete_Grade() < executor.getGrade())
        this->Inform();
    else
        throw AForm::GradeTooHighException();
        
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destroyed ." << std::endl;
}
