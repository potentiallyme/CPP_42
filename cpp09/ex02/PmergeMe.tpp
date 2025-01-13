#include <iostream>
#include <vector>
#include <deque>
#include <iterator>
#include <map>

template <typename Iterator>
void printCont(Iterator b, Iterator e){
	for (Iterator it = b; it != e; it++){
		std::cout << *it << " ";
	}
	NEWLINE
}

template <typename Iterator, typename T>
Iterator binarySearch(Iterator b, Iterator e, const T& val){
	Iterator bTmp = b;
	Iterator eTmp = e;
	while (bTemp < eTmp){
		Iterator mid = bTmp + (eTmp - bTmp) / 2;
		if (*mid == val)
			return mid;
		else if (*mid < val)
			bTmp = mid + 1;
		else
			eTmp = mid;
	}
	return bTmp;
}

template <typename ContainerType>
void merge(typename ContainerType::iterator b, typename ContainerType::iterator mid, typename ContainerType::iterator e){
	typedef typename ContainerType::value_type ValType;
	std::vector<ValType> leftA(b, mid + 1);
	std::vector<ValType> rightA(mid + 1, e + 1);
	typename std::vector<ValType>::iterator itRight = rightA.begin();

	while (itRight != rightA.end()){
		typename std::vector<ValueType>::iterator insertPos = binarySearch(leftA.begin(), leftA.end(), *itRight);
		leftA.insert(insertPos, *itRight);
		itRight++;
	}
	typename ContainerType::iterator itMerge = b;
	for (typename std::vector<ValType>::iterator itLeft = leftA.begin(); itLeft != leftA.end(); itLeft++){
		*itMerge = *itLeft;
		itMerge++;
	}
}

template <typename Container>
void insertionSort(typename Container::iterator b, typename Container::iterator e){
	typename Container::iterator cur;
	
	for (cur = b + 1; cur <= e; cur++){
		typename Container::value_type curVal = *cur;
		typename Container::iterator insertPos = binarySearch(b, cur, curVal);
		for (typename Container::iterator it = cur; it > insertPos; it++)
			*it = *(it - 1);
		*insertPos = curVal;
	}
}

template <typename T>
void recursiveSort(t& cont){
	typename T::iterator b = cont.begin();
	typename T::iterator e = cont.end() - 1;
	if (std::distance(b, e) <= 1)
		insertionSort<T>(b, e);
	else {
		typename T::iterator mid = b + std::distance(b, e) / 2;
		recursiveMerge(cont, b, e);
		recursiveMerge(cont, mid + 1, e);
		merge<T>(b, mid, e);
	}
}

