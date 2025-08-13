#include "zombie.hpp"

Zombie::Zombie(std::string name)
{
    zombieName = name;
}
void Zombie::announce()
{
    std::cout << zombieName << " : BraiiiiiiinnnzzzZ..." << std::endl;
} 

Zombie* newZombie( std::string name )
{
    Zombie *newZombie = new Zombie(name);
    return(newZombie);
}
void randomChump(std::string name)
{
    Zombie random(name);
    random.announce();
}
Zombie::~Zombie()
{ 
    std::cout << zombieName << " is dead." << std::endl;
}