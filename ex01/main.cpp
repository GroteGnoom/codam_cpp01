
#include "Zombie.hpp"

int main()
{
	Zombie *banana_horde = Zombie::zombieHorde(100, "banana");
	for (int i = 0; i < 100; i ++) {
		banana_horde[i].announce();
	}
	delete[] banana_horde;
}
