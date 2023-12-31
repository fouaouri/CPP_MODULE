/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:47:04 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/31 12:03:31 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
    private :
        std::string target;
    public :
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm & copy);
    ShrubberyCreationForm & operator=(const ShrubberyCreationForm & operat);
    void    Inform()const;
    void execute(Bureaucrat const & executor) const;
    virtual~ShrubberyCreationForm();
};