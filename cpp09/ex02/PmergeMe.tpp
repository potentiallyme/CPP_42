#pragma once
#include "PmergeMe.hpp"
#include <sstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <list>
#include <vector>
#include <typeinfo>
#include <iomanip>

template <typename Container>
std::ostream& operator<<(std::ostream& os, PmergeMe<Container>& ob){
	typename Container::iterator it;
	for (it = ob.begin(); it != ob.end(); it++){
		os << *it << " ";
	}
	return os;
}

template <typename Container>
typename Container::iterator PmergeMe<Container>::begin(){
    return container.begin();
}

template <typename Container>
typename Container::iterator PmergeMe<Container>::end(){
    return container.end();
}

template <typename Container>
PmergeMe<Container>::PmergeMe(char **av){
    std::string args_string ;
    for (int i = 1 ;av[i] ;i++){
        args_string += av[i] ;
        if(av[i] != NULL)
            args_string += " ";   
    }
    std::istringstream ss(args_string);
    ValueType  n;
    while(ss >> n){
        if (std::find(container.begin(), container.end(), n) != container.end())
            throw MyException("Duplicate value detected");
       container.push_back(n);
       }
    if(container.size() != countCheck(args_string))
        throw MyException("Value too large/small");
}

template <typename Container>
size_t PmergeMe<Container>::countCheck(std::string &str){
    int w = 0;
    for(int i = 0 ; str[i] != '\0' ; i++)
    {
        if(str[i] != ' ' && str[i] != '\0'){
            w++;
            while(str[i] != ' ' && str[i] != '\0')
            {
                if(!std::isdigit( str[i]) && str[i] != '+')
                    throw MyException("Not a digit");
                i++;
            }
        }
    }
    return w;
}

template <typename Container>
int PmergeMe<Container>::jacobsthal(int k){
    return round((pow(2, k + 1) + pow(-1, k)) / 3);
}

template <typename Container>
PmergeMe<Container>::PmergeMe(){

}

template <typename Container>
void PmergeMe<Container>::doInsert(Container &main, Container &pend, ValueType odd, Container &left, Container &vec, bool is_odd, int order) {
    Iterator end;
    if (pend.size() == 1) {
        end = std::upper_bound(main.begin(), main.end(), *pend.begin());
        main.insert(end, *pend.begin());
    } else if (pend.size() > 1) {
        size_t jc = 3;
        size_t count = 0;
        size_t idx;
        size_t decrease;
        while (!pend.empty()) {
            idx = jacobsthal(jc) - jacobsthal(jc - 1);
            if (idx > pend.size())
                idx = pend.size();
            decrease = 0;
            while (idx) {
                end = main.begin();
                if (jacobsthal(jc + count) - decrease <= main.size())
                    end = main.begin() + jacobsthal(jc + count) - decrease;
                else 
					end = main.end(); 
				end = std::upper_bound(main.begin(), end, *(pend.begin() + idx - 1));
                main.insert(end, *(pend.begin() + idx - 1));
                pend.erase(pend.begin() + idx - 1);
                idx--;
                decrease++;
                count++;
            }
            jc++;
        }
    }
    Container tmp;
    if (is_odd) {
        end = std::upper_bound(main.begin(), main.end(), odd);
        main.insert(end, odd);
    }
    for (Iterator i = main.begin(); i != main.end(); i++) {
        Iterator it = std::find(vec.begin(), vec.end(), *i);
        tmp.insert(tmp.end(), it - (order - 1), it + 1);
    }
    tmp.insert(tmp.end(), left.begin(), left.end());
    vec = tmp;
}
template <typename Container>
void PmergeMe<Container>::sort(){
    sortCont(container);
}

template <typename Container>
void PmergeMe<Container>::sortCont(Container &vec) {
    static int order = 1;
    if(order == 1)
        _start = clock();
    int unit_size = vec.size() / order;
    if (unit_size < 2) 
		return;

    bool is_odd = unit_size % 2 == 1;
    Iterator start = vec.begin();
    Iterator end = vec.begin() + ((order * unit_size) - (is_odd * order));

    for (Iterator it = start; it < end; it += (order * 2)) {
        if (*(it + (order - 1)) > *(it + ((order * 2) - 1))) {
            for (int i = 0; i < order; i++) {
                std::swap(*(it + i), *(it + i + order));
            }
        }
    }

    order *= 2;
    sortCont(vec);
    order /= 2;

    Container main;
    Container pend;
    ValueType odd = 0;
    Container left;

    main.push_back(*(start + order - 1));
    main.push_back(*(start + order * 2 - 1));

    for (Iterator it = start + order * 2; it < end; it += order) {
        pend.push_back(*(it + order - 1));
        it += order;
        main.push_back(*(it + order - 1));
    }

    if (is_odd) 
		odd = *(end + order - 1);

    left.insert(left.end(), end + (order * is_odd), vec.end());

    if (is_odd || !pend.empty()) 
        doInsert(main, pend, odd, left, vec, is_odd, order);
    if(order == 1)
        _end = clock();

}

template <typename Container>
std::string PmergeMe<Container>::containerType(){
	if(typeid(container) == typeid(std::vector<typename Container::value_type>))
		return "std::vector";
	else if (typeid(container) == typeid(std::deque<typename Container::value_type>)){
		return "std::deque";
	}else if (typeid(container) == typeid(std::list<typename Container::value_type>)){
		return "std::list";
	}
	return "unkown";
}

template <typename Container>
float PmergeMe<Container>::retTime() {
	return static_cast<float>(_end - _start) / CLOCKS_PER_SEC;
}

template <typename Container>
void PmergeMe<Container>::sortTime() {
    float elapsedTime = retTime();
    std::cout << "Time to process a range of " << container.size() << " elements with " << containerType() << " : " << std::fixed << std::setprecision(6) << elapsedTime << " s" << std::endl;
}
