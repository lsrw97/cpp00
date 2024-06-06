#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void) {

std::cout << "this objects are a derived class of Animal. Methods are overwritten" << std::endl << std::endl << std::endl;

  const Animal *animal = new Animal();
  const Animal *animalCat = new Cat();
  const Animal *animalDog = new Dog();
  std::cout << animalCat->getType() << " " << std::endl;
  std::cout << animalDog->getType() << " " << std::endl;
  animalCat->makeSound();  // will output the cat sound!
  animalDog->makeSound();
  animal->makeSound();
  delete animal;
  delete animalCat;
  delete animalDog;

  // std::cout << "this objects are a . Methods are overwritten" << std::endl << std::endl << std::endl;

  // const Animal *animal2 = new Animal();
  // const Cat *animalCat2 = new Cat();
  // const Dog *animalDog2 = new Dog();
  // std::cout << animalCat2->getType() << " " << std::endl;
  // std::cout << animalDog2->getType() << " " << std::endl;
  // animalCat2->makeSound();  // will output the cat sound!
  // animalDog2->makeSound();
  // animal2->makeSound();
  // delete animal2;
  // delete animalCat2;
  // delete animalDog2;

  // std::cout << "Wrongclass class derived from WrongAnimal. Doesnt override method makesound" << std::endl << std::endl << std::endl;


  // const WrongAnimal *animal3 = new WrongAnimal();
  // const WrongAnimal *animalCat3 = new WrongCat();
  // std::cout << animal3->getType() << " " << std::endl;
  // std::cout << animalCat3->getType() << " " << std::endl;
  // animal3->makeSound();
  // animalCat3->makeSound();  // makes WrongAnimal sound because makeSound in WrongAnimal
  //                   // is not virtual
  // delete animal3;
  // delete animalCat3;  // also, only calls one destructor, because destructor of
  //             // WrongAnimal is not virtual

  return 0;
}