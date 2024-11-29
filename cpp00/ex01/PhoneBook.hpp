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
