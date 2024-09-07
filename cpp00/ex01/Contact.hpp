/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmoran <lmoran@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:44:46 by lmoran            #+#    #+#             */
/*   Updated: 2024/09/03 15:21:09 by lmoran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream>
#include <string>
#include <cstdlib>

class Contact {
    private: 
        std::string _fn;
        std::string _ln;
        std::string _nn;
        std::string _pn;
        std::string _sc;
    public:
        Contact(void);
        ~Contact(void);
        int check_exist(void);
        void get_info(std::string info);
        void set_info(std::string info, std::string str);

};

#endif
