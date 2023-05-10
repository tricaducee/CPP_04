#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &dog)
		this->_type = dog.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf ouaf !" << std::endl;
}
