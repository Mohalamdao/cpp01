#include "Dog.hpp"
#include <iostream>

Dog::Dog() : brain(new Brain())
{
    this->type = "Dog";
    std::cout << "Dog Constructeur" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Dog Copie" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    if (this != &other)
    {
        this->type = other.type;
        delete this->brain;
        this->brain = new Brain(*other.brain); // deep copy
    }
    std::cout << "Dog Affectation" << std::endl;
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog Destructeur" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog Wouf!" << std::endl;
}

void Dog::setIdea(int index, const std::string& idea)
{
    if (brain && index >= 0 && index < 100)
        brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
    if (brain && index >= 0 && index < 100)
        return brain->getIdea(index);
    return "";
}