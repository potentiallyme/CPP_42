#pragma once
#include <string>
#include <iostream>
#include <cstring>

template <typename Container>
class PmergeMe{
	public:
		PmergeMe();
		/*PmergeMe(const PmergeMe&);*/
		/*PmergeMe &operator=(const PmergeMe&);*/
		PmergeMe(char **av);

		typedef typename Container::value_type ValueType;
		typedef typename Container::iterator Iterator;
		void sortTime();
		void sort();
		typename Container::iterator begin();
		typename Container::iterator end();
	private:
		Container container;
		time_t _start;
		time_t _end;
		float retTime();
		int jacobsthal(int);
		size_t countCheck(std::string&);
		void sortCont(Container &);
		void doInsert(Container &, Container &, ValueType, Container &, Container &, bool, int);
		std::string containerType();
};


class MyException {             
	private:                    
		char *msg;              
	public:		                    
		MyException(const char *message){
			msg = new char[std::strlen(message) + 1];
			std::strcpy(msg, message);
		}                       
		virtual const char *what() const throw(){
			return msg;         
		}                       
		virtual ~MyException() throw(){
			delete[] msg;       
		}                       
};    

template <typename Container>
std::ostream& operator<<(std::ostream&, const PmergeMe<Container>&);

#include "PmergeMe.tpp"
