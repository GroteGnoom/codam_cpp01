#include <string>
#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name) {
}

void HumanB::attack() {
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << "." << std::endl;
	else
		std::cout << _name << " does not have a weapon." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
}
