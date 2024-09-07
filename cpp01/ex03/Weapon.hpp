#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>
#include <sstream>

class Weapon{
    private:
        std::string _type;
    
    public:
        Weapon(std::string type);
        ~Weapon();
        std::string &getType(void) const;
        void setType(std::string type);

};

#endif