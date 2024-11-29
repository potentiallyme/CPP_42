#include "Harl.hpp"

int err_msg(std::string msg){
	std::cout << msg << std::endl;
	return 0;
}

int main(int ac, char **av){
	if (ac != 2)
		return (err_msg("[ Complaining about nothing as usual ]"));
	Harl complaint;
	complaint.complain(av[1]);
}

