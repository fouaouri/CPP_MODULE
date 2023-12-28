#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    private :
        std::string target;
    public :
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm & copy);
    RobotomyRequestForm & operat=(const RobotomyRequestForm & operat);
    virtual~RobotomyRequestForm();
};