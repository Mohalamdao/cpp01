#include "Weapon.hpp"

Weapon::Weapon(std::string Weapon)
{
    type = Weapon;
}
const std::string& Weapon::getType() const
{
    return(type);
}
void Weapon::setType(std::string newWeapon)
{
    type = newWeapon;
}

