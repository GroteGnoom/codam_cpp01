#include <string>

class Harl {
	public:
		void complain(std::string level);
	private:
		static void debug(void);
		static void info(void);
		static void warning(void);
		static void error(void);
};
