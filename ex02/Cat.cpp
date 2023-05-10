#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(Cat const &cat) : AAnimal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_brain = new Brain();
	*this->_brain = *cat.getBrain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->_brain;
}

Cat &Cat::operator=(Cat const &cat)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &cat)
	{
		this->_type = cat.getType();
		*this->_brain = *cat.getBrain();
	}
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou miaou !" << std::endl;
}

Brain *Cat::getBrain() const
{
	return this->_brain;
}
