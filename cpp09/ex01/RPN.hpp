#ifndef RPN_HPP
#define RPN_HPP
#include "Macros.hpp"

class Rpn{
        public:
                Rpn(){};
                Rpn(const Rpn&){};
                Rpn &operator=(const Rpn&){*this = ;
                ~Rpn(){};

                void calc_total(const std::string);
                void switch_func(int,int,int);
                void exec(char**);
        private:
                std::stack<int> st;
                int total;
};

#endif

