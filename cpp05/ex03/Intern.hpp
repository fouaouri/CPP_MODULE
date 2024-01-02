/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 10:20:33 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/01 13:53:17 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern{
    public :
        AForm  *makeForm(const std::string &name, const std::string &target);
        Intern();
        Intern(const Intern &copy);
        Intern & operator=(const Intern &operat);
        ~Intern();
};