#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

// int main()
// {
// 	AAnimal animal;
// 	std::cout << "animal : " << animal.getType() << " :" << std::endl;
// 	animal.makeSound();
// 	return 0;
// }

// int main()
// {
// 	int i;
// 	const AAnimal *animals[10];
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

int main()
{
	int i;
	AAnimal **animals = new AAnimal*[10];
	for (i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (; i < 10; i++)
		animals[i] = new Cat();
	for (i = 0; i < 10; i++)
	{
		std::cout << "animal " << i << " : " << animals[i]->getType() << " :" << std::endl;
		animals[i]->makeSound();
	}
	for (i = 0; i < 10; i++)
		delete animals[i];
	delete [] animals;
	return 0;
}
