#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints    = 100;
    _energyPoints = 100;
    _attackDamage = 30;

    std::cout << "FragTrap " << _name << " construit" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap " << _name << " copié" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    ClapTrap::operator=(other);
    std::cout << "FragTrap " << _name << " affecté" << std::endl;
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " détruit" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if (_hitPoints == 0)
    {
    std::cout << "FragTrap " << _name << " ne peut pas attaquer : pas de PV\n";
        return;
    }
    if (_energyPoints == 0)
    {
    std::cout << "FragTrap " << _name << " ne peut pas attaquer : pas d'EP\n";
        return;
    }

    _energyPoints--;
    std::cout << "FragTrap " << _name << " attaque " << target
              << ", inflige " << _attackDamage << " points de dégâts ! "
              << "(EP restant : " << _energyPoints << ")\n";
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << _name << " demande un high five" << std::endl;
}