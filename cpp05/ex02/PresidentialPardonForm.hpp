#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private :
        std::string target;
    public :
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm & copy);
    PresidentialPardonForm & operat=(const PresidentialPardonForm & operat);
    virtual~PresidentialPardonForm();
};