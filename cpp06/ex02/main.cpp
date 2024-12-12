#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void){
	srand(time(0));
	int random = rand() % 3;
	if (random == 0)
		return new A;
	else if (random == 1)
		return new B;
	else
		return new C;
	return NULL;
}

void identify(Base* p){
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown" << std::endl;
}

void identify(Base& p){
	try{
		A &a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void)a;
	} catch (std::exception &e){}
	try{
		B &b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void)b;
	} catch (std::exception &e){}
	try{
		C &c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void)c;
	} catch (std::exception &e){}
}

int main(void){
	
    Base *first = generate();
    sleep(1);
    Base *second = generate();
    sleep(1);
    Base *third = generate();
    sleep(1);
    Base *fourth = generate();

    std::cout << "first = " ; identify(first);
    std::cout << "first& = " ; identify(*first); std::cout << std::endl;
    std::cout << "second = " ; identify(second);
    std::cout << "second& = " ; identify(*second); std::cout<< std::endl;
    std::cout << "third = " ; identify(third);
    std::cout << "third& = " ; identify(*third) ; std::cout<< std::endl;
    std::cout << "fourth = " ; identify(fourth);
    std::cout << "fourth& = " ; identify(*fourth) ; std::cout << std::endl;

    delete first;
    delete second;
    delete third;
    delete fourth;
    return 0;
}

