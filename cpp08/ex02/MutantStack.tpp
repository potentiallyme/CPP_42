#include "MutantStack.hpp"

template<typename T>
MutantStack<T>::MutantStack(){CONSTRUCTOR("MutantStack");}

template<typename T>
MutantStack<T>::~MutantStack(){DESTRUCTOR("MutantStack");}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack& other){*this = other;COPY("MutantStack");}

template<typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other){
	if (*this != other){
		this->c = other.c;
	}
	return *this;
}

template<typename T>
typename MutantStack<T>::itr MutantStack<T>::begin()
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::itr MutantStack<T>::end()
{
	return (this->c.end());
}

template<typename T>
typename MutantStack<T>::c_itr MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template<typename T>
typename MutantStack<T>::c_itr MutantStack<T>::end() const
{
	return (this->c.end());
}
