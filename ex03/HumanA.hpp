#pragma once
#include "string"
#include "Weapon.hpp"

class HumanA {
	public:
		HumanA(std::string _name, Weapon _weapon);
		void attack();
	private:
		Weapon _weapon;
		std::string _name;
};

