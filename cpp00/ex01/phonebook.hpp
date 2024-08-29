/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:22:46 by lmoran            #+#    #+#             */
/*   Updated: 2024/08/29 12:01:57 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
        int  i;
    public:
        PhoneBook();
        ~PhoneBook();
        void add(void);
        void search(void);
        void print_info(int index);
};

#endif