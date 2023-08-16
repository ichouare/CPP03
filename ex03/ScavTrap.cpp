#include "./ScavTrap.hpp"


ScavTrap::ScavTrap()
{
    std::cout << "default constructor ScavTrap called" << std::endl;
}
ScavTrap::ScavTrap(std::string name)
{
    
    this->name = name;
    Hit = 100;
    Energy = 50;
    attackDammage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
     std::cout << "ScavTrap deconstructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
      if(Hit > 0 && Energy > 0)
    {
        std::cout << "ScavTrap " << name << " attacks " << target <<  " causing " << attackDammage << " points of damage! " << std::endl;
        Energy--;
    }
}


void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " now in Gate keeper mode"  << std::endl;
}