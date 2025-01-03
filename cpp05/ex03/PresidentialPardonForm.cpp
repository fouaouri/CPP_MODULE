/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:24:35 by fouaouri          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/09 23:14:43 by fouaouri         ###   ########.fr       */
=======
/*   Updated: 2024/01/12 15:52:18 by fouaouri         ###   ########.fr       */
>>>>>>> 52297049e7358b69f881e2bdd35bcdfef4d385a5
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(){
    std::cout << "PresidentialPardonForm Default Constractor ." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : AForm("PresidentialPardonForm", 25, 5), target(target){

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy){
    *this = copy;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &operat){
    if(this != &operat)
    {
        AForm::operator=(operat);
        this->target = operat.target;
    }
    return *this;
}

void  PresidentialPardonForm::Inform()const{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if(this->getIs_sign() && this->gete_Grade() > executor.getGrade())
        this->Inform();
    else
        throw AForm::GradeTooLowException();
        
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destroyed ." << std::endl;
}
