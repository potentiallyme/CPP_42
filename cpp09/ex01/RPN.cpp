#include "RPN.hpp"

Rpn::Rpn():total(0){};

Rpn::~Rpn(){};

Rpn::Rpn(const Rpn& other):total(other.total){}

Rpn &Rpn::operator=(const Rpn& other){if (*this != other)
{total = other.total; return *this;}}

void Rpn::switch_func(int a, int b, int kse){
        switch (kse){
                case 0:
                        st.push(a + b);
                        break;
                case 1:
                        st.push(a - b);
                        break;
                case 2:
                        st.push(a / b);
                        break;
                case 3:
                        st.push(a * b);
                        break;
                default:
                        st.push(a);
                        st.push(b);
        }
}

void Rpn::calc_total(const std::string op){
        int a, b, kse = -1;
        std::string ops [4] = {"+","-","/","*"};
        for (int i = 0; i < 4; i++){
                if (ops[i] == op)
                        kse = i;
        }
        b = st.top();
        st.pop();
        if (st.empty())
                std::runtime_error("No values");
        a = st.top();
        st.pop();
        if (kse == 2 && b == 0)
                std::runtime_error("Division by 0, operation aborted");
        switch_func(a, b, kse);
}

void Rpn::exec(char **av){
        std::stringstream ss;
        ss << av[1];
        std::string c;
        int val = 0;
        while (ss >> c){
                if (c.size() > 1)
                        std::runtime_error("value is not allowed");
                std::string ops [4] = {"+","-","/","*"};
                for (int i = 0; i < 5; i++){
                        if (c == ops[i]){
                                calc_total(ops[i]);
                                continue;
                        }
                }
                if (isdigit(c.c_str()[0])){
                        val = atoi(c.c_str());
                        if (val > 10)
                                std::runtime_error("val oob");
                        st.push(val);
                        continue;
                }
                std::runtime_error("invalid value");
        }
        if (st.size() > 1)
                std::runtime_error("Remaining unoperated values");
        else if (st.size() < 1)
                std::runtime_error("Calculation error");
        std::cout << YELLOW "Result: " RESET << st.top() << std::endl;
}

