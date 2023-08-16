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
    private:
        std::string name;
        int Hit;
        int Energy;
        int attackDammage;  
};

#endif