#include "./ScavTrap.hpp"


int main()
{
    ScavTrap Person("Dave");

    Person.attack("John");
    Person.takeDamage(10);
    Person.beRepaired(1);

}

