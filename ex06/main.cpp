#include "Karen.hpp"
#include <iostream>
#include <string>

enum level_e {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	NONE
};

int main(int argc, char **argv) {
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	Karen harl;
	std::string level_str;

	enum level_e level = NONE;

	if (argc != 2)
	{
		std::cout << "The Karen filter requires 1 argument" << std::endl;
		return (1);
	}
	level_str = argv[1];
	for (int i = 0; i < 4; i ++) {
		if (level_str == levels[i])
			level = (enum level_e)i;
	}
	switch (level) {
	case NONE:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		break;
	case DEBUG:
		std::cout << "[ " << "DEBUG" << " ]" << std::endl;
		harl.complain("DEBUG");
		std::cout << std::endl;
	case INFO:
		std::cout << "[ " << "INFO" << " ]" << std::endl;
		harl.complain("INFO");
		std::cout << std::endl;
	case WARNING:
		std::cout << "[ " << "WARNING" << " ]" << std::endl;
		harl.complain("WARNING");
		std::cout << std::endl;
	case ERROR:
		std::cout << "[ " << "ERROR" << " ]" << std::endl;
		harl.complain("ERROR");
		std::cout << std::endl;
	}
}
