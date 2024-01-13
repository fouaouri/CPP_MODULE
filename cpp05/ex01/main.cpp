/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:06 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/12 15:25:11 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(){
    int grade = 130;
    int s_grade = 2;
    int e_grade = 50;
    Bureaucrat Bur("Titim", grade);
    std::cout << Bur;
    try{
        Form form("form", s_grade, e_grade);
        std::cout << form;
        Bur.signForm(form);
        std::cout << form.get_is_signed() << std::endl;
    }
    catch (std::exception & e){
        std::cout << "ERROR : " << e.what() << std::endl;
    }
    return 0;
}