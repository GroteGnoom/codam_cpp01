#pragma once
#include "string"
#include "Weapon.hpp"

class HumanB {
	public:
		HumanB(std::string _name);
		void setWeapon(Weapon _weapon);
		void attack();
	private:
		Weapon _weapon;
		std::string _name;
};

