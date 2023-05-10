#ifndef DOG_HPP
# define DOG_HPP
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
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