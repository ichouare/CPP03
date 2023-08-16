#include "./FragTrap.hpp"


int main()
{
    FragTrap Person("Dave");

    Person.attack("John");
    Person.takeDamage(10);
    Person.beRepaired(1);

}

