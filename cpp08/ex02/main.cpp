#include "MutantStack.hpp"

int main()
{
	std::cout << BLUE "### SUBJECT TESTS ###" RESET << std::endl;
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << "top: " << mstack.top() << std::endl;

	mstack.pop();

	std::cout << "size: " << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::itr it = mstack.begin();
	MutantStack<int>::itr ite = mstack.end();
	
	++it;
	--it;
	std::cout << "stack: ";
	while (it != ite)
	{
		std::cout << *it << " ";
		++it;
	}
	std::cout << std::endl;
	std::stack<int> s(mstack);

	NEWLINE
	std::cout << BLUE << "### STRING TESTS ###" RESET << std::endl;
    	MutantStack<std::string> stringStack;
    	stringStack.push("Hello");
    	stringStack.push("My");
    	stringStack.push("Good");
    	stringStack.push("Friend!");

	std::cout << BLUE "All elements:" RESET << std::endl;
    	for (MutantStack<std::string>::c_itr it = stringStack.begin(); it != stringStack.end(); ++it)
	{
       		std::cout << *it << " ";
	}
	std::cout << std::endl;

    	std::cout << BLUE "Top element: " RESET << stringStack.top() << std::endl;
    	stringStack.pop();
    	std::cout << BLUE "Top after pop: " RESET << stringStack.top() << std::endl;
	std::cout << std::endl;
	return 0;
}
