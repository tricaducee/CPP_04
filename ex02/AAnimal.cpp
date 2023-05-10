#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimal")
{
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const &animal) : _type(animal.getType())
{
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &animal)
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	if (this != &animal)
		this->_type = animal.getType();
	return *this;
}

std::string AAnimal::getType() const
{
	return this->_type;
}
