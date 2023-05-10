#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongcat = new WrongCat();
	std::cout << "meta : " << meta->getType() << " :" << std::endl;
	meta->makeSound();
	std::cout << "dog : " << dog->getType() << " :" << std::endl;
	dog->makeSound();
	std::cout << "cat : " << cat->getType() << " :" << std::endl;
	cat->makeSound();
	std::cout << "wrongcat : " << wrongcat->getType() << " :" << std::endl;
	wrongcat->makeSound();
	delete meta;
	delete dog;
	delete cat;
	delete wrongcat;
	return 0;
}