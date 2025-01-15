#include "RPN.hpp"
#include "Macros.hpp"
#include <iostream>
#include <sstream>
#include <cctype>

Rpn::Rpn():total(0){}

Rpn::~Rpn(){}

Rpn::Rpn(const Rpn& other):total(other.total){}

Rpn &Rpn::operator=(const Rpn& other){if (this != &other)
{total = other.total;} return *this;}

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
                throw std::runtime_error("No values left to calculate with op -> " + op);
        a = st.top();
        st.pop();
        if (kse == 2 && b == 0)
                throw std::runtime_error("Division by 0, operation aborted");
        switch_func(a, b, kse);
}

void printStack(std::stack<int> s){
	if (s.empty())
		return;
	int x = s.top();
	s.pop();
	printStack(s);
	std::cerr << x << " ";
}

void Rpn::exec(char **av){
        std::stringstream ss;
        ss << av[1];
        std::string c;
        int val = 0;
        while (ss >> c){
				bool cont = true;
                if (c.size() != 1)
                        throw std::runtime_error("Value is not allowed -> " + c);
                std::string ops [4] = {"+","-","/","*"};
                for (int i = 0; i < 5; i++){
                        if (c == ops[i]){
                                calc_total(ops[i]);
								cont = false;
                        }
                }
                if (isdigit(c[0])){
                        val = atoi(c.c_str());
                        if (val > 10)
                                throw std::runtime_error("Value is out of bounds (0 - 10) -> " + c);
                        st.push(val);
                        continue;
                }
				if (cont == true)
					throw std::runtime_error("Invalid value -> " + c);
        }
        if (st.size() > 1)
		{
			std::cerr << YELLOW;
			printStack(st);
			std::cerr << std::endl << RESET;
            throw std::runtime_error("Remaining unoperated values");
		}
        else if (st.size() < 1)
                throw std::runtime_error("Calculation error");
        std::cout << YELLOW "Result: " RESET << st.top() << std::endl;
}

