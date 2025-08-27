#include <iostream>
#include "Cat.hpp"

Cat::Cat() : brain(new Brain()) {
    type = "Cat";
    std::cout << "Cat Constructeur" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain)) {
    std::cout << "Cat Constructeur par copie" << std::endl;
}

Cat& Cat::operator=(const Cat& rhs) {
    std::cout << "Cat Affectation (copie)" << std::endl;
    if (this != &rhs) {
        Animal::operator=(rhs);
        *brain = *rhs.brain;
    }
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat Destructeur" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat MIAOU!" << std::endl;
}

Brain* Cat::getBrain() const {
    return brain;
}