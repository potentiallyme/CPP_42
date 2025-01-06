#include "Macros.hpp"

class Rpn{
	public:
		Rpn(){};
		//Rpn(const Rpn&){};
		//Rpn &operator=(const Rpn&){*this = ;
		~Rpn(){};

		void calc_total(const std::string);
		void switch_func(int,int,int);
		void exec(char**);
	private:
		std::stack<int> st;
		int total;
};

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
	//std::cerr << st.top() << std::endl;
	b = st.top();
	st.pop();
	if (st.empty())
		std::runtime_error("No values");
	//std::cerr << st.top() << std::endl;
	a = st.top();
	st.pop();
	if (kse == 2 && b == 0)
		std::runtime_error("Division by 0, operation aborted");
	switch_func(a, b, kse);
}



void Rpn::exec(char **av){
	std::stringstream ss;
	ss << av[1];
	std::stack<int> st;
	std::string c;
	int val = 0;
	while (ss >> c){
		std::string ops [4] = {"+","-","/","*"};
		for (int i = 0; i < 5; i++){
			if (c == ops[i])
				calc_total(ops[i]);
		}
		val = atoi(c.c_str());
		if (val > 10)
			std::runtime_error("val oob");
		st.push(val);
	}
	if (st.size() > 1)
		std::runtime_error("Remaining unoperated values");
}

int main(int ac, char **av){
	if (ac > 2)
		return 0;
	Rpn rpn;
	rpn.exec(av);
}

