/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 14:22:46 by lmoran            #+#    #+#             */
/*   Updated: 2024/09/03 15:21:02 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
    private:
        Contact _contacts[8];
        int  _i;
    public:
        PhoneBook();
        ~PhoneBook();
        void add(void);
        void search(void);
        void print_info(int index);
};

#endif
