/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 16:49:32 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/23 17:42:46 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Contact::getFirstName(){
	return FirstName;
}

std::string Contact::getLastName(){
	return LastName;
}
		
std::string Contact::getNickName(){
	return NickName;
}
		
std::string Contact::getPhoneNumber(){
	return PhoneNumber;
}
		
std::string Contact::getDarketsSec(){
	return DarketsSec;
}
	//setter
void Contact::setFirstName(std::string newFirstName){
	FirstName = newFirstName;
}
		
void Contact::setLastName(std::string newLastName){
	LastName = newLastName;
}
		
void Contact::setNickName(std::string newNickName){
	NickName = newNickName;
}
		
void Contact::setPhoneNumber(std::string newPhoneNumber){
	PhoneNumber = newPhoneNumber;
}

void Contact::setDarketsSec(std::string newDarketsSec){
	DarketsSec = newDarketsSec;
}
