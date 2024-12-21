#include "Array.hpp"


int main(void)
{
  Array<int> empty;
  Array<int> a(10);
  Array<int> b(a);
  Array<int> c = b;


  std::cout << "empty.getSize() = ";
  std::cout << empty.getSize() << std::endl << std::endl;

  std::cout << "a.getSize() = ";
  std::cout << a.getSize() << std::endl;

  NEWLINE
  std::cout << "A basic" << std::endl;
  for (unsigned  i = 0; i < a.getSize(); i++)
  {
    std::cout << "a[" << i << "] = ";
    std::cout << a[i] << std::endl;
  }

  std::cout << std::endl;

  for (unsigned int i = 0; i < a.getSize(); i++)
    a[i] = i;

  NEWLINE
  std::cout << "After setting values" << std::endl;
  for (unsigned  i = 0; i < a.getSize(); i++)
  {
    std::cout << "a[" << i << "] = ";
    std::cout << a[i] << std::endl;
  }

  NEWLINE
  std::cout << "b after a has been set to other values" << std::endl;
  for (unsigned  i = 0; i < b.getSize(); i++)
  {
    std::cout << "b[" << i << "] = ";
    std::cout << b[i] << std::endl;
  }

  NEWLINE
  std::cout << "displaying c after we done c = b" << std::endl;
  for (unsigned  i = 0; i < c.getSize(); i++)
  {
    std::cout << "c[" << i << "] = ";
    std::cout << c[i] << std::endl;
  }


  NEWLINE
  try
  {
    std::cout << "Trying to access a[10] and fill it with 42" << std::endl;
    a[10] = 42;
  }
  catch (Array<int>::OutOfBoundsException &e)
  {
    std::cout << e.what() << std::endl;
  }

  return 0;
}

