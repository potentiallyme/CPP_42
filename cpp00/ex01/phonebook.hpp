/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@students.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:22:46 by lmoran            #+#    #+#             */
/*   Updated: 2024/05/14 15:45:15 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include <iostream>

class PhoneBook {
    private:
    //
    public:
        PhoneBook();
        ~PhoneBook();

};

class Contact {

    private:
        //
    public:
        Contact();
        ~Contact();
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string number;
        std::string secret;
};

#endif