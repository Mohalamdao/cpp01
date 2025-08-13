#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string humanName;
        Weapon *weapon;

    public:
        HumanB(std::string name);
        void getWeapon(Weapon &newWeapon); 
        void attack();
};
#endif