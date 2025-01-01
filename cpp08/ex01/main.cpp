#include "Span.hpp"

int main(){
	TESTC
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.addNumber(15);
	std::cout << "Shortest span: " YELLOW << sp.shortestSpan() << RESET << std::endl;
	std::cout << "Longest span: " YELLOW << sp.longestSpan() << RESET << std::endl;
	TESTR
	Span sp2 = Span(100);
	std::vector<int> v;
	std::srand(time(NULL));
	for (int i = 0; i < 100; i++){
		int rand_int = rand() % 1000000;
		v.push_back(rand_int);
	}
	sp2.addNumber(v.begin(), v.end());
	std::cout << "Shortest span: " YELLOW << sp2.shortestSpan() << RESET << std::endl;
	std::cout << "Longest span: " YELLOW << sp2.longestSpan() << RESET << std::endl;
	TESTS
	Span sp3 = Span(100000);
	std::vector<int> v2;
	std::srand(time(NULL));
	for (int i = 0; i < 100000; i++){
		int rand_int = rand() % 100000000;
		v2.push_back(rand_int);
	}
	sp3.addNumber(v2.begin(), v2.end());
	std::cout << "Shortest span: " YELLOW << sp3.shortestSpan() << RESET << std::endl;
	std::cout << "Longest span: " YELLOW << sp3.longestSpan() << RESET << std::endl;
}

