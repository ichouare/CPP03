#include "./ClapTrap.hpp"

#include <iostream>
class ScavTrap: public virtual ClapTrap
{
    public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    void attack(const std::string& target);
    void guardGate();
};