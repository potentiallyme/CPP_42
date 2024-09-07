/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:29:49 by lmoran            #+#    #+#             */
/*   Updated: 2024/09/03 15:21:41 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Contact::Contact(){
    // std::cout << "Contact created" << std::endl;
}

Contact::~Contact(){
    // std::cout << "Contact destroyed" << std::endl;
}

void Contact::set_info(std::string info, std::string str)
{
    if (info == "fn")
        _fn = str;
    else if (info == "ln")
        _ln = str;
    else if (info == "nn")
        _nn = str;
    else if (info == "pn")
        _pn = str;
    else if (info == "sc")
        _sc = str;
}

int Contact::check_exist(void){
    if (_fn == ""){
        std::cout << std::endl << "Contact info doesn't exist... make sure to add a contact to this index first!" << std::endl;
        return 0;
    }
    return 1;
}

void Contact::get_info(std::string info){
    if (info == "firstname" || info == "fn" || info == "first name")
        std::cout << "First name: " << _fn;    
    else if (info == "lastname" || info == "ln" || info == "last name")
        std::cout << "Last name: " << _ln;    
    else if (info == "nickname" || info == "nn" || info == "nick name")
        std::cout << "Nickname: " << _nn;    
    else if (info == "phone number" || info == "phonenumber" || info == "pn")
        std::cout << "Phone number: " << _pn;    
    else if (info == "secret" || info == "dark secret" || info == "sc")
        std::cout << "Dark secret: " << _sc;    
    else
        std::cout << "Make sure to enter a correct info about the contact...";
    std::cout << std::endl;
}
