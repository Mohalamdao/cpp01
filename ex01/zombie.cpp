#include "zombie.hpp"

Zombie::Zombie()
{
}
void Zombie::announce()
{
    std::cout << zombieName << " : BraiiiiiiinnnzzzZ..." << std::endl;
} 
Zombie::~Zombie()
{ 
    std::cout << zombieName << " is dead." << std::endl;
}