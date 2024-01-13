/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:06 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/12 15:08:46 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
    int grade = 40;
    try{
        Bureaucrat Bur("Titim", grade);
        std::cout << Bur;
        std::cout << "grade before : " << Bur.getGrade() << std::endl;
        Bur.Increment_grade();
        std::cout << "grade after : " << Bur.getGrade() << std::endl;
        std::cout << Bur;
    }
    catch (std::exception & e){
        std::cout << "ERROR : " << e.what() << std::endl;
    }
    return 0;
}