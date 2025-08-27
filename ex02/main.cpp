#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    std::cout << "=== Test de base : polymorphisme ===" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " : ";
    j->makeSound();
    std::cout << i->getType() << " : ";
    i->makeSound();

    delete j;
    delete i;

    std::cout << "\n=== Vérification de la copie profonde ===" << std::endl;

    Dog basicDog;
    basicDog.setIdea(0, "Manger");
    basicDog.setIdea(1, "Dormir");

    Dog copiedDog = basicDog;
    std::cout << "Copie - Idée 0 : " << copiedDog.getIdea(0) << std::endl;
    std::cout << "Copie - Idée 1 : " << copiedDog.getIdea(1) << std::endl;

    basicDog.setIdea(0, "Nouvelle idée");;
    {
        Dog d;
        Cat c;
        d.makeSound();
        c.makeSound();
    }

    return 0;
}