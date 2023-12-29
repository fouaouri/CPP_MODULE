#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(){
    std::cout << "RobotomyRequestForm Default Constractor ." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, int s_grade, int e_grade) : AForm("Robotomy", 0, 0){
    std::cout << name << " was created ." << std::endl;
    this->is_sign = 0;
    if(gets_Grade() < 1 || gete_Grade() < 1)
        throw RobotomyRequestForm::GradeTooHighException();
    else if (gets_Grade() > 72)
        throw RobotomyRequestForm::GradeTooLowException();
    else if (gets_Grade() > 45)
        throw RobotomyRequestForm::GradeTooLowException();
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy){
    *this = copy;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &operat){
    if(this != &operat)
        this->target = operat.target;
    return *this;
}

void    RobotomyRequestForm::Inform(std::string &target){
    std::cout << target << " has been robotomizedsuccessfully 50\% of the time." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destroyd ." << std::endl;
}