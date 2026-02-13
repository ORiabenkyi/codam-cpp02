#include "../inc/Zombie.hpp"
#include <iostream>

Zombie *newZombie(std::string name); 
void randomChump(std::string name); 

int main(int count, char *argv[])
{
    std::string my_name1 = "Zombie1";
    std::string my_name2 = "Zombie2";
    if (count == 2)
    {
        my_name1 = argv[1];
    }
    else if (count == 3)
    {
        my_name1 = argv[1];
        my_name2 = argv[2];
    }
    else if (count > 3)
    {
        std::cout << "Usage: " << argv[0] << " [name1] [name2]" << std::endl;
        std::cout << "If no names or more than two names are provided, default names will be used." << std::endl;
    }

    Zombie* newZombie1 = newZombie(my_name1);
    newZombie1->announce();

    randomChump(my_name2);

    Zombie dog("Dog");
    {
        Zombie bird("Bird");
    }
    Zombie cat("Cat");
    delete newZombie1;
    return 0;
}

