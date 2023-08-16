#include "./FragTrap.hpp"

FragTrap::FrapTrap()
{

}

FragTrap::FragTrap(std::string name)
{
    this->name = name;
    Hit = 100;
    Energy = 100;
    attackDammage = 30;
    std::cout << "FrapTrap constructor is called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FrapTrap destructor is called" << std::endl;
}

void FragTrap::highFivesGuys()
{
     std::cout << "Hi Five gays!!!!!!!" << std::endl;
}