#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
	if (argc < 4)
	{
		std::cout << "usage: ft_sed file string1 string2" << std::endl;
		return 1;
	}
	std::string from = argv[2];
	std::string to = argv[3];
	std::ifstream in(argv[1]);
	std::string outfilename = argv[1];
	outfilename.append(".replace");
	std::ofstream out(outfilename);
	if (!in) {
		std::cout << "file not found: " << argv[1] << std::endl;
		return 2;
	}
	if (!out) {
		std::cout << "could not open " << outfilename << std::endl;
		return 3;
	}
	if (!from.size()) {
		std::cout << "empty string1 is not allowed" << std::endl;
		return 4;
	}
	std::string line;
	while (std::getline(in, line)) {
		size_t pos = 0;
		while (pos != std::string::npos) {
			pos = line.find(from, pos);
			if (pos != std::string::npos) {
				line = line.substr(0, pos) + to + line.substr(pos + from.size(), line.size());
				pos++;
			} else
				out << line << std::endl;
		}
	}
}
