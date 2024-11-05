#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    {
        NEWLINE
        CONSTRUCT
        Animal cow;
        Dog pup;
        Cat puss;
        Animal *dog = new Dog;
        Animal *cat = new Cat;
        NEWLINE

        TESTS
        cow.makeSound();
        pup.makeSound();
        dog->makeSound();
        puss.makeSound();
        cat->makeSound();
        NEWLINE

        DESTRUCT
        delete dog;
        delete cat;
    }
    {
        NEWLINE
        CONSTRUCT
        WrongAnimal cow;
        WrongCat puss;
        WrongAnimal *cat = new WrongCat;
        NEWLINE

        TESTS
        cow.makeSound();
        puss.makeSound();
        cat->makeSound();
        NEWLINE
        
        DESTRUCT
        delete cat;
    }
}
