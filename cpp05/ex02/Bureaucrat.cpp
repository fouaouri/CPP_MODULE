/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:20 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/25 00:05:40 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name ("Buur"){
    std::cout << "Default Constractor ." << std::endl;
}

Bureaucrat::Bureaucrat(const std::string name, int grade) : name(name), grade(grade){
    std::cout << name << " was created ." << std::endl;
    if(grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const std::string Bureaucrat::getName() const {
    return(this->name);
}

int Bureaucrat::getGrade() const {
    return(this->grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
    *this = copy;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat &operat){
    if(this != &operat)
        this->grade = operat.getGrade();
    return *this;
}


void    Bureaucrat::Increment_grade(){
    this->grade -= 1;
    if(this->grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::Decrement_grade(){
    this->grade += 1;
    if(this->grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void    Bureaucrat::signAForm(AForm &Aform){
    try{
        Aform.beSigned(*this);
        std::cout << this->name << " signed " << Aform.getName() << " ."<< std::endl;
    }
    catch (std::exception & e){
        std::cout << this->name << " couldnt sign " << Aform.getName() ;
        std::cout << " because " << e.what() << std::endl;
    }

}

Bureaucrat::~Bureaucrat(){
    std::cout << this->name << " was Destroyed ." << std::endl;
}

std::ostream &operator<<(std::ostream &out,const Bureaucrat &overloaded){
    out << overloaded.getName() << ", bureaucrat grade " << overloaded.getGrade() << std::endl;
    return out;
}