#include "Animal.hpp"
#include <iostream>

Animal::Animal() : type("Generic") {
    std::cout << "Animal Constructeur par défaut" << std::endl;
}
Animal::Animal(const Animal& other) : type(other.type) {
    std::cout << "Animal Constructeur par copie" << std::endl;
}
Animal& Animal::operator=(const Animal& rhs) {
    std::cout << "Animal Affectation (copie)" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return *this;
}
Animal::~Animal() {
    std::cout << "Animal Destructeur" << std::endl;
}
void Animal::makeSound() const {
    std::cout << "Animal * Son animal générique *" << std::endl;
}
std::string Animal::getType() const {
    return type;
}