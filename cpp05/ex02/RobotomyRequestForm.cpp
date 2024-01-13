/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 18:33:13 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/12 15:51:51 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(){
    std::cout << "RobotomyRequestForm Default Constractor ." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45){
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm(copy){
    *this = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &operat){
    if(this != &operat)
    {
         AForm::operator=(operat);
        this->target = operat.target;
    }
    return *this;
}

void    RobotomyRequestForm::Inform()const{
    srand(time(0));
    int a = rand() % 2;
    if(a)
        std::cout<<this->target << " has been robotomized successfully 50 \%  of the time " <<std::endl;
    else
        std::cout<<this->target << " has been failed " <<std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if(this->getIs_sign() && this->gete_Grade() > executor.getGrade())
        Inform();
    else
        throw AForm::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destroyd ." << std::endl;
}