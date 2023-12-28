#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : name ("ShrubberyCreationForm"), s_grade(0), e_grade(0){
    std::cout << "Default Constractor ." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name, int s_grade, int e_grade) : name(name), s_grade(s_grade), e_grade(e_grade){
    std::cout << name << " was created ." << std::endl;
    this->is_sign = 0;
    if(s_grade < 1)
        throw ShrubberyCreationForm::GradeTooHighException();
    else if (s_grade > 145)
        throw ShrubberyCreationForm::GradeTooLowException();
    if(e_grade < 1)
        throw ShrubberyCreationForm::GradeTooHighException();
    else if (e_grade > 137)
        throw ShrubberyCreationForm::GradeTooLowException();
}

