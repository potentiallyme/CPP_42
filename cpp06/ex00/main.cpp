#include "ScalarConverter.hpp"

int main(int ac, char *av[]){
  NEWLINE
  if (ac < 2)
    return 0;
  int i = 0;
  while (av[++i]){
    std::cout << BBLUE "## ARG["<<i<<"] ##" RESET<<std::endl;
    if (av[i][0])
      ScalarConverter::convert(av[i]);
    std::cout << std::resetiosflags(std::ios::fixed) << std::endl;
  }
}
