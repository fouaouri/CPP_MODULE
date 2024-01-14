/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 00:05:06 by fouaouri          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2024/01/09 23:17:13 by fouaouri         ###   ########.fr       */
=======
/*   Updated: 2024/01/12 16:34:02 by fouaouri         ###   ########.fr       */
>>>>>>> 52297049e7358b69f881e2bdd35bcdfef4d385a5
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(){
    Intern ShrubberyCreationForm;
    AForm *rrf;
    std::string form = "ShrubberyCreationFormm";
    std::string target = "tar";
    rrf = ShrubberyCreationForm.makeForm(form, target);
    delete rrf;
    return 0;
}
