#include "ClapTrap.hpp"


ClapTrap::ClapTrap()
{
    std::cout << "constructor default called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name),Hit(10),Energy(10),attackDammage(0)
{
    std::cout << "constructor Parameterized default called" << std::endl;
}

ClapTrap::~ClapTrap()
{
     std::cout << "deconstructor default called" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    if(Hit > 0 && Energy > 0)
    {
        std::cout << "ClapTrap " << name << " attacks " << target <<  " causing " << attackDammage << " points of damage! " << std::endl;
        Energy--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
     if(Hit > 0 && Energy > 0)
    {
        std::cout <<  name << " take Dammmage " <<  amount << std::endl;
        Hit -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
     if(Hit > 0 && Energy > 0)
    {
        std::cout << name << " gets points of hit " << amount << std::endl;
        Hit +=amount;
        Energy--;
    }
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}
void ClapTrap::setHit(int n)
{
    Hit = n;
}

void ClapTrap::setEnergy(int eng)
{
    Energy = eng;
}

void ClapTrap::setAttackDammage(int dammage)
{
   attackDammage = dammage;
}