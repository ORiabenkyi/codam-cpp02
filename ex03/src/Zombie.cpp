
#include "../inc/Zombie.hpp"
#include <iostream>

Zombie::Zombie() :name("Coder")
{
    std::cout << "Zombie " << name << " created." << std::endl;
}

Zombie::Zombie(std::string name) : name(name)
{
    std::cout << "Zombie " << name << " created." << std::endl;
}

Zombie::~Zombie()
{
    std::cout << "Zombie " << name << " destroyed." << std::endl;
}

Zombie::Zombie(const Zombie &otherZombie)
{
	*this = otherZombie;
    std::cout << "Zombie " << otherZombie.name << " copied." << std::endl;
}

Zombie& Zombie::operator=(const Zombie &otherZombie)
{
    if (this != &otherZombie)
    {
        this->name = otherZombie.name;
    }
    return *this;
}

void Zombie::announce( void )
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

