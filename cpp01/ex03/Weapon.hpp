#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>
#include <sstream>

class Weapon{
    private:
        std::string _type;
    
    public:
        Weapon();
        Weapon(std::string type);
        ~Weapon();
        std::string const &getType(void) const;
        void setType(std::string type);
};

#endif
