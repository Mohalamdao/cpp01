#include "zombie.hpp"

int main()
{
    Zombie *horde = zombieHorde(5 , "moha");
    delete[] horde;
}