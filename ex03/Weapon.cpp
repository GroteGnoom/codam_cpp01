#include <string>
#include "Weapon.hpp"

Weapon::Weapon() {
	type = "no weapon";
}

Weapon::Weapon(std::string _type) {
	type = _type;
}

const std::string &Weapon::getType() {
	return type;
}

void Weapon::setType(std::string new_type) {
	type = new_type;
}
