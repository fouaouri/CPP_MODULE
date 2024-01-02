/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:06 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/01 10:12:48 by fouaouri         ###   ########.fr       */
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
        
        // ShrubberyCreationForm Sform("target");
        PresidentialPardonForm Pform("target");
        // RobotomyRequestForm Rform("target");
        Bur.signAForm(Pform);
        // Sform.execute(Bur);
        Bur.executeForm(Pform);
        Pform.execute(Bur);
        // Rform.execute(Bur);
        
    }
    catch (std::exception & e){
        std::cout << "ERROR : " << e.what() << std::endl;
    }
    return 0;
}