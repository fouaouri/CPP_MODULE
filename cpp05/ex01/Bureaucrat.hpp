/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:04:49 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/25 00:29:08 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <iostream>
#include <stdexcept>

class Form;
class Bureaucrat{
    private :
        const   std::string name;
        int     grade;
    public :
        Bureaucrat();
        Bureaucrat(const std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat & operator=(const Bureaucrat &operat);
        const std::string getName() const;
        int getGrade() const;
        void    Increment_grade();
        void    Decrement_grade();
        void    signForm(Form &form);
        class GradeTooHighException : public std::exception{
            public :
                const char* what() const throw() {
                    return "The grade is too hight .";
                }
        };
        class GradeTooLowException : public std::exception{
            public :
                const char* what() const throw() {
                    return "The grade is too low .";
                }           
        };
        ~Bureaucrat();
};

std::ostream &operator<<(std::ostream &out,const Bureaucrat &overloaded);