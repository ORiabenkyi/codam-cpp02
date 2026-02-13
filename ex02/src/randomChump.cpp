#include "../inc/Zombie.hpp"

void randomChump(std::string name)
{
    Zombie oneMoreZombie(name);
    oneMoreZombie.announce();
}
