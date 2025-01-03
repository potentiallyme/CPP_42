#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include "Macros.hpp"

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack const &other);
	MutantStack &operator=(MutantStack const &other);
	~MutantStack();


	typedef typename std::stack<T>::container_type ctnr;
	typedef typename ctnr::iterator itr;
	typedef typename ctnr::const_iterator c_itr;

	itr begin();
	itr end();

	c_itr begin() const;
	c_itr end() const;
};

# include "MutantStack.tpp"

#endif
