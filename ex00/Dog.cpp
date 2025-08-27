#include "Dog.hpp"
#include <iostream>

Dog::Dog() {
    type = "Dog";
    std::cout << "Dog Constructeur" << std::endl;
}
Dog::Dog(const Dog& other) : Animal(other) {
    std::cout << "Dog Constructeur par copie" << std::endl;
}
Dog& Dog::operator=(const Dog& rhs) {
    Animal::operator=(rhs);
    std::cout << "Dog Affectation (copie)" << std::endl;
    return *this;
}
Dog::~Dog() {
    std::cout << "Dog Destructeur" << std::endl;
}
void Dog::makeSound() const {
    std::cout << "Dog WOOF!" << std::endl;
}