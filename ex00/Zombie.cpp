#include "Zombie.hpp"
#include <iostream>

void Zombie::announce (void) {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string n) {
	name = n;
}

Zombie::~Zombie() {
	std::cout << name << " will now be destroyed" << std::endl;
}

