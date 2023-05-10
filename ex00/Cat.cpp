#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &cat)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &cat)
		this->_type = cat.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Miaou miaou !" << std::endl;
}
