#include "PmergeMe.hpp"

long int getSum(long n){
	return n * (n + 1) / 2;
}

bool isPos(const std::string& s){
	for (size_t i = 0; i < s.length(); i++){
		if (!isdigit(s[i]))
			return false;
	}
	return !s.empty();
}

std::string myItoa(int n){
	std::stringstream ss;
	ss << n;
	return ss.str();
}

int main(int ac, char **av){
	try{
		if (ac < 2)
			std::cerr << RED "Not enough arguments\nFormat: ./PmergeMe val1 val2 val3 ... valN" RESET << std::endl;

	}
}
