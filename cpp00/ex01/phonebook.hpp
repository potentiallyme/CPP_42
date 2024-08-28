/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:22:46 by lmoran            #+#    #+#             */
/*   Updated: 2024/08/28 16:50:32 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "contact.hpp"

class PhoneBook {
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();
        void add(void);
        void search(void);
        void print_info(int index);
};

#endif