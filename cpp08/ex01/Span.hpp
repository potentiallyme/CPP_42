#ifndef SPAN_HPP
#define SPAN_HPP
#include "Macros.hpp"

class Span{
	private:
		unsigned int _N;
		std::vector<int> _vec;
	public:
		Span();
		Span(unsigned int);
		~Span();
		Span(const Span&);
		Span &operator=(const Span&);

		void addNumber(int);
		int shortestSpan();
		int longestSpan();
		void addNumber(std::vector<int>::iterator, std::vector<int>::iterator);
};

#endif // !SPAN_HPPj
