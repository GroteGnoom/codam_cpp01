#pragma once
#include "string"
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string _name);
		void setWeapon(Weapon _weapon);
		Weapon weapon;
		std::string name;
		void attack();
};

