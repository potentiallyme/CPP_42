#pragma once
#include "Macros.hpp"

class PmergeMe{
	private:

		std::vector<int> _vec;
		std::deque<int> _deq;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe&);
		PmergeMe &operator=(const PmergeMe&);
		void setVec(const std::vector<int>&);
		void setDeq(const std::deq<int>&);
		std::vector<int> &getVec();
		std::deque<int> &getDeq();
}

#include "PmergeMe.tpp"
