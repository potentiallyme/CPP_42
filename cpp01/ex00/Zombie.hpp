#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie{

	public:
		void announce(void);
		void get_name(void);
	private:
		std::string name;
}

#endif
