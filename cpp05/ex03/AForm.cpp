/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:24:42 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/12 16:33:40 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : name ("AForm"), s_grade(0), e_grade(0){
    std::cout << "Default Constractor ." << std::endl;
}

AForm::AForm(const std::string name, int s_grade, int e_grade) : name(name), s_grade(s_grade), e_grade(e_grade){
    std::cout << name << " was created ." << std::endl;
    this->is_sign = 0;
    if(s_grade < 1)
        throw AForm::GradeTooHighException();
    else if (s_grade > 150)
        throw AForm::GradeTooLowException();
    if(e_grade < 1)
        throw AForm::GradeTooHighException();
    else if (e_grade > 150)
        throw AForm::GradeTooLowException();
}

const std::string AForm::getName() const {
    return(this->name);
}

int AForm::gets_Grade() const {
    return(this->s_grade);
}

int AForm::gete_Grade() const {
    return(this->e_grade);
}

int AForm::getIs_sign() const{
    return(this->is_sign);
}

AForm::AForm(const AForm &copy) : name(copy.name), s_grade(copy.s_grade), e_grade(copy.e_grade){
    *this = copy;
}

AForm & AForm::operator=(const AForm &operat){
    if(this != &operat)
        this->is_sign = operat.is_sign;
    return *this;
}

void    AForm::beSigned( const Bureaucrat & bur){
    if (this->is_sign == 1)
        throw AForm::AlreadySignedException();
    if (this->s_grade < bur.getGrade())
        throw Bureaucrat::GradeTooLowException();
    this->is_sign = 1;
}

AForm::~AForm(){
    std::cout << this->name << " was Destroyed ." << std::endl;
}

std::ostream &operator<<(std::ostream &out,const AForm &overloaded){
    out << overloaded.getName() << ", bureaucrat grade  required to sign is : " << overloaded.gets_Grade();
    std::cout << ", and bureaucrat grade  required to execute is : " << overloaded.gete_Grade() << std::endl;
    return out;
}