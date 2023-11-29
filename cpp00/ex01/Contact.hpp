/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fouaouri <fouaouri@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 19:42:03 by fouaouri          #+#    #+#             */
/*   Updated: 2023/11/26 14:38:52 by fouaouri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Contact{
    
    private :
        std::string  FirstName;
        std::string  LastName;
        std::string  NickName;
        std::string  PhoneNumber;
        std::string  DarkestSec;
    public :
    //getter
        std::string getFirstName();
        std::string getLastName();   
        std::string getNickName();        
        std::string getPhoneNumber();       
        std::string getDarkestSec();
    //setter
        void setFirstName(std::string newFirstName);
        void setLastName(std::string newLastName);        
        void setNickName(std::string newNickName);       
        void setPhoneNumber(std::string newPhoneNumber);
        void setDarkestSec(std::string newDarkestSec);       
        void    set_len0(int index);
        void    set_len(int index);
};
