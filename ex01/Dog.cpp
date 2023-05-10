#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &dog) : Animal(dog)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this->_brain = *dog.getBrain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
}

Dog &Dog::operator=(Dog const &dog)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &dog)
	{
		this->_type = dog.getType();
		*this->_brain = *dog.getBrain();
	}
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "Ouaf ouaf !" << std::endl;
}

Brain *Dog::getBrain() const
{
	return this->_brain;
}
