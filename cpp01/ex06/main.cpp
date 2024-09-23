#include "Harl.hpp"

int err_msg(std::string msg){
	std::cout << msg << std::endl;
	return 0;
}

int return_level(std::string level){
	const char *levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	while (i < 4){
		if (levels[i] == level)
			return i;
		i++;
	}
	return -1;
}

void harl_switch(Harl &complaint, std::string level){
	switch (return_level(level)){
		case 0:
			complaint.complain("DEBUG");
			/* FALLTHROUGH */
		case 1:
			complaint.complain("INFO");
			/* FALLTHROUGH */
		case 2:
			complaint.complain("WARNING");
			/* FALLTHROUGH */
		case 3:
			complaint.complain("ERROR");
			/* FALLTHROUGH */
			break;
		default:
			complaint.complain("WRONG");
	}
}

int main(int ac, char **av){
	if (ac != 2)
		return (err_msg("[ Complaining about nothing... typical ]"));
	Harl complaint;
	harl_switch(complaint, av[1]);
	return 0;
}
