/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eelisaro <eelisaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:25:45 by lschrafs          #+#    #+#             */
/*   Updated: 2024/06/06 23:54:50 by eelisaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {

  std::cout << "show constructor and destructor" << std::endl;

  Dog *dog = new Dog();
  Cat *cat = new Cat();

  delete dog;
  delete cat;

  std::cout << std::endl << " Array of animals, call and delete them " << std::endl << std::endl;

  Animal *array_animals[10];

  for (int i = 0; i < 10; i++) {
    if (i % 2)
      array_animals[i] = new Dog();
    else
      array_animals[i] = new Cat();
  }
  std::cout << std::endl;

  for (int i = 0; i < 10; i++)
    array_animals[i]->makeSound();

  std::cout << std::endl;

  for (int i = 0; i < 10; i++)
    delete array_animals[i];

  std::cout << std::endl << "--- Test for deep copy ---" << std::endl << std::endl;

  Cat *cat2 = new Cat();
  cat2->setIdea("Hmm... fish!");
  cat2->setIdea("I wanna play...");
  cat2->printIdeas();

  std::cout << std::endl << "--- Making a deep copy ---" << std::endl
            << std::endl;

  Cat *cat3 = new Cat(*cat2);
  cat2->setIdea("Gotta sleep now...");
  std::cout << std::endl;
  cat2->printIdeas();
  std::cout << std::endl;
  cat3->printIdeas();
  std::cout << std::endl;

  std::cout << std::endl << "--- Copy assignment operator ---" << std::endl
            << std::endl;

	std::cout << "New Cat" << std::endl << std::endl;
  Cat *cat4 = new Cat();
	std::cout << std::endl <<"Assigning cat 3 to cat 4" << std::endl << std::endl;
  *cat4 = *cat3;
	std::cout << std::endl ;
  cat4->printIdeas();
  std::cout << std::endl;
  cat3->setIdea("No sleeping now!!!");
  cat3->printIdeas();
  std::cout << std::endl;
  cat4->printIdeas();
  std::cout << std::endl;

	std::cout << std::endl << "--- Destruction ---" << std::endl
            << std::endl;

  delete cat2;
  delete cat3;
  delete cat4;
  return 0;
}
