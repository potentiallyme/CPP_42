#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include "Macros.hpp"

class MyException;

template <typename T>
typename T::iterator easyfind(T &haystack, int needle){
	typename T::iterator ret = std::find(haystack.begin(), haystack.end(), needle);
	std::stringstream ss;
	ss << needle;
	std::string str = ss.str();
	return (ret != haystack.end() ? ret : throw MyException(str.c_str()));
}

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

#endif
