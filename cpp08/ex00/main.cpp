#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
    std::list<int> l;

    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
        l.push_back(i);
    }

    try
    {
        std::vector<int>::iterator it = easyfind(v, 5);
        std::cout << "Value found in vector: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found in vector" << std::endl;
    }

    try
    {
        std::list<int>::iterator it = easyfind(l, 11);
        std::cout << "Value found in list: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found in list" << std::endl;
    }

    return 0;
}
