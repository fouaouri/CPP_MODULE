/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:06 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/10 18:36:29 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
    int grade = 10;
    Bureaucrat Bur("Titim", grade);
    std::cout << Bur;
    try{
        RobotomyRequestForm Pform("target");
        Bur.signAForm(Pform);
        Bur.executeForm(Pform);
    }
    catch (std::exception & e){
        std::cout << "ERROR : " << e.what() << std::endl;
    }
    return 0;
}