#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    std::list<int> l;

    for (int i = 1; i < 101; i++)
    {
        v.push_back(i);
        l.push_back(i);
    }

    try
    {
        std::vector<int>::iterator it = easyfind(v, 57);
        std::cout << GREEN "Value " << YELLOW << *it << GREEN " found in vector" << std::endl;
    }
    catch (MyException &e)
    {
        std::cout << RED "Value " << e.what() << "not found in vector" RESET << std::endl;
	} 

    try
    {
        std::list<int>::iterator it = easyfind(l, -120);
        std::cout << GREEN "Value " << YELLOW << *it << GREEN " found in vector" << std::endl;
    }
    catch (MyException &e)
    {
     	std::cout << RED "Value " YELLOW << e.what() << RED " not found in list" RESET << std::endl;
    }


    

    return 0;
}

