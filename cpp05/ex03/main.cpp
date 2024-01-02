/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:06 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/01 14:09:29 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(){
    Intern ShrubberyCreationForm;
    AForm *rrf;
    std::string form = "ShrubberyCreationForm";
    std::string target = "tar";
    rrf = ShrubberyCreationForm.makeForm(form, target);
    delete rrf;
    return 0;
}

