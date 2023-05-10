#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(Animal const &animal) : _type(animal.getType())
{
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &animal)
{
	std::cout << "Animal assignation operator called" << std::endl;
	if (this != &animal)
		this->_type = animal.getType();
	return *this;
}

std::string Animal::getType() const
{
	return this->_type;
}

void Animal::makeSound() const {}
