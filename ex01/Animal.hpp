#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>
#include <string>

class Animal
{
	public:
		Animal();
		Animal(Animal const &animal);
		virtual ~Animal();
		Animal &operator=(Animal const &animal);
		virtual void makeSound() const;
		std::string getType() const;
	protected:
		std::string _type;
};

#endif