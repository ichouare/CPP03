#ifndef CLAPTRAP_H
#define CLAPTRAP_H



#include <string.h>
#include <iostream>

class ClapTrap{
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setName(std::string name);
        void setHit(int n);
        void setEnergy(int eng);
        void setAttackDammage(int dammage);
    protected:
        std::string name;
        int Hit;
        int Energy;
        int attackDammage;  
};

#endif