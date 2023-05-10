#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP
#include <iostream>
#include <string>

class WrongAnimal
{
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &animal);
		virtual ~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const &animal);
		void makeSound() const;
		std::string getType() const;
	protected:
		std::string _type;
};

#endif