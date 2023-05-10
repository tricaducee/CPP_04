#include "AMateria.hpp"

AMateria::AMateria() : _type("")
{
	//std::cout << "AMateria default constructor called" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	//std::cout << "AMateria type constructor called" << std::endl;
}

AMateria::AMateria(AMateria const &materia)
{
	//std::cout << "AMateria copy constructor called" << std::endl;
	this->_type = materia.getType();
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(AMateria const &materia)
{
	//std::cout << "AMateria assignation operator called" << std::endl;
	this->_type = materia.getType();
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (this->_type);
}
