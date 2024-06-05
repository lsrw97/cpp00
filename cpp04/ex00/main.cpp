#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    std::cout << dog->getType() << " dog " << std::endl;
    std::cout << cat->getType() << " cat " << std::endl;
    dog->makeSound(); 
    cat->makeSound();

    std::cout << animal << std::endl;

    delete dog;
    delete cat;
    delete animal;

    return 0;
}