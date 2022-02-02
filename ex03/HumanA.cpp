#include <string>
#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string _name, Weapon _weapon) {
	name = _name;
	weapon = _weapon;
}

void HumanA::attack() {
	std::cout << name << " attacks with their" << weapon.getType() << std::endl;
}
