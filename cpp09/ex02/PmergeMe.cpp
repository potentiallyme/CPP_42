#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){}
PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(const PmergeMe& o):_vec(o._vec),_deq(o._deq){}

PmergeMe &PmergeMe::operator=(const PmergeMe& o){
	if (*this != other){
		_vec = o._vec;
		_deq = o._deq;
	}
	return *this;
}

void PmergeMe::setVec(const std::vector<int>& v){
	_vec = v;
}

void PmergeMe::setDeq(const std::vector<int>& d){
	_deq = d;
}

std::vector<int>& PmergeMe::getVec(){
	return _vec;
}

std::vector<int>& PmergeMe::getDeq(){
	return _deq;
}

