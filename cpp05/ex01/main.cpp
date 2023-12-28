/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:06 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/25 00:05:47 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(){
    int grade = 3;
    int s_grade = 100;
    int e_grade = 50;
    Bureaucrat Bur("Titim", grade);
    std::cout << Bur;
    try{
        Form form("form", s_grade, e_grade);
        Bur.signForm(form);
        Bur.signForm(form);
        // form.beSigned(Bur);
    }
    catch (std::exception & e){
        std::cout << "ERROR : " << e.what() << std::endl;
    }
    return 0;
}