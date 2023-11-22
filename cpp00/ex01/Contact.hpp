/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:42:03 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/22 15:30:37 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Contact{
    
    private :
        std::string  FirstName;
        std::string  LastName;
        std::string  NickName;
        std::string  PhoneNumber;
        std::string  DarketsSec;
    public :
    //getter
        std::string getFirstName(){
            return FirstName;
        }
        std::string getLastName(){
            return LastName;
        }
        std::string getNickName(){
            return NickName;
        }
        std::string getPhoneNumber(){
            return PhoneNumber;
        }
        std::string getDarketsSec(){
            return DarketsSec;
        }
    //setter
        void setFirstName(std::string newFirstName){
            FirstName = newFirstName;
        }
        void setLastName(std::string newLastName){
            LastName = newLastName;
        }
        void setNickName(std::string newNickName){
            NickName = newNickName;
        }
        void setPhoneNumber(std::string newPhoneNumber){
            PhoneNumber = newPhoneNumber;
        }
        void setDarketsSec(std::string newDarketsSec){
            DarketsSec = newDarketsSec;
        }
};
