/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:29:49 by lmoran            #+#    #+#             */
/*   Updated: 2024/08/29 13:41:39 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Contact::Contact(){
    // std::cout << "Contact created" << std::endl;
}

Contact::~Contact(){
    // std::cout << "Contact destroyed" << std::endl;
}

void Contact::set_info(std::string info, std::string str)
{
    if (info == "fn")
        fn = str;
    else if (info == "ln")
        ln = str;
    else if (info == "nn")
        nn = str;
    else if (info == "pn")
        pn = str;
    else if (info == "sc")
        sc = str;
}

int Contact::check_exist(void){
    if (fn == ""){
        std::cout << std::endl << "Contact info doesn't exist... make sure to add a contact to this index first!" << std::endl;
        return 0;
    }
    return 1;
}

void Contact::get_info(std::string info){
    if (info == "firstname" || info == "fn" || info == "first name")
        std::cout << "First name: " << fn;    
    else if (info == "lastname" || info == "ln" || info == "last name")
        std::cout << "Last name: " << ln;    
    else if (info == "nickname" || info == "nn" || info == "nick name")
        std::cout << "Nickname: " << nn;    
    else if (info == "phone number" || info == "phonenumber" || info == "pn")
        std::cout << "Phone number: " << pn;    
    else if (info == "secret" || info == "dark secret" || info == "sc")
        std::cout << "Dark secret: " << sc;    
    else
        std::cout << "Make sure to enter a correct info about the contact...";
    std::cout << std::endl;
}
