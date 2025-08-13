#include "zombie.hpp"

int main()
{
    Zombie foo("foo");
    foo.announce();
    Zombie *test = newZombie("bob");
    test->announce();
    randomChump("chump");
    delete test;
    
}