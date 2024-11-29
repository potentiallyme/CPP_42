#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    NEWLINE
    CONSTRUCT
    Animal cow;
    Dog pup;
    Dog pup_clone;
    Cat cat;
    Cat cat_copy(cat);
    NEWLINE

    TESTS
    pup.setIdeas("Bark", 40);
    pup_clone.setIdeas("Woof", 40);
    NEWLINE
    std::cout << PURPLE << "pup idea[40]: " << RESET << pup.getIdeas()[40] << std::endl;
    std::cout << PURPLE << "pup_clone idea[40]: " << RESET << pup_clone.getIdeas()[40] << std::endl;
    pup_clone = pup;
    std::cout << BLUE << "pup_clone = pup; " << std::endl << PURPLE << "pup_clone idea[40]: " << RESET << pup_clone.getIdeas()[40] << std::endl;
    NEWLINE
    std::cout << BLUE << "If we change pup_clone's ideas they won't match pup after cloning (deep copy)" << RESET << std::endl;
    pup_clone.setIdeas("Work Baof", 40);
    std::cout << PURPLE << "pup idea[40]: " << RESET << pup.getIdeas()[40] << std::endl;
    std::cout << PURPLE << "pup_clone idea[40]: " << RESET << pup_clone.getIdeas()[40] << std::endl;
    NEWLINE
    std::cout << BLUE << "Comparing adresses to check if deep copies (cat_copy was created using the copy constructor for Cat)" << std::endl;
    std::cout << PURPLE << "cat adress: " << YELLOW << &cat << std::endl;
    std::cout << PURPLE << "cat_copy adress: " << YELLOW << &cat_copy << std::endl;
    std::cout << PURPLE << "cat's Brain adress: " << YELLOW << cat.getBrain() << std::endl;
    std::cout << PURPLE << "cat_copy's Brain adress: " << YELLOW << cat_copy.getBrain() << std::endl;
    NEWLINE
    DESTRUCT
}

