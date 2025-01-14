#include "PmergeMe.hpp"
#include <deque>
#include <vector>

int main(int ac , char **av){
    try{
        if(ac > 2){
            PmergeMe<std::deque<int > > Deque(av);
            PmergeMe<std::vector<int > > Vector(av);

            std::cout << "Before: " << Deque << std::endl;
            Deque.sort();
            Vector.sort();
            std::cout << "After: " << Deque << std::endl;
            
            Deque.sort_time();
            Vector.sort_time();

        }else 
            throw "Format: ./PmergeMe value1 value2 value3 ... valueN";
    }catch(MyException &e){
        std::cerr << "Error: " << e.what() << std::endl;
    }
    return 0;
}

