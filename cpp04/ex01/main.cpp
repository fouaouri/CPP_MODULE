/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 18:28:21 by fouaouri          #+#    #+#             */
/*   Updated: 2023/12/22 02:49:49 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    Animal *a[4];
    a[0] = new Cat();
    a[1] = new Cat();
    a[2] = new Dog();
    a[3] = new Dog();
    delete j;
    delete i;
    for(int i = 0; i < 4; i++)
        delete a[i];
    return 0;
}