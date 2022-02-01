
#include "Zombie.hpp"

int main()
{
	Zombie* nz = newZombie("newzomb");
	nz->announce();

	randomChump("rando");

	delete(nz);

}
