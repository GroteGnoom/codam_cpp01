#pragma once
#include "string"
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string _name, Weapon _weapon);
		Weapon weapon;
		std::string name;
		void attack();
};

