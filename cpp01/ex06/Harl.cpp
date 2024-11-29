#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug() const{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-" \
	<< "special-ketchup burger. I really do!" << std::endl;
	std::cout << std::endl;
}

void Harl::info() const{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t " \
	<< "put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	std::cout << std::endl;
}

void Harl::warning() const{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming " \
	<< "for years whereas you started working here since last month." << std::endl;
	std::cout << std::endl;
}

void Harl::error() const{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
	std::cout << std::endl;
}

void Harl::complain(std::string level){
	typedef void (Harl::*func_p)(void) const;
	const func_p harl_funcs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	const char *levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++){
		if (levels[i] == level){
			(this->*(harl_funcs[i]))();
			return;
		}
		if (i == 3)
			std::cout << "[ Probably complaining about insignificant" \
			<< " problems ]" << std::endl;
	}
}

