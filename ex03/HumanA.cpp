#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): humanName(name), weapon(weapon)
{
}
void HumanA::attack()
{
    std::cout << humanName << " attacks with their " << weapon.getType() << std::endl ;
}