#include <fstream>
#include <iostream>
#include <string>

//todo: multiple per line?

int main(int argc, char *argv[]) {
	if (argc < 4)
		return 1;

	std::string from = argv[2];
	std::string to = argv[3];
	std::ifstream in(argv[1]);
	std::string outfilename = argv[1];
	outfilename.append("replace");
	std::ofstream out(outfilename);
	std::string line;
	while (std::getline(in, line)) {
		size_t pos = line.find(from);
		//std::cout << pos << " " << std::string::npos << " " << std::endl;
		//std::cout << line << std::endl;
		if (pos != std::string::npos) {
			std::string part1 = line.substr(0, pos);
			std::string part2 = to;
			std::string part3 = line.substr(pos + from.size(), line.size());
			part1.append(part2).append(part3);
			out << part1 << std::endl;
		} else {
			out << line << std::endl;
		}
	}
}
