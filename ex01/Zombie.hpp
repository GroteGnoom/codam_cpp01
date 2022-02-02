#include <string>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		static Zombie *zombieHorde(int N, std::string name);
		void announce ( void );
	private:
		std::string name;
};
