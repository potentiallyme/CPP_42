#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	if (ac < 2){
		std::cerr << "Wrong number of arguments" << std::endl;
		std::cerr << "Usage: ./btc input_file_path" << std::endl;
		return (-1);
	}

	try{
		bitcoinExchange("./data.csv", av[1]);
	}
	catch (const std::exception &e){
		std::cout << RED "Error: " RESET << e.what() << std::endl;
	}
}
		
