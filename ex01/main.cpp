#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal animal;
	std::cout << "animal : " << animal.getType() << " :" << std::endl;
	animal.makeSound();
	return 0;
}

// int main()
// {
// 	int i;
// 	const Animal *animals[10];
// 	for (i = 0; i < 5; i++)
// 		animals[i] = new Dog();
// 	for (; i < 10; i++)
// 		animals[i] = new Cat();
// 	for (i = 0; i < 10; i++)
// 	{
// 		std::cout << "animal " << i << " : " << animals[i]->getType() << " :" << std::endl;
// 		animals[i]->makeSound();
// 	}
// 	for (i = 0; i < 10; i++)
// 		delete animals[i];
// 	return 0;
// }

// int main()
// {
// 	int i;
// 	Animal **animals = new Animal*[10];
// 	for (i = 0; i < 5; i++)
// 		animals[i] = new Dog();
// 	for (; i < 10; i++)
// 		animals[i] = new Cat();
// 	for (i = 0; i < 10; i++)
// 	{
// 		std::cout << "animal " << i << " : " << animals[i]->getType() << " :" << std::endl;
// 		animals[i]->makeSound();
// 	}
// 	for (i = 0; i < 10; i++)
// 		delete animals[i];
// 	delete [] animals;
// 	return 0;
// }
