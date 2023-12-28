#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : name ("PresidentialPardonForm"), s_grade(0), e_grade(0){
    std::cout << "PresidentialPardonForm Default Constractor ." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) : target(target){
    std::cout << name << " was created ." << std::endl;
    this->is_sign = 0;
    if(s_grade < 1)
        throw PresidentialPardonForm::GradeTooHighException();
    else if (s_grade > 150)
        throw PresidentialPardonForm::GradeTooLowException();
    if(e_grade < 1)
        throw PresidentialPardonForm::GradeTooHighException();
    else if (e_grade > 150)
        throw PresidentialPardonForm::GradeTooLowException();
}