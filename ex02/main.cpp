#include <string>
#include <iostream>
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *sp = &str;
	std::string &sr = str;

	std::cout << "address of string: " << &str << std::endl;
	std::cout << "pointer to string: " << sp << std::endl;
	std::cout << "address of reference to string: " << &sr << std::endl;

	std::cout << std::endl;

	std::cout << "string: " << str << std::endl;
	std::cout << "dereferenced pointer to string: " << *sp << std::endl;
	std::cout << "reference to string: " << sr << std::endl;


}
