
#include "Form.hpp"

Form::Form() : name ("Form"), s_grade(0), e_grade(0){
    std::cout << "Default Constractor ." << std::endl;
}

Form::Form(const std::string name, int s_grade, int e_grade) : name(name), s_grade(s_grade), e_grade(e_grade){
    std::cout << name << " was created ." << std::endl;
    this->is_sign = 0;
    if(s_grade < 1)
        throw Form::GradeTooHighException();
    else if (s_grade > 150)
        throw Form::GradeTooLowException();
    if(e_grade < 1)
        throw Form::GradeTooHighException();
    else if (e_grade > 150)
        throw Form::GradeTooLowException();
}

const std::string Form::getName() const {
    return(this->name);
}

int Form::gets_Grade() const {
    return(this->s_grade);
}

int Form::gete_Grade() const {
    return(this->e_grade);
}

bool    Form::get_is_signed() const{
    return(this->is_sign);
}

Form::Form(const Form &copy) : name(copy.name), s_grade(copy.s_grade), e_grade(copy.e_grade){
    *this = copy;
}

Form & Form::operator=(const Form &operat){
    if(this != &operat)
        this->is_sign = operat.is_sign;
    return *this;
}

void    Form::beSigned( const Bureaucrat & bur ){
    if (this->is_sign == 1)
        throw Form::AlreadySignedException();
    if (this->s_grade < bur.getGrade())
        throw Bureaucrat::GradeTooLowException();
    this->is_sign = 1;
}

Form::~Form(){
    std::cout << this->name << " was Destroyed ." << std::endl;
}

std::ostream &operator<<(std::ostream &out,const Form &overloaded){
    out << overloaded.getName() << ", bureaucrat grade  required to sign is : " << overloaded.gets_Grade();
    std::cout << ", and bureaucrat grade  required to execute is : " << overloaded.gete_Grade() << std::endl;
    return out;
}