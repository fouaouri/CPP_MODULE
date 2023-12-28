#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    private :
        std::string target;
    public :
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm & copy);
    ShrubberyCreationForm & operat=(const ShrubberyCreationForm & operat);
    void ASCII_trees( void );
    virtual~ShrubberyCreationForm();
};