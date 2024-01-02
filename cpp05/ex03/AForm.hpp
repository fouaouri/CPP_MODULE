/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 11:24:49 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/01 09:04:31 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "Bureaucrat.hpp"
#include <iostream>
#include <stdexcept>

class Bureaucrat;
class AForm{
    private :
        const std::string   name;
        const int           s_grade;
        const int           e_grade;
        bool                is_sign;
    public :
        AForm();
        AForm(const std::string name, int s_grade, int e_grade);
        AForm(const AForm &copy);
        AForm & operator=(const AForm &operat);
        const std::string getName() const;
        int gets_Grade() const;
        int gete_Grade() const;
        int getIs_sign() const;
        void    beSigned( const Bureaucrat & bur );
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
        class AlreadySignedException : std::exception{
            public :
                const char* what() const throw() {
                    return "AForm is already signed .";
                }                  
        };
        virtual void execute(Bureaucrat const & executor) const = 0;
        virtual ~AForm();
};