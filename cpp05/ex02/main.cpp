/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:06 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/31 12:33:15 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(){
    int grade = 26;
    Bureaucrat Bur("Titim", grade);
    std::cout << Bur;
    try{
        
        // ShrubberyCreationForm Sform("target");
        PresidentialPardonForm Pform("target");
        // RobotomyRequestForm Rform("target");
        Bur.signAForm(Pform);
        // Sform.execute(Bur);
        Pform.execute(Bur);
        // Rform.execute(Bur);
        
    }
    catch (std::exception & e){
        std::cout << "ERROR : " << e.what() << std::endl;
    }
    return 0;
}