#include "Span.hpp"

Span::Span():_N(0){CONSTRUCTOR("Span");}

Span::Span(unsigned int N):_N(N){PARAMETER("Span");}

Span::Span(const Span &other){*this = other; COPY("Span");}

Span &Span::operator=(const Span &other){
	if (this != &other){
		_N = other._N;
		_vec = other._vec;
	}
	return *this;
}

Span::~Span(){DESTRUCTOR("Span");}

void Span::addNumber(int n){
	if (_vec.size() >= _N)
		throw std::out_of_range("Span is full");
	_vec.push_back(n);
}

void Span::addNumber(std::vector<int>::iterator b, std::vector<int>::iterator e){
	if (_vec.size() + std::distance(b, e) > _N)
		throw std::out_of_range("Span is full");
}

int Span::shortestSpan(){
	if (_vec.size() <= 1)
		throw std::logic_error("Not enough elements");
	std::vector<int> temp = _vec;
	std::sort(temp.begin(), temp.end());
	int shortest = temp[1] - temp[0];
	for (unsigned int i = 1; i < temp.size(); i++){
		if (temp[i] - temp[i - 1] < shortest)
			shortest = temp[i] - temp[i - 1];
	}
	return shortest;
}

int Span::longestSpan(){
	if (_vec.size() <= 1)
		throw std::logic_error("Not enough elements");
	std::vector<int> temp = _vec;
	std::sort(temp.begin(), temp.end());
	return temp[temp.size() - 1] - temp[0];
}

