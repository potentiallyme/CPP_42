#include "Span.hpp"

int main(){
	try {
		TESTC
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		int sh = sp.shortestSpan();
		int lo = sp.longestSpan();
		std::cout << "Shortest span: " YELLOW << sh << RESET << std::endl;
		std::cout << "Longest span: " YELLOW << lo << RESET << std::endl;
		sp.addNumber(15);
	}
	catch (const std::exception& e){
		WHAT
	}
	NEWLINE
	try{
		TESTR
		Span sp2 = Span(100);
		std::vector<int> v;
		std::srand(time(NULL));
		for (int i = 0; i < 100; i++){
			int rand_int = rand() % 1000000;
			v.push_back(rand_int);
		}
		sp2.addNumber(v.begin(), v.end());
		int sh = sp2.shortestSpan();
		int lo = sp2.longestSpan();
		std::cout << "Shortest span: " YELLOW << sh << RESET << std::endl;
		std::cout << "Longest span: " YELLOW << lo << RESET << std::endl;
	}
	catch (const std::exception& e){
		WHAT
	}
	NEWLINE
	try{
		TESTS
		Span sp3 = Span(100000);
		std::vector<int> v2;
		std::srand(time(NULL));
		for (int i = 0; i < 100000; i++){
			int rand_int = rand() % 100000000;
			v2.push_back(rand_int);
		}
		sp3.addNumber(v2.begin(), v2.end());
		int sh = sp3.shortestSpan();
		int lo = sp3.longestSpan();
		std::cout << "Shortest span: " YELLOW << sh << RESET << std::endl;
		std::cout << "Longest span: " YELLOW << lo << RESET << std::endl;
	}
	catch (const std::exception& e){
		WHAT
	}
}

