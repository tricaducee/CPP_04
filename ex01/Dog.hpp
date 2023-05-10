#ifndef DOG_HPP
# define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog const &dog);
		~Dog();
		Dog &operator=(Dog const &dog);
		virtual void makeSound() const;
		Brain *getBrain() const;
	private:
		Brain *_brain;
};

#endif