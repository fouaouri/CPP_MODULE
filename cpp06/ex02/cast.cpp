/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cast.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 23:40:38 by fouaouri          #+#    #+#             */
/*   Updated: 2024/01/16 17:37:26 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cast.hpp"

Base * generate(void){
    srand(time(0));
    int a = rand() % 3;
    if(a == 0)
        return (new A);
    else if(a == 1)
        return (new B);
    else
        return (new C);
}

void identify(Base* p){
    if(dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Not found !!" << std::endl;
}

void identify(Base& p){
    try{
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
     catch(std::exception &e){
    }
    try{
        B &b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch(std::exception &e){
    }
    try{
        C &c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch(std::exception &e){
    }
}

int main(){
    Base *a = generate();
    Base &b = *a;
    Base *c = NULL;

    identify(a);
    std::cout << "********************" << std::endl;
    identify(b);
    std::cout << "********************" << std::endl;
    identify(c);
}