#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void testPolymorphism() {
    std::cout << std::endl << "--- Polymorphism Test ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();

    std::cout << "Type of dog: " << dog->getType() << std::endl;
    std::cout << "Type of cat: " << cat->getType() << std::endl;

    cat->makeSound();  
    dog->makeSound();  
    meta->makeSound(); 

    delete meta;
    delete dog;
    delete cat;
}

void testWrongPolymorphism() {
    std::cout << std::endl << "--- Wrong Polymorphism Test ---" << std::endl;
    const WrongAnimal* wrong = new WrongCat();

    std::cout << "Type: " << wrong->getType() << std::endl;
    wrong->makeSound(); 

    delete wrong;
}

int main() {
    testPolymorphism();
    testWrongPolymorphism();
    return 0;
}