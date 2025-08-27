#include "Cat.hpp"
#include <iostream>

Cat::Cat() {
    type = "Cat";
    std::cout << "Cat Constructeur" << std::endl;
}
Cat::Cat(const Cat& other) : Animal(other) {
    std::cout << "Cat Constructeur par copie" << std::endl;
}
Cat& Cat::operator=(const Cat& rhs) {
    Animal::operator=(rhs);
    std::cout << "Cat Affectation (copie)" << std::endl;
    return *this;
}
Cat::~Cat() {
    std::cout << "Cat Destructeur" << std::endl;
}
void Cat::makeSound() const {
    std::cout << "Cat MEOW!" << std::endl;
}