/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:46:53 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/12 16:29:38 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include <cmath>

class RobotomyRequestForm : public AForm{
    private :
        std::string target;
    public :
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm & copy);
    RobotomyRequestForm & operator=(const RobotomyRequestForm & operat);
    void    Inform()const;
    void execute(Bureaucrat const & executor) const;
    virtual~RobotomyRequestForm();
};