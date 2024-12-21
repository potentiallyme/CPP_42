#include "iter.hpp"
#include "Macros.hpp"

void *increment(int &i) {
    i++;
    return (0);
}

void *transform(std::string &s) {
    s = "World";
    return (0);
}

int main(void)
{
	NEWLINE
    int *a = new int[5];

    for (int i = 0; i < 5; i++){
        a[i] = i;}
	
	std::cout << YELLOW "# BEFORE #" BLUE << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << a[i] << std::endl;}
	
    iter(a, 5, increment);
	NEWLINE
	std::cout << YELLOW "# AFTER #" BLUE << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << a[i] << std::endl;}
	
    delete[] a;
	
	NEWLINE
		
    std::string *b = new std::string[5];

    for (int i = 0; i < 5; i++){
        b[i] = "Hello";}
	
	std::cout << YELLOW "# BEFORE #" BLUE << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << b[i] << std::endl;}
	
    iter(b, 5, transform);
	NEWLINE
	std::cout << YELLOW "# AFTER #" BLUE << std::endl;

    for (int i = 0; i < 5; i++){
        std::cout << b[i] << std::endl;}
	
    delete[] b;
	NEWLINE
    return (0);
}

