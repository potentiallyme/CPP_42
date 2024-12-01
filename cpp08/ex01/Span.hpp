#ifndef SPAN_HPP
#define SPAN_HPP
#include "Macros.hpp"

class Span{
	public:
		Span();
		Span(int);
		~Span();
		Span(const Span&);
Span &operator=(const Span&);

		void addNumber(int);

}

#endif // !SPAN_HPPj
