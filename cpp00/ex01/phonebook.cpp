#include "phonebook.hpp"
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@students.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:22:43 by lmoran            #+#    #+#             */
/*   Updated: 2024/05/14 14:22:44 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(){
    std::cout << "Phonebook created" << std::endl;
}

PhoneBook::~PhoneBook(){
    std::cout << "Phonebook destroyed" << std::endl;
}

Contact::Contact(){
    std::cout << "Contact created" << std::endl;
}

Contact::~Contact(){
    std::cout << "Contact destroyed" << std::endl;
}

void add_contact(PhoneBook phonebook){
    std::string fn;
    std::string ln;
    std::string nn;
    std::string nb;
    std::string sc;

    std::cout << "Enter a first name for the contact";
    std::getline(std::cin, fn);
    std::cout << "Enter a last name for the contact";
    std::getline(std::cin, ln);
    std::cout << "Enter a nickname for the contact";
    std::getline(std::cin, nn);
    std::cout << "Enter a 10 digit number for the contact";
    std::getline(std::cin, nb);
    std::cout << "Enter a first name for the contact";
    std::getline(std::cin, sc);
}

void search_contact(){

}

int main(void)
{
    std::string input;
    PhoneBook phonebook;

    while (!std::cin.eof())
    {
        std::cout << "ADD / SEARCH / EXIT\n";
        std::cin >> input;
        if (input == "ADD")
            add_contact(&phonebook);
        else if (input == "SEARCH")
            search_contact();
        else if (input == "EXIT")
            return 0;
        else
            if (!std::cin.eof())
                std::cout << "ADD / SEARCH / EXIT\n";
    }
}
