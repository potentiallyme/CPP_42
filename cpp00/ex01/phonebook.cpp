/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:22:43 by lmoran            #+#    #+#             */
/*   Updated: 2024/08/29 13:49:22 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(){
    std::cout << "Welcome to your very own (and very limited) phonebook!" << std::endl;
    i = 0;
}

PhoneBook::~PhoneBook(){
    std::cout << std::endl << "Phonebook burnt, destroyed, anihilated... bye-bye!" << std::endl << std::endl;
}

void PhoneBook::add(void){
    std::string input;

    std::cout << std::endl << "The contacts MUST have a first name, last name, and phone number." << std::endl;
    if (i == 8){
        std::cout << "Also, you already have 8 contacts; overwriting from the 1st contact" << std::endl;
        i = 0;
    }
    std::cout << std::endl << "Adding contact [" << i + 1 << "]" << std::endl;
    input = "";
    while (!std::cin.eof() && input == ""){
        std::cout << "  Please enter a first name: ";
        std::getline(std::cin, input);
        if (input == "EXIT")
            return;
        if (input != "")
            contacts[i].set_info("fn", input);
    }
    input = "";
    while (!std::cin.eof() && input == ""){
        std::cout << "  Please enter a last name: ";
        std::getline(std::cin, input);
        if (input == "EXIT"){
            contacts[i].set_info("fn", "");
            return;
        }
        if (input != "")
            contacts[i].set_info("ln", input);
    }
    input = "";
    if (!std::cin.eof() && input == ""){
        std::cout << "  Enter a nickname for the contact: ";
        std::getline(std::cin, input);
        if (input == "EXIT"){
            contacts[i].set_info("fn", "");
            return;
        }
        contacts[i].set_info("nn", input);}
    input = "";
    while (!std::cin.eof() && input.size() != 10){
        std::cout << "  Enter a 10 digit number for the contact: ";
        std::getline(std::cin, input);
        if (input == "EXIT"){
            contacts[i].set_info("fn", "");
            return;
        }
        if (input.size() == 10)
            contacts[i].set_info("pn", input);
    }
    input = "";
    if (!std::cin.eof() && input == ""){
        std::cout << "  Enter a dark secret for the contact: ";
        std::getline(std::cin, input);
        if (input == "EXIT"){
            contacts[i].set_info("fn", "");
            return;
        }
        contacts[i].set_info("sc", input);}
    i++;
}

void PhoneBook::print_info(int index){
    if (!contacts[index].check_exist())
        return;
    std::cout << std::endl;
    contacts[index].get_info("fn");
    contacts[index].get_info("ln");
    contacts[index].get_info("nn");
    contacts[index].get_info("pn");
    contacts[index].get_info("sc");
}

void PhoneBook::search(void){
    std::string index;
    std::string info;
    int intex = 0;

    std::cout << "Please enter an index for the contact you want to search: ";
    index.clear();
    while (!std::cin.eof() && index == ""){
        std::getline(std::cin, index); 
        if (index == "EXIT")
            return;
        intex = std::atoi(index.c_str());
        if ((index.size() != 1 || intex < 1 || intex > 8))
            std::cout << std::endl << "Please enter a number between 1 and 8: " << std::endl;
        else if (!contacts[intex - 1].check_exist())
            return;
        else{
            std::cout << "What specific info do you want for Contact number " << intex << " (leave empty for all info): ";
            std::getline(std::cin, info);
            if (info == "EXIT" || std::cin.eof())
                return;
            else if (info == "")
                print_info(intex - 1);
            else{
                std::cout << std::endl;
                contacts[intex - 1].get_info(info);
            }
        }
    }
}

int main(void)
{
    int r = 0;
    std::string input;
    PhoneBook phonebook;

    while (input != "EXIT")
    {
        if (r == 0){
            std::cout << std::endl << "Enter ADD to create a contact, SEARCH to look up info about contacts, and EXIT to... exit!" << std::endl;
            r++; }
        std::cout << "●｠";
        std::getline(std::cin, input);
        if (input == "ADD"){
            phonebook.add();
            r = 0; }
        else if (input == "SEARCH"){
            phonebook.search();
            r = 0; }
        if (std::cin.eof()){
            std::cout << std::endl;
            return (0); }
    }
}
