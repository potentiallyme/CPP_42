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
