#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include "Macros.hpp"

template <typename T>
typename T::iterator easyfind(T &haystack, int needle){
	typename T::iterator ret = std::find(haystack.begin(), haystack.end(), needle);
	return (ret != haystack.end() ? ret : throw std::exception());
}

#endif
