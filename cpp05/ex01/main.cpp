/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:06 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/08 14:41:00 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(){
    int grade = 12;
    int s_grade = 100;
    int e_grade = 50;
    Bureaucrat Bur("Titim", grade);
    std::cout << Bur;
    try{
        Form form("form", s_grade, e_grade);
        std::cout << form.get_is_signed() << std::endl;
        Bur.signForm(form);
    }
    catch (std::exception & e){
        std::cout << "ERROR : " << e.what() << std::endl;
    }
    return 0;
}