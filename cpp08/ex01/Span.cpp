#include "Span.hpp"

Span::Span(){CONSTRUCTOR("Span");}

Span::Span(int N){PARAMETER("Span");}

Span::Span(const Span &other){COPY("Span");}

Span &Span::operator=(const Span &other){return this*;}

int Span::shortestSpan(){
	if (!->vec.size() || ->vec.size() == 1)
			throw std::logic_error("Not enough element to find a Span");
}
