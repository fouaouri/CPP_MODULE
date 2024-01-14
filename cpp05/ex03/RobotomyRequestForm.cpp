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
        this->target = operat.target;
    return *this;
}

void    RobotomyRequestForm::Inform()const{
    std::cout << target << " has been robotomizedsuccessfully 50\% of the time." << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    if(this->getIs_sign() && this->gete_Grade() < executor.getGrade())
        Inform();
    else
        throw AForm::GradeTooHighException();
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destroyd ." << std::endl;
}