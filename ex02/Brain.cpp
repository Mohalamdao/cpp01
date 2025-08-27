#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
    std::cout << "Brain Constructeur" << std::endl;
}

Brain::Brain(const Brain& other)
{
    for (int i = 0; i < 100; ++i)
        this->ideas[i] = other.ideas[i];
    std::cout << "Brain Copie" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; ++i)
            this->ideas[i] = other.ideas[i];
    }
    std::cout << "Brain Affectation" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructeur" << std::endl;
}

void Brain::setIdea(int index, const std::string& idea)
{
    if (index >= 0 && index < 100)
        this->ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
    if (index >= 0 && index < 100)
        return this->ideas[index];
    return "";
}