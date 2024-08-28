/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 13:29:49 by lmoran            #+#    #+#             */
/*   Updated: 2024/08/28 14:59:16 by lmoran           ###   ########.fr       */
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

void Contact::get_info(std::string info){
    if (fn == "" )
        std::cout << "Contact doesn't exist... make sure to add a contact to this index first!";
    if (info == "firstname" || info == "fn")
        std::cout << "First name: " << fn;    
    else if (info == "lastname" || info == "ln")
        std::cout << "Last name: " << ln;    
    else if (info == "nickname" || info == "nn")
        std::cout << "Nickname: " << nn;    
    else if (info == "phone number" || info == "phonenumber" || info == "pn")
        std::cout << "Phone number: " << pn;    
    else if (info == "secret" || info == "dark secret" || info == "sc")
        std::cout << "Dark secret: " << sc;    
    else
        std::cout << "Make sure to enter a correct info about the contact...";
    std::cout << std::endl;

}
