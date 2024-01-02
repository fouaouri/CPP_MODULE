/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:25:03 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/31 12:03:42 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    private :
        std::string target;
    public :
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm & copy);
    PresidentialPardonForm & operator=(const PresidentialPardonForm & operat);
    void    Inform()const;
    void execute(Bureaucrat const & executor) const;
    virtual~PresidentialPardonForm();
};