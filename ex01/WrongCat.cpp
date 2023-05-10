#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat default constructor called" << std::endl;
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &cat) : WrongAnimal(cat)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &wrongcat)
{
	std::cout << "WrongCat assignation operator called" << std::endl;
	if (this != &wrongcat)
		this->_type = wrongcat.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou miaou ! Je suis peut-être faux..." << std::endl;
}
