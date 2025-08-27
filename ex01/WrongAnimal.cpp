#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
    std::cout << "WrongAnimal Constructeur" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type) {
    std::cout << "WrongAnimal Constructeur par copie" << std::endl;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& rhs) {
    std::cout << "WrongAnimal Affectation (copie)" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return *this;
}
WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal Destructeur" << std::endl;
}
std::string WrongAnimal::getType() const {
    return type;
}
void WrongAnimal::makeSound() const {
    std::cout << "[WrongAnimal] PIOUPIOU!" << std::endl;
}