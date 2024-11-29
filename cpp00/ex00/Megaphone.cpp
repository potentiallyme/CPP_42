#include <iostream>

int main(int ac, char **av)
{
    std::string curr;
    for (int i = 1; i < ac; i++)
    {
        curr = av[i];
        for (int j = 0; j < (int)curr.length() ; j++)
            std::cout << (char)toupper(av[i][j]);
        std::cout << " ";
    }
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}
