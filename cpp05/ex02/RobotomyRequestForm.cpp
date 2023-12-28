#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : name ("RobotomyRequestForm"), s_grade(0), e_grade(0){
    std::cout << "RobotomyRequestForm Default Constractor ." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string name, int s_grade, int e_grade) : name(name), s_grade(s_grade), e_grade(e_grade){
    std::cout << name << " was created ." << std::endl;
    this->is_sign = 0;
    if(s_grade < 1)
        throw RobotomyRequestForm::GradeTooHighException();
    else if (s_grade > 150)
        throw RobotomyRequestForm::GradeTooLowException();
    if(e_grade < 1)
        throw RobotomyRequestForm::GradeTooHighException();
    else if (e_grade > 150)
        throw RobotomyRequestForm::GradeTooLowException();
}