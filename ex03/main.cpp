#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
int main()
{
    Weapon test("rare");
    HumanA bob("bob",test);
    HumanB moha("moha");
    moha.getWeapon(test);
    moha.attack();
    bob.attack();
    test.setType("other");
    bob.attack();
    moha.attack();
}
