#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>
#include <memory>

class Zombie
{
    private:
        std::string zombieName;

    public:
        Zombie();
        void setName(std::string name);
        ~Zombie();
        void announce();

};
Zombie* zombieHorde( int N, std::string name );
#endif