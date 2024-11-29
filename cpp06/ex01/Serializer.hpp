#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include "Macros.hpp"
#include <stdint.h>

struct Data{
	int i;
	std::string s;
};

class Serializer {
private:
	Serializer();
	Serializer(const Serializer &);
	Serializer &operator=(const Serializer &);
	~Serializer();

public:
	static uintptr_t serialize(Data*);
	static Data *deserialize(uintptr_t);
};

#endif // !SERIALIZER_HPP
