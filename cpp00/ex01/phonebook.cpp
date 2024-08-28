/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:22:43 by lmoran            #+#    #+#             */
/*   Updated: 2024/08/28 16:56:01 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(){
    std::cout << "Welcome to your very own (and very limited) phonebook!" << std::endl;
}

PhoneBook::~PhoneBook(){
    std::cout << "\nPhonebook burnt, destroyed, anihilated... bye-bye!" << std::endl;
}

void PhoneBook::add(void){
    std::string input;
    static int i;
    int fix = 0;

    std::cout << "\nThe contacts MUST have a first name, last name, and phone number.\n";
    if (i == 8){
        std::cout << "Also, you already have 8 contacts; overwriting from the 1st contact\n";
        i = 0;
    }
    std::cout << "\nAdding contact [" << i + 1 << "]\n";
    input = "";
    while (!std::cin.eof() && input == ""){
        if (fix > 0)
            std::cout << "  Please enter a first name: ";
        if (std::getline(std::cin, input) && input != "")
            contacts[i].set_info("fn", input);
        fix++;
    }
    input = "";
    while (!std::cin.eof() && input == ""){
        std::cout << "  Please enter a last name: ";
        if (std::getline(std::cin, input) && input != "")
            contacts[i].set_info("ln", input);
    }
    input = "";
    if (!std::cin.eof() && input == ""){
        std::cout << "  Enter a nickname for the contact: ";
        std::getline(std::cin, input);
        contacts[i].set_info("nn", input);}
    input = "";
    while (!std::cin.eof() && input.size() != 10){
        std::cout << "  Enter a 10 digit number for the contact: ";
        if (std::getline(std::cin, input) && input.size() == 10)
            contacts[i].set_info("pn", input);
    }
    input = "";
    if (!std::cin.eof() && input == ""){
        std::cout << "  Enter a dark secret for the contact: ";
        std::getline(std::cin, input);
        contacts[i].set_info("sc", input);}
    i++;
}

void PhoneBook::print_info(int index){
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
    while (std::cin.eof() && std::getline(std::cin, index) && index == ""){
        intex = std::atoi(index.c_str());
        if (index.size() == 1 && intex >= 1 && intex <= 8){
            std::cout << "What specific info do you want for Contact number " << intex << " (leave empty for all info): ";
            std::getline(std::cin, info);
            if (info == "")
                print_info(std::atoi(index.c_str() - 1));
            else
                contacts[std::atoi(index.c_str() - 1)].get_info(info);
        }
        else
            std::cout << "Please enter a number between 1 and 8...";
    }
}

int main(void)
{
    std::string input;
    PhoneBook phonebook;

    while (!std::cin.eof())
    {
        std::cout << "\nEnter ADD to create a contact, SEARCH to look up info about contacts, and EXIT to... exit!\n---> ";
        std::cin >> input;
        if (input == "ADD")
            phonebook.add();
        else if (input == "SEARCH")
            phonebook.search();
        else if (input == "EXIT")
            return 0;
        else{
            if (!std::cin.eof())
                std::cout << "\nEnter ADD to create a contact, SEARCH to look up info about contacts, and EXIT to... exit!\n---> ";
        }
    }
}
