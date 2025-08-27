#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat() {
    type = "WrongCat";
    std::cout << "WrongCat Constructeur" << std::endl;
}
WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other) {
    std::cout << "WrongCat Constructeur par copie" << std::endl;
}
WrongCat& WrongCat::operator=(const WrongCat& rhs) {
    WrongAnimal::operator=(rhs);
    std::cout << "WrongCat Affectation (copie)" << std::endl;
    return *this;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat Destructeur" << std::endl;
}
void WrongCat::makeSound() const {
    std::cout << "WrongCat MEUUUH!" << std::endl;
}