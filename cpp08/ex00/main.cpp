#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    std::list<int> l;

    for (int i = 100; i < 110; i++)
    {
        v.push_back(i);
        l.push_back(i);
    }

    try
    {
        std::vector<int>::iterator it = easyfind(v, 105);
        std::cout << GREEN "Value " << YELLOW << *it << GREEN " found in vector" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << RED "Value not found in vector" RESET << std::endl;
	} 

    try
    {
        std::list<int>::iterator it = easyfind(l, 111);
        std::cout << GREEN "Value " << YELLOW << *it << GREEN " found in vector" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << RED "Value not found in list" RESET << std::endl;
    }

    return 0;
}
