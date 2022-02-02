#pragma once
#include <string>

class Weapon {
	public:
		Weapon();
		Weapon(std::string _type);
		const std::string &getType();
		void setType(std::string new_type);
	private:
		std::string type;
};


