#include "HumanB.hpp"

HumanB::HumanB(std::string name): humanName(name), weapon(nullptr)
{
}
void HumanB::getWeapon(Weapon &newWeapon)
{
    this->weapon = &newWeapon;
}
void HumanB::attack()
{
    if(weapon)
        std::cout << humanName << " attacks with their " << weapon->getType() << std::endl ;
    else
        std::cout << "ici" << std::endl ; 
}